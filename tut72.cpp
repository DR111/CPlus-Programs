#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main(){
    list<int> list1;
    list1.push_back(5);
    list1.push_back(2);
    list1.push_back(6);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);
    // list1.pop_front();
    // list1.remove(9);

    // list1.sort();
    // display(list1);


    list<int> list2(3);
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 62;
    iter++;
    *iter = 32;
    iter++;
    display(list2);

    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"After merging: ";
    display(list1);
    return 0;
}