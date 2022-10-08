#include<iostream>

using namespace std;

int main(){
    // cout<<"This is tutorail 9";
    int age;
    cout<<"Tell me your age :"<<endl;
    cin>>age;

    // Selction control sturcture : If -else ladder
    // if((age<18) && (age>0)){
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to my party"<<endl;
    // }

    
    // Selction control sturcture : Switch case statsment
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;
    
    default:
        cout<<"No speacial cases"<<endl;
        break;
    }

    return 0;
}