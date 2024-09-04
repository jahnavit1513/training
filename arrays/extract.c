#include<stdio.h>
int main()
{
    int ext_num;
	int org_num;
	printf("enter extracted number:\n");
	scanf("%d",&ext_num);
	printf("enter original number:\n");
	scanf("%d",&org_num);
	if (ext_num == org_num){
	    printf("automorphic");
	}
	else{
	    printf("not automorphic");
	}
	return 0;
}

