
//Given three sides of a triangle, determine whether the given triangle is an equilateral, isosceles or scalene triangle.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter side of triangle: ";
    cin>>a>>b>>c;

//M-1
    // if(a==b && b==c){
    //     cout<<"Eqilateral";
    // }else if(a == b || b == c || a == c){
    //     cout<<"Isosceles";
    // }else{
    //     cout<<"scalene";
    // }

//M-2

if(a == b && b== c){
    cout<<"equilateral";
}else if(a != b && b != c && a != c){
    cout<<"Scalene";
}else{
    cout<<"Isosceles";
}
    return 0;
}