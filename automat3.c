// Getränkeautomat Version v0.3

#include <stdio.h>

int main() {

int auswahl, anzahl, i;
float betrag = 0;
float einwurf = 0;

printf("\nGetränkeautomat: Bitte wählen Sie Ihr Getränk. Geben Sie für Wasser 1, für Limo 2 oder für Bier 3 ein:\n");
scanf("%d", &auswahl);

printf("\nBitte geben Sie die gewünschte Anzahl ein:\n");
scanf("%d", &anzahl);

switch(auswahl) {

	case 1:
	betrag = anzahl * 0.50;
	break;

	case 2:
	betrag = anzahl * 1;
	break;

	case 3:
	betrag = anzahl * 2;
	break;

}

while (betrag > 0) {
		printf("Bitte werfen Sie %.2f € ein:\n", betrag);
		scanf("%f", &einwurf);
		betrag = betrag - einwurf;
	}	 

printf("\n");

for (i = 1; i <= anzahl; i++) {

	printf("Flasche %d von %d wurde ausgegeben.\n", i, anzahl); 

}
return 0;
}
