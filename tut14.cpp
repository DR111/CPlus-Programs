#include<iostream>
using namespace std;

typedef struct employee
{
    int eid;
    char favChar;
    float salary;
}ep;

union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
    enum Meals{breakfast, lunch, dinner};
    Meals m1 = breakfast;
    cout<<m1;  
    // cout<<breakfast; 
    // cout<<lunch; 
    // cout<<dinner; 

    // union money m1;
    // m1.rice = 34;
    // cout<<m1.rice;
    // ep harry;
    // harry.eid = 1;
    // harry.favChar = 'c';
    // harry.salary = 100000;
    // cout<<"The value of "<<harry.eid<<endl;
    // cout<<"The value of "<<harry.salary<<endl;
    // cout<<"The value of "<<harry.favChar<<endl;
    
    return 0;
}