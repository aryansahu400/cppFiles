#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
        int no=n,mo=m;
	    vector<int> apna;
	    vector<int> paraya;
	    int asum=0;
	    int psum=0;
	    for(int i=0;i<n;i++)
	    {
	        int temp;
	        cin>>temp;
	        apna.push_back(temp);
	       // asum=asum+temp;
	    }
	    for(int i=0;i<m;i++)
	    {
	        int temp;
	        cin>>temp;
	        paraya.push_back(temp);
	       // psum=psum+temp;
	    }
	    asum=accumulate(apna.begin(), apna.end(),0);
	    psum=accumulate(paraya.begin(), paraya.end(),0);
	    sort(apna.begin(), apna.end());
	    sort(paraya.begin(), paraya.end());
	    n=0;m=m-1; 
	    int count=0;
        if(asum>psum)
        {
            cout<<0<<endl;
            continue;
        }
        bool b=false;
	    while(asum<psum)
	    {
            if(m>=0 && m<mo && n>=0 && n<no)
            { 
                asum=(asum-apna.at(n))+paraya.at(m);
                psum=(psum-paraya.at(m))+apna.at(n);
                
                count++;
                m--;
                n++;
            }else{
                break;
            }
        }
        if(asum<psum)
        {
            cout<<-1<<endl;
        }else
	    cout<<count<<endl;
	    
	}
	return 0;
}
