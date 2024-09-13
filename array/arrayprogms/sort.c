#include<stdio.h>
#define MAX 5
int  main(){
    int arr[MAX];
	int i;
	int j;
	int temp;
	for(i=0;i<MAX;i++){
	    scanf("%d",&arr[i]);
	}
	for(i=0;i<MAX;i++){
	    printf("%d",arr[i]);
	}
	for(i=0;i<MAX;i++){
	    for(j=0;j<MAX-i-1;j++){
	        if(arr[j]>arr[j+1]){
		        temp = arr[j];
		    	arr[j]=arr[j+1];
			    arr[j+1]=temp;
		    }
		}
	}
	for(i=0;i<MAX;i++){
	    printf("%d",arr[i]);
	}
	return 0;
}

	
