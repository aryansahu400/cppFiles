#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    vector<long> h;
	    
	    for(int i=0;i<n;i++)
	    {
	        int temp;
	        cin>>temp;
	        h.push_back(temp);
	    }
	    sort(h.begin(),h.end());
	    int count=0;
	    long height1=0;
	    int first=0;
	    for(int i=n-1;i>=0;i--)
	    {
	        count++;
	        height1+=h.at(i);
	        if(height1>=k)
	        {
	            first=i;
	            break;
	        }
	    }
	    int height2=0;
    	for(int i=first-1;i>=0;i--)
    	{
    	    height2+=h.at(i);
    	    count++;
    	    if(height2>=k)
    	    {
    	        break;
    	    }
    	}
	    if(height1>=k && height2>=k)
	    cout<<count<<endl;
	    else cout<<-1<<endl;
	}
	return 0;
}
