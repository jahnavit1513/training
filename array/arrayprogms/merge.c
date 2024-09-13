#include<stdio.h>
#define MAX 8
int main(){
    int arr1[MAX];
	int arr2[MAX];
	int i;
	int sum[MAX+MAX];
	for(i=0;i<MAX;i++){
	    scanf("%d",&arr1[i]);
	}
	for(i=0;i<MAX;i++){
        printf("%d",arr1[i]);
	}
	for(i=0;i<MAX;i++){
	    scanf("%d",&arr2[i]);
    }
    for(i=0;i<MAX;i++){
        printf("%d",arr2[i]);
	}
	for(i=0;i<MAX+MAX;i++){
	    sum[i]=arr1[i]+arr2[i];
	}
    for(i=0;i<MAX+MAX;i++){
    printf("sum %d",sum[i]);
	}
	return 0;
}



