#include <stdio.h>

#include <stdlib.h>

#include <time.h>
#include <math.h>


int main ( int argc, char** argv ) {
        int continuerPartie = 1;
    do {

        int nombreMystere = 0, nombreEntre = 0;

        int nombreCoups = 0;

        const MIN = 1;

        int niveau, nombreMax;

        // Demande de niveau, generation du nombreMax

        do {

            printf("Quel niveau choisissez-vous ? 1, 2 ou 3 : \n");

            scanf("%d", &niveau);
        } while(niveau < 1 || niveau > 3 );
        nombreMax = pow(10, niveau + 1);
        // Génération du nombre aléatoire


        srand(time(NULL));

        nombreMystere = (rand() % (nombreMax - MIN + 1)) + MIN;


        /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */


        do {

            // On demande le nombre

            printf("Quel est le nombre ? ");

            scanf("%d", &nombreEntre);
            nombreCoups++;

            // On compare le nombre entré avec le nombre mystère


            if (nombreMystere > nombreEntre)

                printf("C'est plus !\n\n");

            else if (nombreMystere < nombreEntre)

                printf("C'est moins !\n\n");

            else

                printf("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n", nombreCoups);

        } while (nombreEntre != nombreMystere);

            printf("Refaire une partie ?  0 pour Non \n ");
            scanf("%d",&continuerPartie);
    }
    while (continuerPartie);

    printf("\n Merci et au revoir !!! ");

    return 0;
}
