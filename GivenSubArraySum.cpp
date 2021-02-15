#include<bits/stdc++.h>
using namespace std;

int mm()
{
	int n, s;
	    int first=0;
	    int last=0;
	    cin>>n>>s;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
			bool b=false;
	        int sum=0;
	        for(int j=i;j<n;j++)
	        {
	            sum+=arr[j];
	            
	            // cout<<i<<" "<<j<<" "<<sum<<endl;
				if(sum==s)
				{
					cout<<i+1<<" "<<j+1<<endl;
					return 0;
				}
	        }
		}
		cout<<"-1"<<endl;
		return 0;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    mm();
	}
	return 0;
}