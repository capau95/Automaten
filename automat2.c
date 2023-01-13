// Getränkeautomat Version v0.2

#include <stdio.h>
int main() {

int auswahl = 0;
float einwurf = 0;

printf("\nGetränkeautomat: Bitte wählen Sie Ihr Getränk. Geben Sie für Wasser 1, für Limo 2 oder für Bier 3 ein:\n");
scanf("%d", &auswahl);

// überprüfe Auswahl

switch(auswahl) {

	case 1: printf("\nBitte werfen Sie 50 Cent ein:\n");
	scanf("%f",&einwurf);
	if (einwurf == 50) {
	printf("\nVielen Dank, bitte entnehmen Sie Ihr Getränk\n"); }
	else { printf("\nFalscher Geldbetrag!\n"); }
	break;

	case 2: printf("\nBitte werfen Sie 1,00 € ein:\n");
	scanf("%f",&einwurf);
	if (einwurf == 1) {
	printf("\nVielen Dank, bitte entnehmen Sie Ihr Getränk\n"); }
	else { printf("\nFalscher Geldbetrag!\n"); }
	break;

	case 3: printf("\nBitte werfen Sie 2,00 € ein:\n"); 
	scanf("%f",&einwurf);
	if (einwurf == 2) {
	printf("\nVielen Dank, bitte entnehmen Sie Ihr Getränk\n"); }
	else { printf("\nFalscher Geldbetrag!\n"); }
	break;

}

return 0;
}
