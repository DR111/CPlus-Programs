#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;
};

class Derived : Base{

};

int main(){
    Base b;
    Derived d;
    // cout<<d.a;
    return 0;
}