#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"operators that use 2 numbers"<<endl;
    int x,y,z;
    cin>>x>>y;
    //AND
    z=x&y;
    cout<<"AND operation between "<<x<<" and "<<y<<"gives: "<<z<<endl;
    //OR
    z=x|y;
    cout<<"OR operation between "<<x<<" and "<<y<<"gives: "<<z<<endl;
    //XOR
    z=x^y;
    cout<<"XOR operation between "<<x<<" and "<<y<<"gives: "<<z<<endl;
    cout<<endl;
    cout<<"Operators that use 1 number"<<endl;
    int a;
    cout<<"enther the value"<<endl;
    cin>>a;
    //NOT
    z=~a;
    cout<<"NOT operation on "<<a<<"gives: "<<z<<endl;
    //lEFT SHIFT
    z=a<<2;
    cout<<"left shit operation on "<<a<<"by 2 gives: "<<z<<endl;
    //right shift
    z=a>>2;
    cout<<"right shift operation on "<<a<<"by 2 gives: "<<z<<endl;
    return 0;
}