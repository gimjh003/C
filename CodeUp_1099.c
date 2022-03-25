#include <stdio.h>
int main(){
	int x=1, y=1, i=0, map[10][10] = {};
	for(int i=0; i<10; i++)
		for(int j=0; j<10; j++)
			scanf("%d", &map[i][j]);
loop:
		if(map[y][x] == 2){
			map[y][x] = 9;
			goto end;
		}
		else if(map[y][x+1] != 1){
			map[y][x] = 9;
			++x;
			if(map[y][x]==2) goto loop;
			map[y][x] = 9;
			goto loop;
		}
		else if(map[y+1][x] != 1){
			map[y][x] = 9;
			++y;
			if(map[y][x]==2) goto loop;
			map[y][x] = 9;
			goto loop;
		}
end:
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++)
			printf("%d ", map[i][j]);
		printf("\n");
	}
	return 0;
}
