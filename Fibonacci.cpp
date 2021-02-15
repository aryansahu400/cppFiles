#include<iostream>
#define ll long long int
using namespace std;
void fi(int n){
	ll a=0;
	ll b=1;
	cout<<"0 "<<"1 ";
	for(int i=2;i<=n;i++)
	{
		ll c;
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
}

int main(){
	int n;
	cin>>n;
	fi(n);
}