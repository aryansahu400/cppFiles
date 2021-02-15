#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long int M=1;
	for(int i=0;i<n;i++)
	{
		int temp;cin>>temp;
		M*=temp;
	}	
	cout<<M<<endl;
	return 0;
}