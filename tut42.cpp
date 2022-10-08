#include<iostream>
#include<cmath>
using namespace std;

/*Create 2 class 
1. Simple calculator- perform 2 number , +. - .*. /
2. scitific calculator - performs scitific 4 opertions
*/

class Simple{
    protected:
        float c;
    public:
        void add(int a, int b){
            c = a+b ;
        }
        void sub(int a, int b){
            c = a-b ;
        }
        void div(int a, int b){
            c = a/b ;
        }
        void mul(int a, int b){
            c = a*b ;
        }
        void display(){
            cout<<"The final output of the function is "<<c<<endl;
        }
};

class Scientific{
    protected:
        double c;
    public:
        double x;
        void sinfun(float a){
            x = a*3.14159/180;
            c = sin(x);
        }
        void cosfun(float a){
            x = a*3.14159/180;
            c = cos(x);
        }
        void tanfun(float a){
            x = a*3.14159/180;
            c = tan(x);
        }
        void squareroot(float a){
            c = sqrt(a);
        }
        void show(){
            cout<<"The output of the scientific calcutor is "<<c<<endl;
        }
};

class Hybrid : public Simple, public Scientific{

};

int main(){
    Simple d;
    d.add(5,10);
    d.display();
    d.mul(5,10);
    d.display();

    Scientific e;
    e.sinfun(45);
    e.show();
    e.cosfun(45);
    e.show();
    e.squareroot(25);
    e.show();

    Hybrid f;
    f.add(4,6);
    f.display();
    f.cosfun(45);
    f.show();
    f.squareroot(25);
    f.show();
    return 0;
}