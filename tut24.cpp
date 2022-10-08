#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of the employee is "<<id<<"  this is employee number "<<count<<endl;
        }

        static void getCount(void){
            cout<<"The value of count is "<<count<<endl;
        }
};

// Count is the static data member of class employee
int Employee :: count; //Default value is 0

int main(){
    Employee harry,rohan,levis;
    harry.setData();
    harry.getData();

    Employee::getCount();

    rohan.setData();
    rohan.getData();

    Employee::getCount();

    levis.setData();
    levis.getData();

    Employee::getCount();
    
    return 0;
}