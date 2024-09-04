#include<stdio.h>
int main(){
    int arr[10];
	int i;
   /* for(i=0;i<10;i++){
	    scanf("%d",&arr[i]);
	}*/
	for(i=0;i<10;i++){
	    arr[i]=i+1;
	    printf("%d",arr[i]);
	}
	return 0;
}
