#include<bits/stdc++.h>
using namespace std;
void formal(int *arr,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    formal(arr,n);
}