#include<stdio.h>
int main()
{
    int a;
	int b;
	int maxNumber;
    scanf("%d",&a);
    scanf("%d",&b);
	maxNumber=((a>b)?a:b);
    printf("the ternary output is:%d",maxNumber);
	return 0;
}

