#include <stdio.h>
double print_string(const char str[]);
int main(){
    char str[10] = "TED CHANG";
    print_string(str);
    return 0;
}
double print_string(const char str[]){
    int k;
    for(k=0; str[k] != 0; k++){
        printf("%c", str[k]);
    }
    printf("\n");
    printf("%s", str);
}