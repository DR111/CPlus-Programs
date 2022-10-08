// This is System header files
#include<iostream>
using namespace std;

int main()
{
    int a=4, b=5;
    cout<<"Operators in c++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithmetic operator
    cout<<"The value of a + b is "<<a +b<<endl;
    cout<<"The value of a - b is "<<a -b<<endl;
    cout<<"The value of a * b is "<<a *b<<endl;
    cout<<"The value of a / b is "<<a /b<<endl;
    cout<<"The value of a % b is "<<a %b<<endl;
    cout<<"The value of a ++ is "<<a ++<<endl;
    cout<<"The value of a -- is "<<a --<<endl;
    cout<<"The value of ++a  is "<<++a<<endl;
    cout<<"The value of --a  is "<<--a<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    // Assignment operators
    // int a=3, b=9;
    // char c='c';

    // Comparsion operators
    cout<<"Following are the types of Comparsion operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;

    // Logical  operators
    cout<<"Following are the types of Logical operators in C++"<<endl;
    cout<<"The value of logical and operator (a==b) && (a<b) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of logical or operator (a==b) || (a<b) is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of logical not operator !(a==b) is "<<(!(a==b))<<endl;
    

    return 0;
}
