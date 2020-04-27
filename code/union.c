#include <stdio.h>
#include <string.h>

#pragma warning(disable : 4996)

typedef enum {typeint = 1, typefloat = 2, typedouble = 3} vartype_t;

typedef struct {
	char naam[20];
	vartype_t type;
	union {
		int valint;
		float valfloat;
		double valdouble;
	} value;
} varinfo_t;

void print_var(varinfo_t var) {

	printf("Naam: %s\n", var.naam);

	switch (var.type) {
	case typeint:
		printf("Type: int, Value %d\n", var.value.valint);
		break;
	case typefloat:
		printf("Type: float, Value %f\n", var.value.valfloat);
		break;
	case typedouble:
		printf("Type: double, Value %f\n", var.value.valdouble);
		break;
	default:
		printf("Type: ONBEKEND\n");
		break;
	}
}

int main(void) {

	varinfo_t devariabele;

	//...

	strcpy(devariabele.naam, "getal");
	devariabele.type = typefloat;
	devariabele.value.valfloat = 3.14f;

	devariabele.type = typeint;
	devariabele.value.valint = 1234;

	print_var(devariabele);

	return 0;
}