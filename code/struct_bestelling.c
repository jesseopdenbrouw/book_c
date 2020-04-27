#include <stdio.h>
#include <string.h>

#pragma warning(disable : 4996)

typedef struct {
	int nummer;      // artikelnummer
	char naam[20];   // artikelnaam
	int aantal;      // aantal beschikbaar
	double prijs;    // prijs per stuk
} artikel_t;

typedef struct {
	int klantnr;     // klantnummer
	char naam[20];   // naam v.d. klant
} klant_t;

typedef struct {
	int bestelnr;    // bestellingnr
	klant_t klant;   // de klant
	                 // bestelde artikelen
	artikel_t artbestel[10];
} bestelling_t;

void print_bestelling(bestelling_t bestel) {

	printf("Klantnummer: %d\n", bestel.klant.klantnr);
	printf("Klantnaam: %s\n", bestel.klant.naam);

	for (int i = 0; i < 10; i++) {
		if (bestel.artbestel[i].nummer != 0) {
			printf("Nummer: %d   ", bestel.artbestel[i].nummer);
			printf("Naam: %s   ", bestel.artbestel[i].naam);
			printf("Aantal: %d   ", bestel.artbestel[i].aantal);
			printf("Prijs: %.2f\n", bestel.artbestel[i].prijs);
		}
	}
}

int main(void) {

	artikel_t art[10] = { {1, "USB stick", 25, 7.84},
						  {2, "SD Card", 63, 4.34},
						  {3, "Floppy", 5, 10.73 } };

	bestelling_t bestel = { 0 };

	bestel.bestelnr = 123;
	bestel.klant.klantnr = 73;
	strcpy(bestel.klant.naam, "Jos");
	bestel.artbestel[0] = art[2];
	bestel.artbestel[0].aantal = 3;
	bestel.artbestel[0].prijs *= bestel.artbestel[0].aantal;

	print_bestelling(bestel);

	return 0;
}