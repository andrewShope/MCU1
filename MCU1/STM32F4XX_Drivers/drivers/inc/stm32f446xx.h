/*
 * stm32f446xx.h
 */
#include <stdint.h>

#ifndef INC_STM32F446XX_H_
#define INC_STM32F446XX_H_

// Base Addresses of SRAM and FLASH memories
#define FLASH_BASEADDR				0X08000000U
#define SRAM1_BASEADDR				0X20000000U
#define SRAM2_BASEADDR				0X2001C000U
#define ROM_BASEADDR				0X1FFF0000U
#define SRAM						SRAM1_BASEADDR

// AHBx and APBx Bus Peripheral Base Addresses
#define PERIPH_BASEADDR				0x40000000U
#define APB1PERIPH_BASEADDR			PERIPH_BASEADDR
#define APB2PERIPH_BASEADDR			0X40010000U
#define AHB1PERIPH_BASEADDR			0X40020000U
#define AHB2PERIPH_BASEADDR			0X50000000U

// Base Addresses of all peripherals on AHB1 Bus
#define GPIOA_BASEADDR				(AHB1PERIPH_BASEADDR + 0X0000)
#define GPIOB_BASEADDR				(AHB1PERIPH_BASEADDR + 0X0400)
#define GPIOC_BASEADDR				(AHB1PERIPH_BASEADDR + 0X0800)
#define GPIOD_BASEADDR				(AHB1PERIPH_BASEADDR + 0X0C00)
#define GPIOE_BASEADDR				(AHB1PERIPH_BASEADDR + 0X1000)
#define GPIOF_BASEADDR				(AHB1PERIPH_BASEADDR + 0X1400)
#define GPIOG_BASEADDR				(AHB1PERIPH_BASEADDR + 0X1800)
#define GPIOH_BASEADDR				(AHB1PERIPH_BASEADDR + 0X1C00)
#define RCC_BASEADDR				(AHB1PERIPH_BASEADDR + 0X3800)

// Base addresses of APB1 Peripherals
#define I2C1_BASEADDR				(APB1PERIPH_BASEADDR + 5400)
#define I2C2_BASEADDR				(APB1PERIPH_BASEADDR + 5800)
#define I2C3_BASEADDR				(APB1PERIPH_BASEADDR + 5C00)
#define SPI2_BASEADDR				(APB1PERIPH_BASEADDR + 3800)
#define SPI3_BASEADDR				(APB1PERIPH_BASEADDR + 3C00)
#define USART2_BASEADDR				(APB1PERIPH_BASEADDR + 4400)
#define USART3_BASEADDR				(APB1PERIPH_BASEADDR + 4800)
#define UART4_BASEADDR				(APB1PERIPH_BASEADDR + 4C00)
#define UART5_BASEADDR				(APB1PERIPH_BASEADDR + 5000)

// Base addresses of APB2
#define SPI1_BASEADDR				(APB2PERIPH_BASEADDR + 3000)
#define USART1_BASEADDR				(APB2PERIPH_BASEADDR + 1000)
#define USART6_BASEADDR				(APB2PERIPH_BASEADDR + 1400)
#define EXTI_BASEADDR				(APB2PERIPH_BASEADDR + 3C00)
#define SYSCFG_BASEADDR				(APB2PERIPH_BASEADDR + 3800)

typedef struct
{
	volatile uint32_t MODER;				// Port Mode Register
	volatile uint32_t OTYPER;				// Output Type Register
	volatile uint32_t OSPEEDER;				// Output Speed Register
	volatile uint32_t PUPDR;				// Pull-Up/Pull-Down Register
	volatile uint32_t IDR;					// Input Data Register
	volatile uint32_t ODR;					// Output Data Register
	volatile uint32_t BSRR;					// Bit Set/Reset Register
	volatile uint32_t LCKR;					// Configuration Lock Register
	volatile uint32_t AFRL;					// Alternate Function Register Low
	volatile uint32_t AFRH;					// Alternate Function Register High
} GPIO_RegDef_t;

typedef struct
{
	volatile uint32_t CR;					// Clock Control Register
	volatile uint32_t PLL;					// Phase Lock Loop Configuration
	volatile uint32_t CFGR;					// Clock Configuration Register
	volatile uint32_t CIR;					// Clock Interrupt Register
	volatile uint32_t AHB1RSTR;				// AHB1 Peripheral Reset Register
	volatile uint32_t AHB2RSTR;				// AHB2 Peripheral Reset Register
	volatile uint32_t AHB3RSTR;				// AHB3 Peripheral Reset Register
	volatile uint32_t RESERVED0;
	volatile uint32_t APB1RSTR;				// APB1 Peripheral Reset Register
	volatile uint32_t APB2RSTR;				// APB2 Peripheral Reset Register
	volatile uint32_t RESERVED1[2];
	volatile uint32_t AHB1ENR;				// AHB1 EN Register
	volatile uint32_t AHB2ENR;				// AHB2 EN Register
	volatile uint32_t AHB3ENR;				// AHB3 EN Register
	volatile uint32_t RESERVED2;
	volatile uint32_t APB1ENR;				// APB1 EN Register
	volatile uint32_t APB2ENR;				// APB2 EN Register
	volatile uint32_t RESERVED3[2];
	volatile uint32_t AHB1LPENR;			// AHB1 Clock EN in Low Power Mode
	volatile uint32_t AHB2LPENR;			// AHB2 Clock EN in Low Power Mode
	volatile uint32_t AHB3LPENR;			// AHB3 Clock EN in Low Power Mode
	volatile uint32_t RESERVED4;
	volatile uint32_t APB1LPENR;			// APB1 Clock EN in Low Power Mode
	volatile uint32_t APB2LPENR;			// APB2 Clock EN in Low Power Mode
	volatile uint32_t RESERVED5[2];
	volatile uint32_t BDCR;					// Backup Domain Control Register
	volatile uint32_t CSR;					// Clock Control and Status Register
	volatile uint32_t RESERVED6[2];
	volatile uint32_t SSCGR;				// Speed Spectrum Clock Generation Register
	volatile uint32_t PLLI2SCFGR;			// PLLI2S Configuration
	volatile uint32_t PLLSAICFGR;			// PLLSAI Configuration
	volatile uint32_t DCKCFGR;				// Dedicated Clock Configuration
	volatile uint32_t CKGATENR;				// Clocks Gated Enable Register
	volatile uint32_t DCKCFGR2;				// Dedicated Clocks Configuration Register 2

} RCC_RegDef_t;

// Peripheral Definitions
#define GPIOA		((GPIO_RegDef_t *) GPIOA_BASEADDR)
#define GPIOB		((GPIO_RegDef_t *) GPIOB_BASEADDR)
#define GPIOC		((GPIO_RegDef_t *) GPIOC_BASEADDR)
#define GPIOD		((GPIO_RegDef_t *) GPIOD_BASEADDR)
#define GPIOE		((GPIO_RegDef_t *) GPIOE_BASEADDR)
#define GPIOF		((GPIO_RegDef_t *) GPIOF_BASEADDR)
#define GPIOG		((GPIO_RegDef_t *) GPIOG_BASEADDR)
#define GPIOH		((GPIO_RegDef_t *) GPIOH_BASEADDR)
#define RCC			((RCC_RegDef_t *) RCC_BASEADDR)

// Clock Enable Macros for GPIOx Peripherals
#define GPIOA_PCLK_EN()		(RCC->AHB1ENR |= (1 << 0))
#define GPIOB_PCLK_EN()		(RCC->AHB1ENR |= (1 << 1))
#define GPIOC_PCLK_EN()		(RCC->AHB1ENR |= (1 << 2))
#define GPIOD_PCLK_EN()		(RCC->AHB1ENR |= (1 << 3))
#define GPIOE_PCLK_EN()		(RCC->AHB1ENR |= (1 << 4))
#define GPIOF_PCLK_EN()		(RCC->AHB1ENR |= (1 << 5))
#define GPIOG_PCLK_EN()		(RCC->AHB1ENR |= (1 << 6))
#define GPIOH_PCLK_EN()		(RCC->AHB1ENR |= (1 << 7))

// Clock Enable Macros for I2Cx Peripherals
#define I2C1_PCLK_EN()		(RCC->APB1ENR |= (1 << 21))
#define I2C2_PCLK_EN()		(RCC->APB1ENR |= (1 << 22))
#define I2C3_PCLK_EN()		(RCC->APB1ENR |= (1 << 23))

// Clock Enable Macros for SPIx Peripherals
#define SPI1_PCLK_EN()		(RCC->APB2ENR |= (1 << 12))
#define SPI2_PCLK_EN()		(RCC->APB1ENR |= (1 << 14))
#define SPI3_PCLK_EN()		(RCC->APB1ENR |= (1 << 15))

// Clock Enable Macros for USARTx Peripherals
#define USART1_PCLK_EN()	(RCC->APB2ENR |= (1 << 4))
#define USART2_PCLK_EN()	(RCC->APB1ENR |= (1 << 17))
#define USART3_PCLK_EN()	(RCC->APB1ENR |= (1 << 18))

// Clock Enable Macros for SYSCFG Peripheral
#define SYSCFG_PCLK_EN()	(RCC->APB2ENR |= (1 << 14))

// Clock Disable Macros for GPIO Peripherals
#define GPIOA_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 0))
#define GPIOB_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 1))
#define GPIOC_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 2))
#define GPIOD_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 3))
#define GPIOE_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 4))
#define GPIOF_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 5))
#define GPIOG_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 6))
#define GPIOH_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 7))

// Clock Disable Macros for I2C Peripherals
#define I2C1_PCLK_DI()		(RCC->APB1ENR &= ~(1 << 21))
#define I2C2_PCLK_DI()		(RCC->APB1ENR &= ~(1 << 22))
#define I2C3_PCLK_DI()		(RCC->APB1ENR &= ~(1 << 23))

// Clock Disable Macros for SPI Peripherals
#define SPI1_PCLK_DI()		(RCC->APB2ENR &= ~(1 << 12))
#define SPI2_PCLK_DI()		(RCC->APB1ENR &= ~(1 << 14))
#define SPI3_PCLK_DI()		(RCC->APB1ENR &= ~(1 << 15))

// Clock Disable Macros for USART Peripherals
#define USART1_PCLK_DI()	(RCC->APB2ENR &= ~(1 << 4))
#define USART2_PCLK_DI()	(RCC->APB1ENR &= ~(1 << 17))
#define USART3_PCLK_DI()	(RCC->APB1ENR &= ~(1 << 18))

// Clock Disable Macro for SYSCFG
#define SYSCFG_PCLK_DI()	(RCC->APB2ENR &= ~(1 << 14))

// Some Generic Macros
#define ENABLE 		1
#define DISABLE 	0
#define SET 		ENABLE
#define RESET 		DISABLE


#endif /* INC_STM32F446XX_H_ */







































