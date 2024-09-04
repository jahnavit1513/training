#include<stdio.h>
int main(){
    int a;
	int b;
	int n;
	printf("enter 2 numbers:");
	scanf("%d %d",&a,&b);
	printf("1.addition\n 2.substraction\n 3.multiplication\n 4.division\n");
	scanf("%d",&n);
	switch (n){
	    case 1:
		    printf("%d",a+b);
			break;
		case 2:
		    printf("%d",a-b);
			break;
		case 3:
		    printf("%d",a*b);
			break;
		case 4:
		    printf("%d",a/b);
		    break;
		default:
		    printf("the option is not available");
			break;
	}
	return 0;
}
