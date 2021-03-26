#include <stdio.h>
#include <stdint.h>

typedef union {
	float f;
	uint32_t ui;
	uint8_t uc[4];
} punning_t;


int main(void) {
	punning_t pun;

	pun.f = 0.25f;

	printf("%e is %08x\n", pun.f, pun.ui);

	pun.ui = 1;

	printf("%e is %08x\n", pun.f, pun.ui);

	pun.f = 0.6f;

	printf("%e is %08x\n", pun.f, pun.ui);
	printf("%e is %02x %02x %02x %02x\n", pun.f, pun.uc[0], pun.uc[1], pun.uc[2], pun.uc[3]);

	return 0;
}