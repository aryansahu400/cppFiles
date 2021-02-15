#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long> arr;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.insert(i, temp);
    }
    vector <long long> v;
    long long k=0;
        for(int i=0;i<arr.length();i++)
        {
            long long maxl=-1; 
            for(int j=i+1;j<arr.length();j++)
            {
                if(i==arr.length()-1)
                {
                    continue;
                }
               if(arr[i]<arr[j])
               {
                  maxl=arr[j];
                  break;
               }
            }
            v.insert(k, maxl);
            k++;
        }
        return v;

}