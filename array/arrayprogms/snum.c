#include<stdio.h>
int main(){
    int i;
	int sum;
	scanf("%d",&i);
	for(sum=0; i!=0;i=i/10){
	    sum=sum+(i%10);
	}
	printf("sum:%d",sum);
	return 0;
}

