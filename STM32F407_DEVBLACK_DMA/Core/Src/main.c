/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include "lcd.h"
#include "lvgl.h"
#include "touch.h"
#include "generated/gui_guider.h"
#define RESCALE_FACTOR 1000000


/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
SPI_HandleTypeDef hspi2;

DMA_HandleTypeDef hdma_memtomem_dma2_stream0;
SRAM_HandleTypeDef hsram1;

osThreadId defaultTaskHandle;
uint32_t defaultTaskBuffer[ 512 ];
osStaticThreadDef_t defaultTaskControlBlock;
/* USER CODE BEGIN PV */

extern uint8_t notcomplete;

void TransferComplete(DMA_HandleTypeDef *_hdma)
{
	notcomplete = 0;

}
void TransferError(DMA_HandleTypeDef *_hdma)
{

}

lv_ui guider_ui;


/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_FSMC_Init(void);
static void MX_SPI2_Init(void);
void StartDefaultTask(void const * argument);

/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/*******************************************************************************
function:
		Use the default calibration factor
*******************************************************************************/
#if 0
uint8_t TP_GetTouch_CB(lv_indev_drv_t * drv, lv_indev_data_t *data)
//uint8_t TP_GetTouch(void)
{
	static int16_t last_x = 0;
	static int16_t last_y = 0;

	TP_Scan(0);
	if (sTP_DEV.chStatus & TP_PRESS_DOWN)
	{
		//sTP_Draw.Xpoint = sTP_DEV.fXfac * sTP_DEV.Xpoint + sTP_DEV.iXoff;
		//sTP_Draw.Ypoint = sTP_DEV.fYfac * sTP_DEV.Ypoint + sTP_DEV.iYoff;
		data->point.x = sTP_Draw.Xpoint;
		data->point.y = sTP_Draw.Ypoint;
		last_x = data->point.x;
		last_y = data->point.y;
		data->state = LV_INDEV_STATE_PR;
	}
	else
	{
		data->point.x = last_x;
		data->point.y = last_y;
		data->state = LV_INDEV_STATE_REL;
	}
	return(false);
}
#endif
void TP_Init( )
{
    lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.read_cb = XPT2046_TouchGetCoordinates;
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    lv_indev_drv_register(&indev_drv);
}

int32_t A2 = 834850;
int32_t B2 = -9625;
int32_t C2 = 23783610;
int32_t D2 = -10244;
int32_t E2 = 888915;
int32_t F2 = 26261272;
uint16_t TSC_Value_X;
uint16_t TSC_Value_Y;
uint16_t LCD_Width  = 240;
uint16_t LCD_Height = 320;

void TP_Calibrate(void)
{
	  uint32_t coordinate_X1a = 0, coordinate_X2a = 0, coordinate_X3a = 0, coordinate_X4a = 0, coordinate_X5a = 0;
	  uint32_t coordinate_Y1a = 0, coordinate_Y2a = 0, coordinate_Y3a = 0, coordinate_Y4a = 0, coordinate_Y5a = 0;
	  uint32_t coordinate_X1b = 0, coordinate_X2b = 0, coordinate_X3b = 0, coordinate_X4b = 0, coordinate_X5b = 0;
	  uint32_t coordinate_Y1b = 0, coordinate_Y2b = 0, coordinate_Y3b = 0, coordinate_Y4b = 0, coordinate_Y5b = 0;
	  uint32_t coordinate_X1 = 0, coordinate_X2 = 0, coordinate_X3 = 0, coordinate_X4 = 0, coordinate_X5 = 0;
	  uint32_t coordinate_Y1 = 0, coordinate_Y2 = 0, coordinate_Y3 = 0, coordinate_Y4 = 0, coordinate_Y5 = 0;
	  uint16_t Xd1 = (LCD_Width / 2), Xd2 = 1 * (LCD_Width / 5), Xd3 = 4 * (LCD_Width / 5), Xd4 = 4 * (LCD_Width / 5), Xd5 = 1 * (LCD_Width / 5);
	  uint16_t Yd1 = (LCD_Height / 2), Yd2 = 1 * (LCD_Height / 5), Yd3 = 1 * (LCD_Height / 5), Yd4 = 4 * (LCD_Height / 5), Yd5 = 4 * (LCD_Height / 5);
	  double A = 0.0, B = 0.0, C = 0.0, D = 0.0, E = 0.0, F = 0.0;
	  double d = 0.0, dx1 = 0.0, dx2 = 0.0, dx3 = 0.0, dy1 = 0.0, dy2 = 0.0, dy3 = 0.0;
	  uint32_t X2_1 = 0, X2_2 = 0, X2_3 = 0, X2_4 = 0, X2_5 = 0;
	  uint32_t Y2_1 = 0, Y2_2 = 0, Y2_3 = 0, Y2_4 = 0, Y2_5 = 0;
	  uint32_t XxY_1 = 0, XxY_2 = 0, XxY_3 = 0, XxY_4 = 0, XxY_5 = 0;
	  uint32_t XxXd_1 = 0, XxXd_2 = 0, XxXd_3 = 0, XxXd_4 = 0, XxXd_5 = 0;
	  uint32_t YxXd_1 = 0, YxXd_2 = 0, YxXd_3 = 0, YxXd_4 = 0, YxXd_5 = 0;
	  uint32_t XxYd_1 = 0, XxYd_2 = 0, XxYd_3 = 0, XxYd_4 = 0, XxYd_5 = 0;
	  uint32_t YxYd_1 = 0, YxYd_2 = 0, YxYd_3 = 0, YxYd_4 = 0, YxYd_5 = 0;
	  uint32_t alfa = 0, beta = 0, chi = 0, Kx = 0, Ky = 0, Lx = 0, Ly = 0;
	  uint16_t epsilon = 0, fi = 0, Mx = 0, My = 0;

	  LCD_Clear(BLUE);
	  LCD_Fill((Xd1 - 5),(Yd1 - 5),(Xd1 + 5),(Yd1 + 5),WHITE);
	  while((XPT2046_CAL_TouchGetCoordinates(&TSC_Value_X, &TSC_Value_Y)) == false);
	  coordinate_X1a = TSC_Value_X;
	  coordinate_Y1a = TSC_Value_Y;
	  coordinate_X1b = TSC_Value_X;
	  coordinate_Y1b = TSC_Value_Y;
	  LCD_Fill(((TSC_Value_X) - 2),((TSC_Value_Y) - 2),((TSC_Value_X) + 2),((TSC_Value_Y) + 2),BLACK);
	  while((XPT2046_CAL_TouchGetCoordinates(&TSC_Value_X, &TSC_Value_Y)) != false);
	  HAL_Delay(500);

	  LCD_Clear(BLUE);
	  LCD_Fill((Xd2 - 5),(Yd2 - 5),(Xd2 + 5),(Yd2 + 5),WHITE);
	  while((XPT2046_CAL_TouchGetCoordinates(&TSC_Value_X, &TSC_Value_Y)) == false);
	  coordinate_X2a = TSC_Value_X;
	  coordinate_Y2a = TSC_Value_Y;
	  coordinate_X2b = TSC_Value_X;
	  coordinate_Y2b = TSC_Value_Y;
	  LCD_Fill(((TSC_Value_X) - 2),((TSC_Value_Y) - 2),((TSC_Value_X) + 2),((TSC_Value_Y) + 2),BLACK);
	  while((XPT2046_CAL_TouchGetCoordinates(&TSC_Value_X, &TSC_Value_Y)) != false);
	  HAL_Delay(500);

	  LCD_Clear(BLUE);
	  LCD_Fill((Xd3 - 5),(Yd3 - 5),(Xd3 + 5),(Yd3 + 5),WHITE);
	  while((XPT2046_CAL_TouchGetCoordinates(&TSC_Value_X, &TSC_Value_Y)) == false);
	  coordinate_X3a = TSC_Value_X;
	  coordinate_Y3a = TSC_Value_Y;
	  coordinate_X3b = TSC_Value_X;
	  coordinate_Y3b = TSC_Value_Y;
	  LCD_Fill(((TSC_Value_X) - 2),((TSC_Value_Y) - 2),((TSC_Value_X) + 2),((TSC_Value_Y) + 2),BLACK);
	  while((XPT2046_CAL_TouchGetCoordinates(&TSC_Value_X, &TSC_Value_Y)) != false);
	  HAL_Delay(500);

	  LCD_Clear(BLUE);
	  LCD_Fill((Xd4 - 5),(Yd4 - 5),(Xd4 + 5),(Yd4 + 5),WHITE);
	  while((XPT2046_CAL_TouchGetCoordinates(&TSC_Value_X, &TSC_Value_Y)) == false);
	  coordinate_X4a = TSC_Value_X;
	  coordinate_Y4a = TSC_Value_Y;
	  coordinate_X4b = TSC_Value_X;
	  coordinate_Y4b = TSC_Value_Y;
	  LCD_Fill(((TSC_Value_X) - 2),((TSC_Value_Y) - 2),((TSC_Value_X) + 2),((TSC_Value_Y) + 2),BLACK);
	  while((XPT2046_CAL_TouchGetCoordinates(&TSC_Value_X, &TSC_Value_Y)) != false);
	  HAL_Delay(500);

	  LCD_Clear(BLUE);
	  LCD_Fill((Xd5 - 5),(Yd5 - 5),(Xd5 + 5),(Yd5 + 5),WHITE);
	  while((XPT2046_CAL_TouchGetCoordinates(&TSC_Value_X, &TSC_Value_Y)) == false);
	  coordinate_X5a = TSC_Value_X;
	  coordinate_Y5a = TSC_Value_Y;
	  coordinate_X5b = TSC_Value_X;
	  coordinate_Y5b = TSC_Value_Y;
	  LCD_Fill(((TSC_Value_X) - 2),((TSC_Value_Y) - 2),((TSC_Value_X) + 2),((TSC_Value_Y) + 2),BLACK);
	  while((XPT2046_CAL_TouchGetCoordinates(&TSC_Value_X, &TSC_Value_Y)) != false);
	  //HAL_Delay(5000);

	  /* Average between X and Y coupled Touchscreen values */
	  coordinate_X1 = (coordinate_X1a + coordinate_X1b) / 2;
	  coordinate_X2 = (coordinate_X2a + coordinate_X2b) / 2;
	  coordinate_X3 = (coordinate_X3a + coordinate_X3b) / 2;
	  coordinate_X4 = (coordinate_X4a + coordinate_X4b) / 2;
	  coordinate_X5 = (coordinate_X5a + coordinate_X5b) / 2;

	  coordinate_Y1 = (coordinate_Y1a + coordinate_Y1b) / 2;
	  coordinate_Y2 = (coordinate_Y2a + coordinate_Y2b) / 2;
	  coordinate_Y3 = (coordinate_Y3a + coordinate_Y3b) / 2;
	  coordinate_Y4 = (coordinate_Y4a + coordinate_Y4b) / 2;
	  coordinate_Y5 = (coordinate_Y5a + coordinate_Y5b) / 2;

	  X2_1 = (coordinate_X1 * coordinate_X1);
	  X2_2 = (coordinate_X2 * coordinate_X2);
	  X2_3 = (coordinate_X3 * coordinate_X3);
	  X2_4 = (coordinate_X4 * coordinate_X4);
	  X2_5 = (coordinate_X5 * coordinate_X5);

	  Y2_1 = (coordinate_Y1 * coordinate_Y1);
	  Y2_2 = (coordinate_Y2 * coordinate_Y2);
	  Y2_3 = (coordinate_Y3 * coordinate_Y3);
	  Y2_4 = (coordinate_Y4 * coordinate_Y4);
	  Y2_5 = (coordinate_Y5 * coordinate_Y5);

	  XxY_1 = (coordinate_X1 * coordinate_Y1);
	  XxY_2 = (coordinate_X2 * coordinate_Y2);
	  XxY_3 = (coordinate_X3 * coordinate_Y3);
	  XxY_4 = (coordinate_X4 * coordinate_Y4);
	  XxY_5 = (coordinate_X5 * coordinate_Y5);

	  XxXd_1 = ( coordinate_X1 * Xd1 );
	  XxXd_2 = ( coordinate_X2 * Xd2 );
	  XxXd_3 = ( coordinate_X3 * Xd3 );
	  XxXd_4 = ( coordinate_X4 * Xd4 );
	  XxXd_5 = ( coordinate_X5 * Xd5 );

	  YxXd_1 = ( coordinate_Y1 * Xd1 );
	  YxXd_2 = ( coordinate_Y2 * Xd2 );
	  YxXd_3 = ( coordinate_Y3 * Xd3 );
	  YxXd_4 = ( coordinate_Y4 * Xd4 );
	  YxXd_5 = ( coordinate_Y5 * Xd5 );

	  XxYd_1 = ( coordinate_X1 * Yd1 );
	  XxYd_2 = ( coordinate_X2 * Yd2 );
	  XxYd_3 = ( coordinate_X3 * Yd3 );
	  XxYd_4 = ( coordinate_X4 * Yd4 );
	  XxYd_5 = ( coordinate_X5 * Yd5 );

	  YxYd_1 = ( coordinate_Y1 * Yd1 );
	  YxYd_2 = ( coordinate_Y2 * Yd2 );
	  YxYd_3 = ( coordinate_Y3 * Yd3 );
	  YxYd_4 = ( coordinate_Y4 * Yd4 );
	  YxYd_5 = ( coordinate_Y5 * Yd5 );

	  alfa = X2_1 + X2_2 + X2_3 + X2_4 + X2_5;
	  beta = Y2_1 + Y2_2 + Y2_3 + Y2_4 + Y2_5;
	  chi = XxY_1 + XxY_2 + XxY_3 + XxY_4 + XxY_5;
	  epsilon = coordinate_X1 + coordinate_X2 + coordinate_X3 + coordinate_X4 + coordinate_X5;
	  fi = coordinate_Y1 + coordinate_Y2 + coordinate_Y3 + coordinate_Y4 + coordinate_Y5;
	  Kx = XxXd_1 + XxXd_2 + XxXd_3 + XxXd_4 + XxXd_5;
	  Ky = XxYd_1 + XxYd_2 + XxYd_3 + XxYd_4 + XxYd_5;
	  Lx = YxXd_1 + YxXd_2 + YxXd_3 + YxXd_4 + YxXd_5;
	  Ly = YxYd_1 + YxYd_2 + YxYd_3 + YxYd_4 + YxYd_5;
	  Mx = Xd1 + Xd2 + Xd3 + Xd4 + Xd5;
	  My = Yd1 + Yd2 + Yd3 + Yd4 + Yd5;

	  d = 5 * ( ((double)alfa * beta) - ((double)chi * chi) ) + 2 * ((double)chi * epsilon * fi) - ((double)alfa * fi * fi ) - ( (double)beta * epsilon * epsilon );
	  dx1 = 5 * ( ((double)Kx * beta) - ((double)Lx * chi) ) + ((double)fi * ( ((double)Lx * epsilon) - ((double)Kx * fi) )) + ((double)Mx * ( ((double)chi * fi) - ((double)beta * epsilon) ));
	  dx2 = 5 * ( ((double)Lx * alfa) - ((double)Kx * chi) ) + ((double)epsilon * ( ((double)Kx * fi) - ((double)Lx * epsilon) )) + ((double)Mx * ( ((double)chi * epsilon) - ((double)alfa * fi) ));
	  dx3 = ((double)Kx * ( ((double)chi * fi) - ((double)beta * epsilon) )) + ((double)Lx * ( ((double)chi * epsilon) - ((double)alfa * fi) )) + ((double)Mx * ( ((double)alfa * beta) - ((double)chi * chi) ));
	  dy1 = 5 * ( ((double)Ky * beta) - ((double)Ly * chi) ) + ((double)fi * ( ((double)Ly * epsilon) - ((double)Ky * fi) )) + ((double)My * ( ((double)chi * fi) - ((double)beta * epsilon) ));
	  dy2 = 5 * ( ((double)Ly * alfa) - ((double)Ky * chi) ) + ((double)epsilon * ( ((double)Ky * fi) - ((double)Ly * epsilon) )) + ((double)My * ( ((double)chi * epsilon) - ((double)alfa * fi) ));
	  dy3 = ((double)Ky * ( ((double)chi * fi) - ((double)beta * epsilon) )) + ((double)Ly * ( ((double)chi * epsilon) - ((double)alfa * fi) )) + ((double)My * ( ((double)alfa * beta) - ((double)chi * chi) ));

	  A = dx1 / d;
	  B = dx2 / d;
	  C = dx3 / d;
	  D = dy1 / d;
	  E = dy2 / d;
	  F = dy3 / d;

	  /* To avoid computation with "double" variables A, B, C, D, E, F, we use the s32 variables
	     A2, B2, C2, D2, E2, F2, multiplied for a Scale Factor equal to 100000 to retain the precision*/
	  A2 = (int32_t)(A * RESCALE_FACTOR);
	  B2 = (int32_t)(B * RESCALE_FACTOR);
	  C2 = (int32_t)(C * RESCALE_FACTOR);
	  D2 = (int32_t)(D * RESCALE_FACTOR);
	  E2 = (int32_t)(E * RESCALE_FACTOR);
	  F2 = (int32_t)(F * RESCALE_FACTOR);

}

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_FSMC_Init();
  MX_SPI2_Init();
  /* USER CODE BEGIN 2 */
  /*##-5- Select Callbacks functions called after Transfer complete and Transfer error */
  HAL_DMA_RegisterCallback(&hdma_memtomem_dma2_stream0, HAL_DMA_XFER_CPLT_CB_ID, TransferComplete);
  HAL_DMA_RegisterCallback(&hdma_memtomem_dma2_stream0, HAL_DMA_XFER_ERROR_CB_ID, TransferError);

  /*##-6- Configure NVIC for DMA transfer complete/error interrupts ##########*/
  /* Set Interrupt Group Priority */
  HAL_NVIC_SetPriority(DMA2_Stream0_IRQn, 0, 0);

  /* Enable the DMA STREAM global Interrupt */
  HAL_NVIC_EnableIRQ(DMA2_Stream0_IRQn);



  lv_init();


  LCD_Init();
 //TP_Calibrate();

  //LCD_Clear(White);
  //LCD_Fill(10,10,20,20,BLUE);


  TP_Init();

  setup_ui(&guider_ui);

  /* USER CODE END 2 */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of defaultTask */
  osThreadStaticDef(defaultTask, StartDefaultTask, osPriorityNormal, 0, 512, defaultTaskBuffer, &defaultTaskControlBlock);
  defaultTaskHandle = osThreadCreate(osThread(defaultTask), NULL);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* Start scheduler */
  osKernelStart();

  /* We should never get here as control is now taken by the scheduler */
  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	  lv_task_handler();
	  HAL_Delay(5);
	  lv_tick_inc(5);


	  //XPT2046_TouchGetCoordinates(&x, &y);

  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 168;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief SPI2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_SPI2_Init(void)
{

  /* USER CODE BEGIN SPI2_Init 0 */

  /* USER CODE END SPI2_Init 0 */

  /* USER CODE BEGIN SPI2_Init 1 */

  /* USER CODE END SPI2_Init 1 */
  /* SPI2 parameter configuration*/
  hspi2.Instance = SPI2;
  hspi2.Init.Mode = SPI_MODE_MASTER;
  hspi2.Init.Direction = SPI_DIRECTION_2LINES;
  hspi2.Init.DataSize = SPI_DATASIZE_8BIT;
  hspi2.Init.CLKPolarity = SPI_POLARITY_LOW;
  hspi2.Init.CLKPhase = SPI_PHASE_1EDGE;
  hspi2.Init.NSS = SPI_NSS_SOFT;
  hspi2.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_64;
  hspi2.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi2.Init.TIMode = SPI_TIMODE_DISABLE;
  hspi2.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
  hspi2.Init.CRCPolynomial = 10;
  if (HAL_SPI_Init(&hspi2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN SPI2_Init 2 */

  /* USER CODE END SPI2_Init 2 */

}

/**
  * Enable DMA controller clock
  * Configure DMA for memory to memory transfers
  *   hdma_memtomem_dma2_stream0
  */
static void MX_DMA_Init(void)
{

  /* DMA controller clock enable */
  __HAL_RCC_DMA2_CLK_ENABLE();

  /* Configure DMA request hdma_memtomem_dma2_stream0 on DMA2_Stream0 */
  hdma_memtomem_dma2_stream0.Instance = DMA2_Stream0;
  hdma_memtomem_dma2_stream0.Init.Channel = DMA_CHANNEL_0;
  hdma_memtomem_dma2_stream0.Init.Direction = DMA_MEMORY_TO_MEMORY;
  hdma_memtomem_dma2_stream0.Init.PeriphInc = DMA_PINC_ENABLE;
  hdma_memtomem_dma2_stream0.Init.MemInc = DMA_MINC_ENABLE;
  hdma_memtomem_dma2_stream0.Init.PeriphDataAlignment = DMA_PDATAALIGN_HALFWORD;
  hdma_memtomem_dma2_stream0.Init.MemDataAlignment = DMA_MDATAALIGN_HALFWORD;
  hdma_memtomem_dma2_stream0.Init.Mode = DMA_NORMAL;
  hdma_memtomem_dma2_stream0.Init.Priority = DMA_PRIORITY_LOW;
  hdma_memtomem_dma2_stream0.Init.FIFOMode = DMA_FIFOMODE_ENABLE;
  hdma_memtomem_dma2_stream0.Init.FIFOThreshold = DMA_FIFO_THRESHOLD_FULL;
  hdma_memtomem_dma2_stream0.Init.MemBurst = DMA_MBURST_SINGLE;
  hdma_memtomem_dma2_stream0.Init.PeriphBurst = DMA_PBURST_SINGLE;
  if (HAL_DMA_Init(&hdma_memtomem_dma2_stream0) != HAL_OK)
  {
    Error_Handler( );
  }

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LCD_BL_GPIO_Port, LCD_BL_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(XPT2046_CS_GPIO_Port, XPT2046_CS_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin : XPT2046_IRQ_Pin */
  GPIO_InitStruct.Pin = XPT2046_IRQ_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(XPT2046_IRQ_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : LCD_BL_Pin XPT2046_CS_Pin */
  GPIO_InitStruct.Pin = LCD_BL_Pin|XPT2046_CS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : BUZZER_Pin */
  GPIO_InitStruct.Pin = BUZZER_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(BUZZER_GPIO_Port, &GPIO_InitStruct);

}

/* FSMC initialization function */
static void MX_FSMC_Init(void)
{

  /* USER CODE BEGIN FSMC_Init 0 */

  /* USER CODE END FSMC_Init 0 */

  FSMC_NORSRAM_TimingTypeDef Timing = {0};
  FSMC_NORSRAM_TimingTypeDef ExtTiming = {0};

  /* USER CODE BEGIN FSMC_Init 1 */

  /* USER CODE END FSMC_Init 1 */

  /** Perform the SRAM1 memory initialization sequence
  */
  hsram1.Instance = FSMC_NORSRAM_DEVICE;
  hsram1.Extended = FSMC_NORSRAM_EXTENDED_DEVICE;
  /* hsram1.Init */
  hsram1.Init.NSBank = FSMC_NORSRAM_BANK1;
  hsram1.Init.DataAddressMux = FSMC_DATA_ADDRESS_MUX_DISABLE;
  hsram1.Init.MemoryType = FSMC_MEMORY_TYPE_SRAM;
  hsram1.Init.MemoryDataWidth = FSMC_NORSRAM_MEM_BUS_WIDTH_16;
  hsram1.Init.BurstAccessMode = FSMC_BURST_ACCESS_MODE_DISABLE;
  hsram1.Init.WaitSignalPolarity = FSMC_WAIT_SIGNAL_POLARITY_LOW;
  hsram1.Init.WrapMode = FSMC_WRAP_MODE_DISABLE;
  hsram1.Init.WaitSignalActive = FSMC_WAIT_TIMING_BEFORE_WS;
  hsram1.Init.WriteOperation = FSMC_WRITE_OPERATION_ENABLE;
  hsram1.Init.WaitSignal = FSMC_WAIT_SIGNAL_DISABLE;
  hsram1.Init.ExtendedMode = FSMC_EXTENDED_MODE_ENABLE;
  hsram1.Init.AsynchronousWait = FSMC_ASYNCHRONOUS_WAIT_DISABLE;
  hsram1.Init.WriteBurst = FSMC_WRITE_BURST_DISABLE;
  hsram1.Init.PageSize = FSMC_PAGE_SIZE_NONE;
  /* Timing */
  Timing.AddressSetupTime = 15;
  Timing.AddressHoldTime = 15;
  Timing.DataSetupTime = 255;
  Timing.BusTurnAroundDuration = 15;
  Timing.CLKDivision = 16;
  Timing.DataLatency = 17;
  Timing.AccessMode = FSMC_ACCESS_MODE_A;
  /* ExtTiming */
  ExtTiming.AddressSetupTime = 15;
  ExtTiming.AddressHoldTime = 15;
  ExtTiming.DataSetupTime = 255;
  ExtTiming.BusTurnAroundDuration = 15;
  ExtTiming.CLKDivision = 16;
  ExtTiming.DataLatency = 17;
  ExtTiming.AccessMode = FSMC_ACCESS_MODE_A;

  if (HAL_SRAM_Init(&hsram1, &Timing, &ExtTiming) != HAL_OK)
  {
    Error_Handler( );
  }

  /* USER CODE BEGIN FSMC_Init 2 */

  /* USER CODE END FSMC_Init 2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void const * argument)
{
  /* USER CODE BEGIN 5 */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
    lv_tick_inc(5);
    lv_task_handler();
	//HAL_Delay(5);

  }
  /* USER CODE END 5 */
}

 /**
  * @brief  Period elapsed callback in non blocking mode
  * @note   This function is called  when TIM1 interrupt took place, inside
  * HAL_TIM_IRQHandler(). It makes a direct call to HAL_IncTick() to increment
  * a global variable "uwTick" used as application time base.
  * @param  htim : TIM handle
  * @retval None
  */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  /* USER CODE BEGIN Callback 0 */

  /* USER CODE END Callback 0 */
  if (htim->Instance == TIM1) {
    HAL_IncTick();
  }
  /* USER CODE BEGIN Callback 1 */

  /* USER CODE END Callback 1 */
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
