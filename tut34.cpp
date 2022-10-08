#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a=0;
        }
        
        Number(int num){
            a = num;
        }

        Number(Number &obj){
            cout<<"Copy Constuctor called"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for the object is "<< a <<endl;
        }

};

int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    // z1 should exectly resemble z or x or y
    Number z1(z);
    z1.display();

    z2 = z; // Copy constractor is not called

    Number z3 = z;
    return 0;
}