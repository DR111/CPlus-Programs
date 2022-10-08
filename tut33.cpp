#include<iostream>
using namespace std;

class BackDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BackDeposit(){}
        BackDeposit(int p, int y, float r);
        BackDeposit(int p, int y, int r);
        void show();
};

BackDeposit :: BackDeposit(int p, int y,float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+r);
    }
    
}

BackDeposit :: BackDeposit(int p, int y,int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

void BackDeposit :: show(){
    cout<<endl<<"Pricipal amount was "<<principal;
    cout<<endl<<"Return value for "<<years;
    cout<<endl<<"years is "<<returnValue<<endl;
}

int main(){
    BackDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    // bd3.show();
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BackDeposit(p, y, r);
    bd1.show();  

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>R;
    bd2 = BackDeposit(p, y, R);
    bd2.show();  
    return 0;
}