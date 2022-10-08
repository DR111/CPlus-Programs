#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    // Function Objects(Functor): Function wrapped in a class so that it avaliable like an object
    int arr[] = {1, 73, 34, 12, 54, 74};
    sort(arr, arr+6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}