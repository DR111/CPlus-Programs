#include<iostream>
using namespace std;

int count=0;
class Num{
    public:
        Num(){
            count++;
            cout<<"This is the time where constructor is called for object number "<<count<<endl;
        }
        ~Num(){
            cout<<"This is the time when my distractor is called for object number"<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"We are inside are main function"<<endl;
    cout<<"Creating 1 objects n1"<<endl;
    Num n1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating two more objects"<<endl;
        Num n2, n3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}