#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with 2 arugument"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with  arugument"<<endl;
    return a+b+c;
}

int volume(double r, int h){
    return (3.14 * r * r* h);
}

int volume(int a){
    return a*a*a;
}

int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3,7 and 6 is "<<sum(3,7,6)<<endl;
    cout<<"The volume of cubiod is "<<volume(3,7,6)<<endl;
    cout<<"The volume of cylinder is "<<volume(7,10)<<endl;
    cout<<"The volume of cube is "<<volume(4)<<endl;
    return 0;
}