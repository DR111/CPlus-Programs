#include<iostream>
using namespace std;
/*
class Test{
    int a;
    int b;
    public:
        Test(int i, int j): a(i), b(j){
            cout<<"Constuctor exected"<<endl;
        }
}
*/
class Test{
    int a;
    int b;
    public:
        // Test(int i, int j): a(i), b(j)
        // Test(int i, int j): a(i), b(i+j)
        // Test(int i, int j): a(i), b(2 * j)
        // Test(int i, int j): a(i), b(a + j)
        // Test(int i, int j): b(j), a(i+b) //--> RED flag this willl create problem becoz a is intiziles first
        Test(int i, int j): a(i)
        {
            b = j;
            cout<<"Constuctor exected"<<endl;
            cout<<"The value of a is :"<<a<<endl;
            cout<<"The value of b is :"<<b<<endl;
        }
};
int main(){
    Test t(4, 6);
    return 0;
}