#include<stdio.h>
int main(){
    int i;
	int sum=0;
	int avg;
	int arr[4]={1,3,4,6};
	for(i=0;i<4;i++){
	    sum=sum+i;
		avg=sum/2;
	}
	printf("the sum:%d",avg);
	return 0;
}
	    
