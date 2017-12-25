#include <stdio.h>

//pass by reference
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("after swap variables\n x:%d y:%d\n", *x, *y);
}

//factorial
int factorial(int n){
	if(n == 1){
		return(1);
	}else{
		return(n*factorial(n-1));
	}
}

struct human{
	char name;
	int age;
}; 

void main(void){
	int input;
	printf("Type a number for factorial");
	scanf("%d", &input);
 	printf("%d! = %d\n\n", input, factorial(input));
 	
 	printf("=====swap variable using pass by reference=====\n");
	int x = 5;
	int y = 10;
	printf("before swap variables\n x:%d y:%d\n", x, y);
	swap(&x,&y);
	
	printf("=====pointer & array=====\n");
	int array[5]={ 1,2,3,4,5 };
	int count;
	for ( count=0 ; count<5 ; ++count ){
		printf("array[%d]=%d<-->*(array+%d)=%d\n",count,array[count], count,*(array+count));
	}
	
	printf("=====implement struct=====\n");
	struct human one;
	printf("Type name...");
	scanf("%S", &one.name);
	printf("Type age...");
	scanf("%d", &one.age);
	printf("name:%s age:%d", one.name, one.age);
}
