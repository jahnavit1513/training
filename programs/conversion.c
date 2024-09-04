#include<stdio.h>
#define week 7
int main(){
    int d;
	printf("enter no of days:");
	scanf("%d",&d);
	printf("%dweeks ,%d days",d/week,d%week);
	return 0;
}

