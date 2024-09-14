/**
 ******************************************************************************
 * Enabling ADC1.
 *
 ******************************************************************************
 */

#include <stdint.h>

#define ADC_BASE_ADDR 			0x40012000UL
#define ADC_CR1_REG_OFFSET 		0X04UL
#define ADC_CR1_REG_ADDR 		(ADC_BASE_ADDR + ADC_CR1_REG_OFFSET)

#define RCC_BASE_REG			0X40023800UL
#define APB2_CLOCK_EN_OFFSET	0X44UL
#define APB2_CLOCK_EN			(RCC_BASE_REG + APB2_CLOCK_EN_OFFSET)

int main(void)
{
	uint32_t *pAdc_cr1_reg = (uint32_t*) ADC_CR1_REG_ADDR;
	uint32_t *pApb2_clk_en = (uint32_t*) APB2_CLOCK_EN;

	*pApb2_clk_en |= (1 << 8);
	*pAdc_cr1_reg |= (1 << 8);

    /* Loop forever */
	for(;;);
}
