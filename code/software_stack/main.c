#include <stdio.h>

void push(int val);
int pop(void);

int main(void) {

	push(5);
	push(3);

	printf("Pop from stack: %d\n", pop());
	printf("Pop from stack: %d\n", pop());
	printf("Pop from stack: %d\n", pop());
}