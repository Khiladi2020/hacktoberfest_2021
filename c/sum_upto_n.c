#include <stdio.h>

int sum_to_n(int n){
	if(n==1) return 1;
	return n+ sum_to_n(n-1);
}

int main(){
	int n=5;
	printf("Sum: %d",sum_to_n(n) );
	return 0;
}