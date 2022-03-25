#include <stdio.h>
int main(){
	int n;
check:
	scanf("%d", &n);
	if(n==0)
		goto end;
	else
		printf("%d\n", n);
		goto check;
end:
	return 0;
}
