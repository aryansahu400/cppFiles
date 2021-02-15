#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long n;
    cin>>s>>n;
    long count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            count++;
        }
    }
    count=count*(n/s.length());
    
    // if(s.length()!=1)
    // {  
        for(int i=0;i<n%s.length()-1;i++)
        {
            if(s[i]=='a')
            {
                count++;
            }
        }
        //
        cout<<count<<endl;
}