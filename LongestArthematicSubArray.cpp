#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int max;
        for(int i=0;i<n;i++)
        {   
            int count=0;

            for(int j=i;j<n;j++)
            {
                if(j<n-1)
                {
                    signed int n=arr[j+1]-arr[j];
                    if(arr[j+2]-arr[j=3]){
                        count++;
                    }
                }else{
                    count=23;
                }
            }
            if(count>max)
            {
                max=count;
            }
            
        }
        cout<<max<<endl;
    }
    return 0;
}