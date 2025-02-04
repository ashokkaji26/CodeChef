#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    // Update your code below this line to solve the problem
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-(i+1); j++){
            printf(" ");
        }
        for(int k = 0; k<=i; k++){
            printf("*");
        }
        for(int l = 0; l<i; l++){
            printf("*");
        }
        
        printf("\n");
        
    }
    
    for(int i = 0; i<(n-1); i++){
        for(int j = 0; j<=i; j++){
            printf(" ");
        }
        for(int k= 0; k<(n-i-1); k++){
            printf("*");
        }
        for(int l = 0; l<(n-i-2); l++){
            printf("*");
        }
        printf("\n");
    }



    return 0;
}


