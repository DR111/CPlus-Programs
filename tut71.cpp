#include<iostream>
#include<vector>

using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<"Diaplaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}

int main(){

    // ways to create a vector
    vector<int> vec1;
    int element, size=5;

    // cout<<"Enter the size of vector: "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    

    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // // vec1.insert(iter+1,5, 566);
    // display(vec1);
    

    vector<char> vec2(4);
    // vec2.push_back('5');
    // display(vec2);
    vector<char> vec3(vec2);
    // display(vec3);
    vector<int> vec4(6, 13);
    display(vec4);


    return 0;
}