#include <stdio.h>
#include <stdlib.h>
#define size 40
#define line 20
#define delay 50

int main(){
	char real[size], str[] = "C Programming", temp[size];
	int i, j, k, jul;
	for(i=0; i<size; i++){
		j = i;
		real[i] = i>=sizeof(str)-1? ' ':str[i];
	}
	for(i=0; i<100; i++){
		system("cls");
		for(jul=0; jul<line; jul++){
			for(j=0; j<size; j++){
				k = i%size+j+jul*2;
				if(k>size-1) k %= size;
				temp[j] = real[k];
			}
			temp[size-1] = 0;
			printf("%s\n", temp);
		}
		Sleep(delay);
	}
	return 0;
}