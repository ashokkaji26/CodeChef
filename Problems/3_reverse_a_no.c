//Write a C program that takes an integer as input and prints its reverse. Use a while loop for the reversal process.
#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d", &n);
	
	int r;
	int reversedNo = 0;
	
	while(n>0){
	    r = n%10;
	    reversedNo = reversedNo * 10 + r;
	    n/=10;
	}
printf("%d\n", reversedNo);
return 0;
}

