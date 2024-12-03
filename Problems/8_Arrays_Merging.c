#include <stdio.h>

int main() {
	// your code goes here
	int n,x;
	scanf("%d %d", &n, &x);
	
	int arr1[n], arr2[x];
	for(int i = 0;i<n; i++){
	    scanf("%d", &arr1[i]);
	}
	
	for(int i = 0; i<x; i++){
	    scanf("%d", &arr2[i]);
	}
	
	int new_array[n+x+n];
	
	for(int i = 0; i<n; i++){
	    new_array[i] = arr1[i];
	}
	
	for(int i = 0; i<x; i++){
	    new_array[n+i] = arr2[i];
	}
	
	for(int i = 0; i<n; i++){
	    new_array[n+x+i] = arr1[i];
	}
	
	for(int i = 0; i<(n+x+n); i++){
	    printf("%d ", new_array[i]);
	}
return 0;
}

