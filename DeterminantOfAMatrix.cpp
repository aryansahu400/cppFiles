#include<bits/stdc++.h>
using namespace std;

int two()
{
    cout<<"Enter the elements of the matrix"<<endl;
    int a11,a12,a21,a22;
    cin>>a11>>a12;
    cin>>a21>>a22;
    return (a11*a22)-(a21*a12);
}
int three()
{
    cout<<"Enter the elements of the matrix"<<endl;
    int a11,a12,a13,a21,a22,a23,a31,a32,a33;
    cin>>a11>>a12>>a13>>a21>>a22>>a23>>a31>>a32>>a33;
    /*
    a11 a12 a13 a11 a12
    a21 a22 a23 a21 a22
    a31 a32 a33 a31 a32
    */
    int d1=(a11*a22*a33)+(a12*a23*a31)+(a13*a21*a32);
    int d2=-(a13*a22*a31)-(a11*a23*a32)-(a12*a21*a33);
    return d1+d2;
}
int main()
{
    cout<<"Enter the order of matirx"<<endl;
    int n;
    cin>>n;
    int d;
    if(n==2)
    {
        cout<<two();
    }else{
        cout<<three();
    }
    return 0;
}