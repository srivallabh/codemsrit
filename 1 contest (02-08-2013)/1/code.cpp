#include <iostream>
#include <stdio.h>
#define ll long long int
using namespace std;
int main()
{

	int t,n;
	cin>>t;
	// you can get max of 92 fibonacci numbers, after that it will cause overflow in long long int
	ll a[100];
	a[0]=1;
	a[1]=1;
	for(int i=2;i<100;i++)
	a[i]=a[i-1]+a[i-2];
	while(t--)
	{
		cin>>n;
		cout<<a[n-1]<<endl;//output nth fibonacci number
	}

	return 0;
}
