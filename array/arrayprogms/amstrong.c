#include<stdio.h>
#include<math.h>
int main(){
    int num;
	int temp;
	int remainder;
	int count=0;
	printf("enter a positive number: ");
	scanf("%d",&num);
	//printf("%d",a);
	temp=num;
	while(temp!= 0){
	    temp=temp/10;
		count++;
	}
	printf("no of digits: %d",count);
	temp=num;
	int result=0;
	int digit;
	int value;
	for(int i=0;i<count;i++){
		digit=temp%10;
	    value=pow(digit,count);
	    result+=value;
		temp=temp/10;
	}
	printf("result %d",result);
	if (result==num){
	    printf("amstrong number");
	}
	else{
	    printf("not an amstrong number");
	}
    return 0;
}
