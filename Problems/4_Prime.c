// Write a program using while loop to check if the positive number N is prime or not.

#include <stdio.h>

int main() {
    int num;
 
    scanf("%d", &num);
    // Complete the code
    if(num<=1){
        printf("No\n");
        return 0;
    }
    
    int i = 2;
    int isPrime = 1;
    while(i*i<=num){
        if(num%i==0){
            isPrime = 0;
            break;
        }
        i++;
    }
    if(isPrime ==1){
        printf("Yes\n");
    }else{
        printf("no\n");
    }
    
    return 0;
}
