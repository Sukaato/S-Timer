//Program created by Sukaato
//Timer version : 0.5.0

//Bibliothèque
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

int main() {

//TIMER
    //Crédit 
        system("mode con cols=45 lines=4");
        system("cls");
        printf("Program created by Sukaato");
        printf("\n");
        printf("Version du programme : 0.5.0");
        sleep(3);
    //Variable
        int sec = 0;
        int min = 0;
        int hour = 0;
        int day = 0;
        int week = 0;
        int display = 0;
    //Boucle affichage
        //Semaine
            system("cls");
            printf("Veuillez entrez le nombre de semaine : ");
            scanf("%d", &week);
            if (week < 0) {
                week = week * (-1);
            }
        //Jour
            system("cls");
            printf("Veuillez entrez le nombre de jour : ");
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
            printf("Veuillez entrez le nombre de minute : ");
            scanf("%d", &min);
            if (min < 0) {
                min = min * (-1);
            }
        //Seconde
            if (week > 0 || day > 0 || hour > 0 || min > 0) {
                system("cls");
                printf("Veuillez entrez le nombre de seconde : ");
                scanf("%d", &sec);
            }
            else {
                do {
                    system("cls");
                    printf("Veuillez entrez le nombre de seconde : ");
                    scanf("%d", &sec);
                } while (sec == 0);
            }
            if (sec < 0) {
                sec = sec * (-1);
            }
            
    //Verification
        //Seconde
            if (sec > 59) {
                do {
                    sec = sec - 60;
                    min = min + 1;
                } while (sec > 59);
                display = 2;
            }
            else if (min > 0) {
                display = 1;
            }
        //Minute
            if (min > 59) {
                do {
                    min = min - 60;
                    hour = hour + 1;
                } while (min > 59);
                display = 3;
            }
            else if (min > 0) {
                display = 2;
            }
        //Heure
            if (hour > 23) {
                do {
                    hour = hour - 24;
                    day = day + 1;
                } while (hour > 23);
                display = 4;
            }
            else if (hour > 0) {
                display = 3;
            }
        //Jour
            if (day > 6) {
                do {
                    day = day - 7;
                    week = week + 1;
                } while (day >= 6);
                display = 5;
            }
            else if (day > 0) {
                display = 4;
            }
        //Semaine
            if (week > 0) {
                display = 5;
            }
    //Compte à rebours
            do {
                do {
                    sleep(1);
                    system("cls");
                    printf("Temps restant : ");
                    printf("\n");
                    if (display >= 5) {
                        printf("%d week, ", week);
                    }
                    if (display >= 4) {
                        printf("%d day, ", day);
                    }
                    if (display >= 3) {
                        printf("%d hour, ", hour);
                    }
                    if (display >= 2) {
                        printf("%d minute, ", min);
                    }
                    printf("%d Seconde", sec);
                    printf("\n");
                    sec = sec - 1;
                } while (sec != -1);
                if (sec == -1 && min > 0) {
                    min = min - 1;
                    sec = sec + 60;
                    if (min == 0 && display == 2) {
                        display = 1;
                    }
                }
                else if (min == 0 && hour > 0) {
                    hour = hour - 1;
                    min = min + 59;
                    sec = sec + 60;
                    if (hour == 0 && display == 3) {
                        display = 2;
                    }
                }
                else if (hour == 0 && day > 0) {
                    day = day - 1;
                    hour = hour + 23;
                    min = min + 59;
                    sec = sec + 60;
                    if (day == 0 && display == 4) {
                        display = 3;
                    }
                }
                else if (day == 0 && week > 0) {
                    week = week - 1;
                    day = day + 6;
                    hour = hour + 23;
                    min = min + 59;
                    sec = sec + 60;
                    if (week == 0) {
                        display = 4;
                    }
                }
            } while (sec != -1);
//FIN
    sleep(1);
    system("cls");
    printf("Le compte a rebour est termine");
    printf("\n");
    getchar();
    getchar();
    return(0);
}