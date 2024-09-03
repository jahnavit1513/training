#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
	printf("enter the radius:");
	scanf("%d",&r);
	printf("the area of circle is %f",PI*r*r);
	printf("the circumference of circle is %f",2*PI*r);
	return 0;
}
