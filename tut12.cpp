#include<iostream>
using namespace std;

int main(){
    // What is the pointer-- > Data type which holds the address of other data type

    int a=3;
    int* b=&a;
    // &--> Address of the operator
    cout<<"The address of a "<<&a<<endl;
    cout<<"The address of a "<<b<<endl;

    // *--> Derefence the operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address of c is "<<*c<<endl;
    cout<<"The value at address value(address (c)) is "<<**c<<endl;

    return 0;
}