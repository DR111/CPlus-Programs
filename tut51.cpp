#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    // Complex c1;
    // Complex* ptr = &c1;
    Complex *ptr = new Complex;
    ptr->setData(1, 5);
    //is as good as (*ptr).setData(1,5);  
    
    (*ptr).getData();  

    // Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 7);
    //is as good as (*ptr).setData(1,5);  

    (*ptr1).getData();  
    return 0;
}