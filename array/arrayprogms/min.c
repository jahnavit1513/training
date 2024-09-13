#include<stdio.h>
int main(){
    int arr[4]={1,2,3,4};
	int max,min,i;
	max=arr[0];
	min=arr[0];
	for(i=0;i<4;i++){
	    if(arr[i]<min){
	        min=arr[i];
		}
		//printf("max %d",max);
		if(arr[i]>max){
		    max=arr[i];
		}
	}
	printf("max %d",max);
	printf("min %d",min);
	return 0;
}
	

	    
