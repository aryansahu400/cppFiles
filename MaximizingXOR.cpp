#include<iostream>
using namespace std;

int main()
{
    int l,r;
    cin>>l>>r;
    vector<int> v;

    for(int i=l;i<r;i++)
    {
        for(int j=i;j<r;j++)
        {
            v.at(index)=i^j;
            index++;
        }
    }
    cout<<*max_element(v.begin(),v.end())<<endl;
    return 0;
}