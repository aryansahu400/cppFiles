#include<iostream>
using namespace std;

int testcase()
{
    int n;
    
    cin>>n;
    int c[n];
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        sum+=c[i];
    }
    cout<<"sum= "<<sum<<endl;
    
    int r=0;
    if(sum==(c[0]*n))
    {
        r=(c[0]*(n/2));
    }
    return r;
    
}
int main()
{
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
            cout<<testcase()<<endl;
        
    }
}