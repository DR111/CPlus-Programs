#include<iostream>
using namespace std;

// Function prototype
// int sum(int a, int b);
int sum(int , int );

int main(){
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The Sum is "<<sum(num1,num2);
    return 0;
}

int sum(int a, int b){
    // a and b will be formal parameters
    int c = a+b;
    return c;
}