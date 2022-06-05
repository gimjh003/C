#include <stdio.h>
int main(){
	enum month {
		January, February, March,
		April, May, June,
		July, August, September,
		October, November, December
	};
	enum month mon;
	printf("월 입력 : "); 
	scanf("%d", &mon);
	printf("%d월은 ", mon--);
	switch(mon){
		case January: printf("January");
		case February: printf("February");
		case March: printf("March");
		case April: printf("April");
		case May: printf("May");
		case June: printf("June");
		case July: printf("July");
		case August: printf("August");
		case September: printf("September");
		case October: printf("October");
		case November: printf("November");
		case December: printf("December");
	}
	printf(" 입니다.");
	return 0;
}