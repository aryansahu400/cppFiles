#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=n;i>=2;i--)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            //icj
            int ans = factorial(i)/(factorial(j)*factorial((i-j)));
            cout<<ans<<" ";
        }
        cout<<""<<endl;
    }
}