#include<bits/stdc++.h>
using namespace std;

bool pal(int n)
{
    int temp=n;
    int reverse=0;
    while(n>0)
    {
        int last=n%10;
        reverse=(reverse*10)+last;
        n=n/10;
    }
    if(reverse==temp)
    {
        return true;
    }else{
        return false;
    }
}
bool prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool a=pal(n);
        bool b=prime(n);
        if(a && b)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}