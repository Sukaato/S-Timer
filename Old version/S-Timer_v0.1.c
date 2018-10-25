//Program created by Sukaato
//Timer version : 0.1

//Bibliothèque
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>

int main() {
//Crédit OK
    system("cls");
    printf("Program created by Sukaato");
    printf("\n");
    printf("Version du programme : 0.1");
    sleep(3);
//TIMER
    //Variable
        int sec = 0;
        int min = 0;
        int hour = 0;
        int day = 0;
        int week = 0;
    //Boucle affichage OK
        //Semaine
            system("cls");
            printf("Veuillez entrez le nombre de semaine :");
            scanf("%d", &week);
        //Jour
            system("cls");
            printf("Veuillez entrez le nombre de jour :");
            scanf("%d", &day);
        //heure
            system("cls");
            printf("Veuillez entrez le nombre d'heure :");
            scanf("%d", &hour);
        //Minute
            system("cls");
            printf("Veuillez entrez le nombre de minute :");
            scanf("%d", &min);
        //Seconde
            system("cls");
            printf("Veuillez entrez un nombre le nombre de seconde :");
            scanf("%d", &sec);
//Compte à rebours
        do {
            do {
                sleep(1);
                system("cls");
                printf("Temps restant :");
                printf("\n");
                printf("%d week ", week);
                printf("%d day ", day);
                printf("%d hour ", hour);
                printf("%d min ", min);
                printf("%d Sec", sec);
                printf("\n");
                sec = sec - 1;
            } while (sec != -1);
            if (sec == -1 && min > 0) {
                min = min - 1;
                sec = sec + 60;
            }
            else if (min == 0 && hour > 0) {
                hour = hour - 1;
                min = min + 59;
                sec = sec + 60;
            }
            else if (hour == 0 && day > 0) {
                day = day - 1;
                hour = hour + 23;
                min = min + 59;
                sec = sec + 60;
            }
            else if (day == 0 && week > 0) {
                week = week - 1;
                day = day + 6;
                hour = hour + 23;
                min = min + 59;
                sec = sec + 60;
            }
        } while (sec != -1);
//FIN OK
    sleep(1);
    system("cls");
    printf("Le compte a rebour est termine");
    getchar();
    getchar();
    return(0);
}