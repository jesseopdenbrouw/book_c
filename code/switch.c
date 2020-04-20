#include <stdio.h>

int main(void) 
{
    int cijfer;
    printf("Geef behaalde cijfer: ");
    scanf("%d", &cijfer);
    char letter;
	switch (cijfer) 
	{
		case 10:
		case 9:
		case 8:
			letter = 'A'; 
			break;
		case 7: 
			letter = 'B'; 
			break;
		case 6: 
			letter = 'C'; 
			break;
		case 5:
			letter = 'D'; 
			break;
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			letter = 'F'; 
			break;
		default:
			letter = '-';
			break;
	}
    printf("In Amerika is dit een %c\n", letter);
    return 0;
}