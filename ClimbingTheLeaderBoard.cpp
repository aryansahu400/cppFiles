#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    vector<int> ranked;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        ranked.insert(i, temp);
    }
    int m;
    cin>>m;
    vector<int> players;
    for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        players.insert(i, temp);
    }

    for(int i=0;i<ranked.size()-1;i++)
    {
        if(ranked.at(i)==ranked.at(i+1))
        {
            ranked.erase(i+1);
        }
    }
    cout<<"hi"<<endl;
}