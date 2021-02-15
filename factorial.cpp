#include<iostream>
using namespace std;

void factorial(int n){
	unsigned long result =1;
	for(int i=n;i>=2;i--)
	{
		result*=i;
	}
	cout<<result;
}

int main(){
	int n;
	cin>>n;
	factorial(n);
	return 0;
}