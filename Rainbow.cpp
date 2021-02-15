#include <iostream>
using namespace std;

int main() {
	short t;
	cin>>t;
	int temp=1;
	while(temp<=t)
	{
	    bool rainbow=true;
	    short n;
	    cin>>n;
	    short arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    if(n%2==0)
	    {
	        rainbow=false;
	    }
	    else
	    {
	        int mid=n/2;
	        for(int i=1;i<=mid;i++)
	        {
	            if(arr[mid-i]==arr[mid+i])
	            {
	                continue;
	            }else{
	                rainbow=false;
	                break;
	            }
	        }
	    }
	    for(int i=1;i<n-1;i++)
	    {
	        if(i<=n/2)
	        {
	            if(arr[i]!=arr[i-1] && arr[i]!=arr[i-1]+1)
	            {
	                rainbow=false;
	                break;
	            }
	        }else if(i>n+1){
	            if(arr[i]!=arr[i-1] && arr[i]!=arr[i-1]-1)
	            {
	                rainbow=false;
	                break;
	            }
	        }
	    }
	    if(rainbow)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	    temp++;
	}
	return 0;
}
