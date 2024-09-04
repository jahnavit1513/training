#include<stdio.h>
#define min 60
int main(){
    int t;
	//printf("enter time in minutes: ");
	scanf("%d",&t);
	printf("the time : %d hours and %d minutes:",t/60,t%60);
	return 0;
}
