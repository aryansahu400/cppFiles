#include <bits/stdc++.h>
using namespace std;

char decoder(vector<int> v){
    int iterator=v.begin();
    char arr[]={a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p}
    start=0;
    end=arr.length()-1;
    while(v.length()--)
    {
        int d=iterator;
        if(d==0)end=((start+end)/2)+1;
        else start=(start+end)/2;
    }
    return v.at(start);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        String s="";
        int n;
        cin>>n;
        while(n--)
        {
            vector<int> v;
            while(4--)
            {
                char c;
                cin>>c;
                if(c=='0'){
                    v.push_back(0);
                }else{
                    v.push_back(1);
                }
                s.append(decoder(v)+"");
            }
            
        }
        cout<<s<<endl;
    }
	
	
	return 0;
}
