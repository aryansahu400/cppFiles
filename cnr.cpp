#include<iostream>
#define ll long long int
using namespace std;

ll factorial(int n)
{
    ll fact=1;
    for(int i=n;i>=2;i--)
    {
        fact*=i;
    }
    return fact;
}
int main(){
    int n, r;
    cin>>n>>r;
    ll ans=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<ans<<endl;
    return 0;
}