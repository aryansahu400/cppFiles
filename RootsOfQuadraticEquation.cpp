#include<bits/stdc++.h>
using namespace std;

int main()
{
    float b,a,c,r1,r2;
    cout<<"Enter the Coefficient of x squared"<<endl;
    cin>>a;
    cout<<"Enter the Coefficient of x"<<endl;
    cin>>b;
    cout<<"Enter the Constant value"<<endl;
    cin>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r1=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"The roots are ("<<r1<<" ,"<<r2<<")"<<endl;
    return 0;
}