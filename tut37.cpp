#include<iostream>
using namespace std;

// Base class
class Employeee{
    public:
    int id;
    float salary;
        Employeee(int inpId){
            id = inpId;
            salary = 34.0;
        }
        Employeee(){}

};

// Derived class syntax
/*
class {{derived -class name}} : {{visibility-mode}} {{base-class}}
{
    members/methods
}
*/

class Programmer : Employeee{
    public:
    Programmer(int inpID){
        id = inpID;
    }
    int languageCode=9;
    void getData(){
        cout<<id<<endl;
    }
};

int main(){
    Employeee harry(1),rohan(2);
    cout<<harry.salary<<endl;   
    cout<<rohan.salary<<endl;   
    Programmer skillF(1);
    cout<<skillF.languageCode<<endl;
    skillF.getData();
    return 0;
}