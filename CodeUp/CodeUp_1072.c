#include <stdio.h>
int main(){
	int n, i, j=0;
	scanf("%d", &n);
print:
	scanf("%d", &i);
	printf("%d\n", i);
	if(++j==n)
		goto end;
	else
		goto print;
end:
	return 0;
}
