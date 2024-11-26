//Given an integer N . Write a program to obtain the sum of the first and last digits of this number.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a no: ";
    cin>>n;

    int lastDigit= n%10;
    int firstDigit = n;

    while(firstDigit>= 10){
        firstDigit/=10;
    }
    cout<<(firstDigit + lastDigit)<<endl;
    
    return 0;
}