#include<stdio.h>
#define MAX 5
int main(){
    int arr[MAX];
	int i,j;
	//int a;
	int vis[MAX]={0};
	//int a=arr[i];
	for(i=0;i<MAX;i++){
	    scanf("%d",&arr[i]);
	}
    for(i=0;i<MAX;i++){
	   // int a=arr[i];
        printf("%d",arr[i]);
    }
	//int count=0;
	//if(vis[i]==0){
    for(i=0;i<MAX;i++){
	    int a=arr[i];
		int count=0;
	        if (vis[i] == 0){
	            for(j=0;j<MAX;j++){
		            if(arr[j]==a){
			            count++;
				        vis[j]=1;
				    }
			    }
	    	printf("%d appeared %d times in array\n",a,count);
	    }
	}
	return 0;
}
