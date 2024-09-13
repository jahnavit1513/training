#include<stdio.h>
#define MAX 4
int main(){
    int arr2[MAX];
	int i;
	int n;
	for(i=0;i<MAX;i++){
	    scanf("%d",&arr2[i]);
	}
	for(i=0;i<MAX;i++){
	    printf("original array %d",arr2[i]);
	}
    //temp == arr2[MAX];
	for(i=MAX-1;i>=0;i--){
	//for(i=0;i<MAX;i++)
        printf("reversed array %d",arr2[i]);
	}
	return 0;
}
	//if(arr2[i] == temp[i]){


