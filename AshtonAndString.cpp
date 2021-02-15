#include<bits/stdc++.h>
using namespace std;

char cha(string s, int k)
{
    // int len=s.length();
    // char c[len];
    // string fina;
    
    // for(int i=0;i<len;i++)
    // {
    //     c[i]=s[i];
    // }
    // int lastit=sizeof(c)/sizeof(c[0]);
    // sort(c, c+lastit);
    // // for(char e:c)
    // // {
    // //     cout<<e<<" ";
    // // }
    // cout<<endl;
    return '*';
}
int main()
{
    int t;
    while(t--)
    {
        string s;
        cin>>s;
        int k;
        cin>>k;
        // cout<<cha(s, k)<<endl;
        int len=s.length();
        char c[len];
        string fina;
        
        for(int i=0;i<len;i++)
        {
            c[i]=s[i];
        }
        int lastit=sizeof(c)/sizeof(c[0]);
        sort(c, c+lastit);
        for(char e:c)
        {
            cout<<e<<" ";
        }
        cout<<endl;
    }
    
}