#include<stdio.h>
#define MAX 6
int main(){
    int arr[MAX];
	int i;
	//int n;
	//scanf("%d",&n);
	for(i=0;i<MAX;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<MAX;i++){
        printf("%d ",arr[i]);
	}
	printf("\n");
	
	/*for(i=0;i<MAX;i++){
	    scanf("%d",&arr[i]);
	}*/
    for(i=0;i<MAX;i++){
        printf("%d ",*(arr+i));
	}
	printf("\n");
	return 0;
}

