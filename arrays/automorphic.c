#include<stdio.h>
int main(){
    int num;
	int square=num*num;
	int temp;
	//int last;
	printf("enter anumber:");
    scanf("%d",&num);
	while(temp>0){
	    if(temp % 10 == square%10){
		    printf("automorphic");
		}
		else{
		    printf("not automorphic");
		}
	}
	return 0;
}
	
    
