#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int si=sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+si);
    cout<<"Array in ascending order is: ";
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<""<<endl;
    cout<<""<<endl;
    sort(arr, arr+si, greater<int>());
    cout<<"Array in desending order is: ";
    for(int e:arr)
    {
        cout<<e<<" ";
    }
}