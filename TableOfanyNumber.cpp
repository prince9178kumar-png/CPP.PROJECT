#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a Number:";
    cin>>a;
    for (int i = a; i<=a*10; i+=a)
    cout<<i<<" ";
}