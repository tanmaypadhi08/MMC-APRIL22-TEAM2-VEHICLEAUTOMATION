#define IRQ_NO_EXTI0	6
#define IRQ_NO_EXTI1	7

#define NVIC_IRQ_PR_LVL_00

#define PIN_0		0
#define PIN_1		1
#define PIN_2		2
#define PIN_3		3
#define PIN_4		4
#define PIN_5		5
#define PIN_6		6
#define PIN_7		7
#define PIN_8		8
#define PIN_9		9
#define PIN_10		10
#define PIN_11		11
#define PIN_12		12
#define PIN_13		13
#define PIN_14		14
#define PIN_15		15

void reset_handler(void)
{
	// Copy .data section to SRAM
	uint32_t size = (uint32_t) &_edata - (uint32_t) &_sdata;

	uint8_t *dest = (uint8_t *) &_sdata; // SRAM
	uint8_t *src = (uint8_t *) &_la_data; // Flash

	for(uint32_t i =0 ; i < size ; i++)
	{
		*dest++ = *src++;
	}

	// Init. the .bss section to zero in SRAM
	size = (uint32_t) &_ebss - (uint32_t) &_sbss;
	dest = (uint8_t *) &_sbss;
	for(uint32_t i = 0 ; i < size ; i++)
	{
		*dest++ = 0;
	}

	main();
}