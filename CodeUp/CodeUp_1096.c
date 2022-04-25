#include <stdio.h>
int main(){
    int n, x, y, game[19][19] = {};
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        game[x-1][y-1] = 1;
    }
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++)
            printf("%d ", game[i][j]);
    	printf("\n");
	}
    return 0;
}
