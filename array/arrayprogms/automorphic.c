#include<stdio.h>
#include<math.h>
int main(){
    int num;
	int square=num*num;
	int sum;
	int remainder;
	int count=0;
	int last_digit;
	//int last;
	printf("enter anumber:");
    scanf("%d",&num);
	while(num!=0){
	    //remainder=num%10;
		//`sum=sum+remainder;
		num=num/10;
		count++;
	}
	printf("count %d",count);
	int mod_value=pow(10,count);
	last_digit=square % mod_value;
	if (num== last_digit){
	    printf("automorphic number");
	}
	else{
	    printf("no automorpphic number");
	}
	return 0;
}

	    /* {
		    printf("automorphic");
		}
		else{
		    printf("not automorphic");
		}
	}*/
    
