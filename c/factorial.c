#include <stdio.h>

int factorial(int n){
	if(n==0) return 1;
	return n*factorial(n-1);
}

int main(){
	int n;
	printf("Enter the number to find the factorial: ");
	printf("\nFactorial: %d",factorial(n));
	return 0;
}
