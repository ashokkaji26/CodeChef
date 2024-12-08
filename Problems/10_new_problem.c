#include <stdio.h>

int main() {
	// your code goes here
	int n,x;
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0; i<n; i++){
	    scanf("%d", &arr[i]);
	}
    
    scanf("%d", &x);
    int new_size = 0;
    
    for(int i = 0; i<n; i++){
        if(arr[i] != x){
            arr[new_size] = arr[i];
            new_size++;
        }
    }
    
    for(int i = 0; i<new_size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

