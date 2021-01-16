/* Needed includes */
#include <stdio.h>

/* The nodes in the list*/
struct node {
	int age;
	char name[20];
	struct node *next;
};

int main(void) {

	/* Populate the list */
	struct node a = { 43, "Inge", NULL };
	struct node b = { 18, "Jesscia", NULL };
	struct node c = { 37, "Karin", NULL };
	struct node d = { 14, "Renate", NULL };

	/* Let each item point to the next */
	a.next = &b;
	b.next = &c;
	c.next = &d;
	/* Except for d, which points to NULL */

	/* Variable to traverse the list */
	/* At first, point to structure a */
	struct node *current = &a;

	/* Loop trough the complete list and print data */
	while (current != NULL) {
		printf("Age: %2d, name: %s\n", current->age,
			                           current->name);
        /* Point to the next in the list */
		current = current->next;
	}

	return 0;
}