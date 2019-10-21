#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(i=0;i<n/2;i++)
	{
		int sum=num[i]+num[n-i-1];
		cout<<sum/10<<" "<<sum%10<<endl;
	}
}
