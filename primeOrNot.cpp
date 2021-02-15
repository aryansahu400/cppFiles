#include<iostream>
using namespace std;

int main()
{
	int a;
	bool b=true;
	cin>>a;
		for(int i=2;i<a;i++)
		{
			if(a%i==0)
			{
				b=false;
				break;
			}
		}
		if(b)
		{
			cout<<" is prime";
		}else{
			cout<<" is not prime";
		}


}