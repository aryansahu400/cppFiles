#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the size of the array";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements f the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //last_Itrator
    int last=sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+last);

    //sorted array
    sort(vect.begin(), vect.end());
    cout<<"Sorted Array: ";
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    cout<<endl;

    //desending order

    sort(arr, arr+last, greater<int>());
    cout<<"Decending Sorted Array: ";
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    cout<<endl;

    //max element
    // int* m=
    int* i1; 
    i1 = max_element(vect.begin(), vect.end());
    cout<<"Max element: "<<char(*i1)<<endl;
    cout<<endl;
    cout<<endl;


    return 0;
}