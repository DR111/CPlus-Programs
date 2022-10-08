#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st ="Harry bhai";
    string st2;
    // ofstream out("sample60.txt");//Write operation
    // out<<st;    
    ifstream in("sample60.txt");//Write operation
    // in>>st2; 
    getline(in, st2);
    cout<<st2;   
    return 0;
}