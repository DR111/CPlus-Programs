#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
}

// call by value
void swap(int a, int b){
    int temp=a;
    a = b;
    b = temp;
}

// call by reference using pointers
void swapPointer(int* a, int* b){
    int temp=*a;
    *a = *b;
    *b = temp;
}

// call by reference using C++ reference variables
int& swapRV(int &a, int &b){
    int temp= a;
    a = b;
    b = temp;
    return a;
}
int main(){
    int a=4 , b=5;
    // cout<<"The sum of 4, 5 is "<<sum(a,b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swapPointer(&a, &b);
    swapRV(a, b)=766;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    
    return 0;
}