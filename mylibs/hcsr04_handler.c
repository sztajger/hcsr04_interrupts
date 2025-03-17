#include "hcsr04_handler.h"


void hcsr04_init(void)
{
	HAL_TIM_IC_Start(&htim2, TIM_CHANNEL_1);
	HAL_TIM_IC_Start(&htim2, TIM_CHANNEL_2);
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_3);
	HAL_Delay(1000);
}


void hcsr04_mesurment(void)
{
	uint32_t start = HAL_TIM_ReadCapturedValue(&htim2, TIM_CHANNEL_1);
	uint32_t stop = HAL_TIM_ReadCapturedValue(&htim2, TIM_CHANNEL_2);
	printf("%.1f cm\n", (stop - start) / 58.0f);
	HAL_Delay(1000);


}

void hcrs04_exit(void)
{




}

