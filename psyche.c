#include <stdio.h>
#include <stdlib.h>
int main(){
    int rain[60] = {0}, k, jul, met;
    for(met=0; met<60; met++)
        rain[met] = met%27;
    for(k=0; k<200; k++){
        system("cls");
        for(met=0; met<60; met++){
            if(met%2){
                if(rain[met]<26) rain[met]++; // 홀수번째에 위치한 데이터는 아래로 내려간다
                else rain[met] = 0;
            } else {
                if(rain[met]>0) rain[met]--; // 짝수번째에 위치한 데이터는 위로 올라간다
                else rain[met] = 26;
            }
        }
        for(met=0; met<60; met++){  // 10~16번째 줄과 동일한 기능
            rain[met] += rain[met]%2*2-1;
            if(rain[met]<26) rain[met]++;
            else if(rain[met]<0) rain[met] = 26;
        }
        for(jul=0; jul<26; jul++){
            for(met=0; met<60; met++){
                if(rain[met]==jul) printf("<>");
                else printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}