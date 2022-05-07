#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int bubb[38], k, jul, met, dt = -1;
    for (met = 0; met < 38; met++)
        bubb[met] = met % 25;
    for (k = 0; k < 300; k++) {
        system("cls");
        for (met = 0; met < 38; met++) {
            if (_kbhit()) dt = 0 - dt;
            bubb[met] = bubb[met] + dt;
            if (bubb[met] < 0) bubb[met] = 24;
            else if (bubb[met] > 24) bubb[met] = 0;
        }
        for (jul = 0; jul < 25; jul++) {
            for (met = 0; met < 38; met++) {
                if (bubb[met] == jul) printf("<>");
                else printf("   ");
            }
            printf("\n");
        }
    }
    return 0;
}