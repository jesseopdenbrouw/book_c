/* The includes needed */
#include <stdio.h>
#include <string.h>
#include <malloc.h>

/* Keep Visual Studio happy */
#pragma warning(disable : 4996)

/* The node structure */
struct node {
	int age;             /* The age */
	char name[20];       /* The name */
	struct node *next;   /* Pointer to the next */
};

/* Pointer to the first node, commonly known as the head */
struct node *head = NULL;

/* Function to create and fill a new node */
struct node* create_node(int age, char name[]);
/* Function to print all nodes */
void print_all_nodes(void);
/* Function to remove all nodes */
void remove_all_nodes(void);

int main(void) {

	int age;
	char name[20];

	/* Read in the data */
	do {
		printf("Give age (> 0): ");
		scanf("%d", &age);
		if (age <= 0) { break; }
		printf("Give name: ");
		scanf("%s", name);

		/* Create new node, bail out if error */
		if (create_node(age, name) == NULL) {
			printf("Node creation failed, bailing out!\n");
			return -1;
		}

	} while (age > 0);

	/* Print all nodes */
	print_all_nodes();

	/* Remove all nodes */
	remove_all_nodes();
	return 0;
}

/* Function to create and fill a new node */
struct node *create_node(int age, char name[]) {

	struct node *created, *current;

	/* Create a new node */
	created = (struct node*) malloc(sizeof(struct node));
	
	/* Could we create a new node? No, return signalling NULL */
	if (created == NULL) {
		return NULL;
	}

	/* At first, there are no nodes, so head points to NULL */
	/* We test for it and set the head to the first node */
	if (head == NULL) {
		head = created;
	}
	else {
		/* There are already nodes, so find the last one */
		current = head;
		while (current->next != NULL) {
			current = current->next;
		}

		/* Let the last one point to the new node */
		current->next = created;
	}

	/* Fill the new node with data */
	created->age = age;
	strcpy(created->name, name);
	created->next = NULL;

	/* Return address of new node */
	return created;
}

/* Function to print all nodes in the list */
void print_all_nodes(void) {

	struct node *current;

	/* Traverse all nodes */
	current = head;
	while (current != NULL) {
		printf("Age: %2d, name: %s\n", current->age,
			                                      current->name);
		current = current->next;
	}
}

/* Function to remove all nodes */
void remove_all_nodes(void) {

	struct node *remnode;

	while (head != NULL) {
		/* Make sure we point to the node to be deleted */
		remnode = head;
		/* Goto next in the list */
		head = head->next;
		/* Now we can safely remove the node */
		free(remnode);
	}
}