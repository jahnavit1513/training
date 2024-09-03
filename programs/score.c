#include<stdio.h>
int main(){
    int score;
	char grade;
	printf("enter your score:");
	scanf("%d",&score);
	printf("enter your grade:");
	scanf(" ");
    scanf("%c",&grade);
	printf("the score is %d and the grade is %c\n",score,grade);
	return 0;
}
