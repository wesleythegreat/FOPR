#include <stdio.h>
int mysum (int a, int b);
int main() {
	int b,res;
	printf("what is my age?");
	scanf("%i",&b);
	int mynum = 500;
	int num1 = 19;
	res = mysum(mynum,b);
	if (b == num1) {
	printf("You are correct! my age is %i \n ", num1 );
	return 0;
	}
	else{
		printf("wrong it's %i, you will be banned in \n years",num1,res);
		return 0;
	}
}
int mysum (int a, int b){
	int result;
	result = a + b;
	return result;
}
