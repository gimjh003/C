#include <stdio.h>
int main(){
	int n, x, y, game[19][19]={};
	for(int i=0; i<19; i++)
		for(int j=0; j<19; j++)
			scanf("%d", &game[i][j]);
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &x, &y); 
		for(int i=0; i<19; i++){
			if(game[x-1][i]==0) game[x-1][i] = 1;
			else game[x-1][i] = 0;
		}
		for(int i=0; i<19; i++){
			if(game[i][y-1]==0) game[i][y-1] = 1;
			else game[i][y-1] = 0;
		}
	}
	for(int i=0; i<19; i++){
		for(int j=0; j<19; j++)
			printf("%d ", game[i][j]);
		printf("\n");
	}
	return 0;
}
