#include<iostream>
#include<fstream>

using namespace std;

int main(){

    // ofstream hout("sample60.txt");
    // cout<<"Enter your name";
    // string name;    
    // cin>>name;
    // hout <<"My name is " + name;
    // hout.close();

    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;

    return 0;
}