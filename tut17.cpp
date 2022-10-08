#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    // static int c= 0;
    // c=c+1;
    return a * b;
}

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    // int a, b;
    // cout << "Enter The value of a and b" << endl;
    // cin >> a >> b;
    // cout << "The Product of a and b is " << product(a, b) << endl;
    int money= 10000;
    cout << "if you have" << money << " Rs in your bank account, you will receive " << moneyReceived(money) << "Rs after 1 year"<<endl;
    cout << "For VIP:if you have" << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.10) << "Rs after 1 year";
    return 0;
}