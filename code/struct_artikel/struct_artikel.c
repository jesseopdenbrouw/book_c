#include <stdio.h>
#include <string.h>

#pragma warning(disable : 4996)

struct artikel {
	int nummer;      // artikelnummer
	char naam[20];   // artikelnaam
	int aantal;      // aantal beschikbaar
	double prijs;    // prijs per stuk
};

void print_artikel(struct artikel a) {
	printf("Nummer: %d   ", a.nummer);
	printf("Naam: %s   ", a.naam);
	printf("Aantal: %d   ", a.aantal);
	printf("Prijs: %.2f\n", a.prijs);
}

struct artikel maak_artikel(int nummer, char naam[], int aantal, double prijs) {

	struct artikel nieuw;

	nieuw.nummer = nummer;
	strcpy(nieuw.naam, naam);
	nieuw.aantal = aantal;
	nieuw.prijs = prijs;

	return nieuw;
}

struct artikel inkoop(struct artikel a, int aantal) {

	a.aantal += aantal;
	return a;
}

int main(void) {

	struct artikel floppy;

	struct artikel usbstick = { 1, "USB stick", 25, 7.84 };
	struct artikel sdcard = { 2, "SD card", 63, 4.97 };

	floppy.nummer = 7;
	strcpy(floppy.naam, "Floppy");
	floppy.aantal = 5;
	floppy.prijs = 10.73;

	floppy = maak_artikel(7, "Floppy", 5, 10.73);

	print_artikel(usbstick);
	print_artikel(sdcard);
	print_artikel(floppy);

	sdcard = inkoop(sdcard, 7);

	print_artikel(sdcard);

	return 0;
}