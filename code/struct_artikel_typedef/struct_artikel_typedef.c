#include <stdio.h>
#include <string.h>

#pragma warning(disable : 4996)

typedef struct {
	int nummer;      // artikelnummer
	char naam[20];   // artikelnaam
	int aantal;      // aantal beschikbaar
	double prijs;    // prijs per stuk
} artikel_t;

void print_artikel(const artikel_t *a) {
	printf("Nummer: %d   ", (*a).nummer);
	printf("Naam: %s   ", (*a).naam);
	printf("Aantal: %d   ", (*a).aantal);
	printf("Prijs: %.2f\n", (*a).prijs);
}

void vul_artikel(artikel_t *a, int nummer, char naam[],
	                           int aantal, double prijs) {

	a->nummer = nummer;
	strcpy(a->naam, naam);
	a->aantal = aantal;
	a->prijs = prijs;
}

void print_artikelen(artikel_t ary[], int siz) {

	for (int i = 0; i < siz; i++) {
		if (ary[i].nummer != 0) {
			print_artikel(&ary[i]);
		}
	}
}

artikel_t *grootste_voorraad(artikel_t* a, artikel_t* b) {
	return (a->aantal > b->aantal) ? a : b;
}

artikel_t inkoop(artikel_t a, int aantal) {

	a.aantal += aantal;
	return a;
}

int main(void) {

	artikel_t usbstick = { 1, "USB stick", 25, 7.84 };

	artikel_t art[10] = { {1, "USB stick", 25, 7.84},
						  {2, "SD Card", 63, 4.34}  };

	print_artikel(&usbstick);

	vul_artikel(&art[2], 7, "Floppy", 5, 10.73);

	print_artikelen(art, sizeof art / sizeof art[0]);

	return 0;
}