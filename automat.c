// Getränkeautomat Version 0.1

#include <stdio.h>
int main() {

int einwurf = 0;
printf("\nGetränkeautomat: Bitte werfen Sie 1 € ein: ");
scanf("%d", &einwurf);

// überprüfe Geldstück

if(einwurf == 1) {
	printf("\nVielen Dank, bitte entnehmen Sie Ihr Getränk.\n");
} else {
	printf("\nSie haben kein 1 € Stück eingeworfen.\n");
}

return 0;
}
