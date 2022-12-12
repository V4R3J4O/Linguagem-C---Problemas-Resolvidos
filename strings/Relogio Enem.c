#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>

int main (void)
{
    int ligado = 0;
    int dia;

    while (ligado == 0)
    {
        printf("Deseja iniciar o programa?\n");
        printf("Dia 1 ou Dia 2: (Digite 1 para prova 1 e 2 para prova 2): ");
        scanf(" %d",&dia);
        printf("\ndigite um para iniciar: ");
        scanf(" %d",&ligado);
    }
    
    
    while (ligado == 1)
    {
        switch (dia)
        {
        case 1:
            while (ligado == 1)
            {
                Beep(700,1000);
                system ("cls");
                printf("13:30\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("14:00\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("14:30\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("15:00\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("15:30\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("16:00\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("16:30\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("17:00\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("17:30\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("18:00\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("18:30\n\n");
                sleep(900);
                system ("cls");
                Beep(700,1000);

                printf("18:45\n\n");
                sleep(900);
                system ("cls");
                printf("A PROVA ACABOU! :)\n\n");
                Beep(400,10000);
                sleep(10);
                
                ligado = 0;
            }    
                    break;

        case 2:
            while (ligado == 1)
            {
                system ("cls");
                Beep(700,1000);
                printf("13:30\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("14:00\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("14:30\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("15:00\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("15:30\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("16:00\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("16:30\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("17:00\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("17:30\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("18:00\n\n");
                sleep(1800);
                system ("cls");
                Beep(700,1000);

                printf("18:15\n\n");
                sleep(900);
                system ("cls");
                Beep(400,10000);
                printf("A PROVA ACABOU! :)\n\n");
                sleep(10);
                
                    break;
                    
            }

        default:
            printf("Dado fornecido incorretamente!\n\n");
            sleep(10);
            ligado = 0;
            break;
        }
    }
}   
    