#include<iostream>
using namespace std;

int c=45;

int main(){

    // *************Build in Data types***********
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;

    // c=a+b;

    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;

    // *************Float, double,and long double Literals***********

    // float d=34.4f;
    // long double e = 34.4l;

    // cout<<"The size of 34.4 "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4l "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L "<<sizeof(34.4L)<<endl;
    // cout<<"The size of 34.4f "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F "<<sizeof(34.4F)<<endl;

    // cout<<"The value of d "<<d<<endl<<"The value of e "<<e;

    // *************Reference variables***********
    // Rohan ---->Monty ---->Rohu

    // float x=455;
    // float &y = x;

    // cout<<x<<endl;
    // cout<<y<<endl;

    // *************Typecasting***********
    int a=45;
    float b=45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    int c= int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;

    return 0;
}