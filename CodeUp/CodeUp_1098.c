#include <stdio.h>
int main(){
	int h, w, n, l, d, x, y, game[101][101]={};
	scanf("%d %d", &h, &w);
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d %d %d", &l, &d, &x, &y);
		for(int j=0; j<l; j++){
			if(d==0){
				game[y+j-1][x-1] = 1;
			}
			else{
				game[y-1][x+j-1] = 1;
			}
		}
	}
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++)
			printf("%d ", game[j][i]);
		printf("\n");
	}
	return 0;
}
