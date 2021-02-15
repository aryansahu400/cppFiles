#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int sum=0;
	int n;
	cin>>n;
	int temp=n;
	while(temp>0)
	{
		int lastdigit=temp%10;
		sum+=lastdigit*lastdigit*lastdigit
;
		temp=temp/10;
	}
	cout<<"\n";
	if(sum==n)
	{
		cout<<"The given number is Armstrong";
	}
	else
	{
		cout<<"The given number is not Armstrong";
	}
	return 0;
}