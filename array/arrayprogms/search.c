#include<stdio.h>
#define MAX 4
int main(){
    int i;
	int arr[MAX];
    for(i=0;i<MAX;i++){
	    scanf("%d",&arr[i]);
	}
    for(i=0;i<MAX;i++){
        printf("%d",arr[i]);
	}
	int n;
	scanf("%d",&n);
	int flag=0;
	for(i=0;i<MAX;i++){
	    if(arr[i] == n){
		    printf("match at index %d",i);
	        flag=1;
	        break;
		}
	}
	if(flag == 0){
		printf("doesnt match");
	}
	return 0;
}
	    
