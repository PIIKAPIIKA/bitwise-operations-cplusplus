#include<iostream>
using namespace std;
int main(){
    int a = 3, b= 7;
    int bitwise_and=a&b;
    int bitwise_or=a|b;
    int bitwise_xor=a^b;
    int bitwise_not=~a;
    int leftshift=a<<2;
    int rightshift=3>>a;
    cout << "AND :"<<bitwise_and<<endl;
    cout << "OR :"<<bitwise_or<<endl;
    cout << "XOR :"<<bitwise_xor<<endl;
    cout << "NOT :"<<bitwise_not<<endl;
    cout << "Leftshift :"<<leftshift<<endl;
    cout << "Rightshift :"<<rightshift<<endl;

}
