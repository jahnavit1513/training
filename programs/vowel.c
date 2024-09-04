#include<stdio.h>
int main(){
    char a;
	printf("enter acharacter:");
	scanf("%c",&a);
	switch(a){
	    case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		    printf("vowel is %c",a);
			break;
		default:
		    printf("consonant is %c",a);
			break;
	}
	return 0;
}


