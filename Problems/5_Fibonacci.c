// You are given an integer N, print the 1st N fibonacci nos. 

#include <stdio.h>

int main() {
    int N, prev = 0, current = 1;
    scanf("%d", &N);
    
    // Update your code below this line
    
   if(N>= 1) {
       printf("%d ", prev);
   }
   
   if(N>= 2){
       printf("%d ", current);
   }

    for(int i = 3; i<=N; i++){
        int next = prev + current;
        printf("%d ", next);
        prev = current;
        current = next;
    }

    return 0;
}


