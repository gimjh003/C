#include <stdio.h>
#include <stdlib.h>
int main(){
    int cloud[2][26], met, k, jul;
    for(jul=0;jul<26;jul++){
        cloud[0][jul] = -24;
        cloud[1][jul] = rand() % 10 + 3;
    }
    for(k=1; k<100; k++){
        system("cls");
        for(jul=0; jul<26; jul++){
            cloud[0][jul] += cloud[1][jul];
            if(cloud[0][jul]>115){
                cloud[0][jul] = -24;
                cloud[1][jul] = rand() % 10 + 3;
            }
            for(met=0; met<=115; met++){
                if(cloud[0][jul] == met) printf("CLOUD");
                else printf(" ");
            }
            printf("\n");
        }
        system("timeout /t 1 > NULL");
    }
    return 0;
}