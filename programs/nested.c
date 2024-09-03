#include<stdio.h>
int main(){
    int a,b,c;
    int max;
   //	max=(a>b)?(a>c)?a:c:(b>c)?b:c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	max=(a>b)?(a>c)?a:c:(b>c)?b:c;
	printf("the maximum nymber is :%d\n",max);
	return 0;
}
