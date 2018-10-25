//Program created by Sukaato
//Timer version : 0.2

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
    printf("Version du programme : 0.2");
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
            if (week < 0) {
                week = week * (-1);
            }
        //Jour
            system("cls");
            printf("Veuillez entrez le nombre de jour :");
            scanf("%d", &day);
            if (day < 0) {
                day = day * (-1);
            }
        //heure
            system("cls");
            printf("Veuillez entrez le nombre d'heure :");
            scanf("%d", &hour);
            if (hour < 0) {
                hour = hour * (-1);
            }
        //Minute
            system("cls");
            printf("Veuillez entrez le nombre de minute :");
            scanf("%d", &min);
            if (min < 0) {
                min = min * (-1);
            }
        //Seconde
            system("cls");
            printf("Veuillez entrez un nombre le nombre de seconde :");
            scanf("%d", &sec);
            if (sec < 0) {
                sec = sec * (-1);
            }
    //Verification OK
        system("cls");
        if (sec > 59) {
            do {
                sec = sec - 60;
                min = min + 1;
            } while (sec > 59);
        }
        if (min > 59) {
            do {
                min = min - 60;
                hour = hour + 1;
            } while (min > 59);
        }
        if (hour > 23) {
            do {
                hour = hour - 24;
                day = day + 1;
            } while (hour > 23);
        }
        if (day > 6) {
            do {
                day = day - 7;
                week = week + 1;
            } while (day >= 6);
        }
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