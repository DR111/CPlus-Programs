#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    // Creating a constructor
    // Constructor is a special menmber function with the same name as the class
    // it is use to initlaz the object in class
    // it is automatically invoked whwnever object is created

    Complex(void); // Constructor declaration
     void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl; 
    }

};

Complex :: Complex(void){
    a =0;
    b =0;
    // cout<<"Hello World"<<endl;
}
int main(){
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}