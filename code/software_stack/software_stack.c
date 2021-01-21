#include <stdio.h>

#define STACK_DEPTH (100)

static int stack_pointer = 0;
static int stack[STACK_DEPTH];

void push(int val) {
	if (stack_pointer < STACK_DEPTH) {
		stack[stack_pointer] = val;
		stack_pointer++;
	} else {
		printf("Stack overflow! Nothing pushed.\n");
	}
}

int pop(void) {

	if (stack_pointer > 0) {
		stack_pointer--;
		return stack[stack_pointer];
	} else {
		printf("Stack underflow! Returning 0.\n");
		return 0;
	}
}
