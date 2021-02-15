#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int rr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        rr[i]=max;
        cout<<rr[i]<<" ";
    }
    // for(int e:rr)
    // {
    //     cout<<e<<" ";
    // }
    return 0;
}