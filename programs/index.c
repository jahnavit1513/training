#include<stdio.h>
int main(){
    int height;
	int weight;
	float bmi;
	scanf("%d",&height);
	scanf("%d",&weight);
	printf("the bmi index is %d",weight/(height*height));
	return 0;
}

