/*
 * stm32f446xx_gpio_driver.c
 *
 *  Created on: Nov 2, 2024
 *      Author: Carl
 */

/***************************************************************************
 *  @fn				- GPIO_PeriClockControl
 *
 *  @brief			- This function enables or disables the peripheral clock for the given GPIO port.
 *
 *  @param[in]		- Base address of the GPIO peripheral
 *  @param[in]		- ENABLE or DISABLE macros.
 *
 *  @return			- None.
 *
 *  @Note			- None
 *
 */
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi) {
	if (EnorDi == ENABLE) {
		if (pGPIOx == GPIOA) {
			GPIOA_PCLK_EN();
		} else if (pGPIOx == GPIOB) {
			GPIOB_PCLK_EN();
		} else if (pGPIOx == GPIOC) {
			GPIOC_PCLK_EN();
		} else if (pGPIOx == GPIOD) {
			GPIOD_PCLK_EN();
		} else if (pGPIOx == GPIOE) {
			GPIOE_PCLK_EN();
		} else if (pGPIOx == GPIOF) {
			GPIOF_PCLK_EN();
		} else if (pGPIOx == GPIOG) {
			GPIOG_PCLK_EN();
		} else if (pGPIOx == GPIOH) {
			GPIOH_PCLK_EN();
		}
	} else {
		if (pGPIOx == GPIOA) {
			GPIOA_PCLK_DI();
		} else if (pGPIOx == GPIOB) {
			GPIOB_PCLK_DI();
		} else if (pGPIOx == GPIOC) {
			GPIOC_PCLK_DI();
		} else if (pGPIOx == GPIOD) {
			GPIOD_PCLK_DI();
		} else if (pGPIOx == GPIOE) {
			GPIOE_PCLK_DI();
		} else if (pGPIOx == GPIOF) {
			GPIOF_PCLK_DI();
		} else if (pGPIOx == GPIOG) {
			GPIOG_PCLK_DI();
		} else if (pGPIOx == GPIOH) {
			GPIOH_PCLK_DI();
		}
	}
}

/***************************************************************************
 *  @fn				- GPIO_Init
 *
 *  @brief			-
 *
 *  @param[in]		-
 *  @param[in]		-
 *
 *  @return			- None.
 *
 *  @Note			- None
 *
 */
void GPIO_Init(GPIO_Handle_t *pGPIOHandle) {

}

/***************************************************************************
 *  @fn				- GPIO_DeInit
 *
 *  @brief			-
 *
 *  @param[in]		-
 *  @param[in]		-
 *
 *  @return			- None.
 *
 *  @Note			- None
 *
 */
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx) {

}

/***************************************************************************
 *  @fn				- GPIO_ReadFromInputPin
 *
 *  @brief			-
 *
 *  @param[in]		-
 *  @param[in]		-
 *
 *  @return			- None.
 *
 *  @Note			- None
 *
 */
uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber) {

}

/***************************************************************************
 *  @fn				- GPIO_ReadFromInputPort
 *
 *  @brief			-
 *
 *  @param[in]		-
 *  @param[in]		-
 *
 *  @return			- None.
 *
 *  @Note			- None
 *
 */
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx) {

}

/***************************************************************************
 *  @fn				- GPIO_WriteToOutputPin
 *
 *  @brief			-
 *
 *  @param[in]		-
 *  @param[in]		-
 *
 *  @return			- None.
 *
 *  @Note			- None
 *
 */
void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value) {

}

/***************************************************************************
 *  @fn				- GPIO_WriteToOutputPort
 *
 *  @brief			-
 *
 *  @param[in]		-
 *  @param[in]		-
 *
 *  @return			- None.
 *
 *  @Note			- None
 *
 */
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t value) {

}

/***************************************************************************
 *  @fn				- GPIO_ToggleOutputPin
 *
 *  @brief			-
 *
 *  @param[in]		-
 *  @param[in]		-
 *
 *  @return			- None.
 *
 *  @Note			- None
 *
 */
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber) {

}

/***************************************************************************
 *  @fn				- GPIO_IRQConfig
 *
 *  @brief			-
 *
 *  @param[in]		-
 *  @param[in]		-
 *
 *  @return			- None.
 *
 *  @Note			- None
 *
 */
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t EnorDi) {

}

/***************************************************************************
 *  @fn				- GPIO_IRQHandling
 *
 *  @brief			-
 *
 *  @param[in]		-
 *  @param[in]		-
 *
 *  @return			- None.
 *
 *  @Note			- None
 *
 */
void GPIO_IRQHandling(uint8_t PinNumber) {

}






























