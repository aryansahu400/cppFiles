
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<int> >v;
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        int now;
        cin>>now;
        for(int j=0;j<now;j++)
        {
            int t;
            cin>>t;
            temp.push_back(t);
        }
        v.push_back(temp);
    }
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        
        cout<<v[a][b]<<endl;
    }
       
    return 0;
}