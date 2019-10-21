#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>num[i][j];
		}
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i==n-1||i==0||j==n-1||j==0)||i==j||(j==n-i-1))
			{
				cout<<num[i][j]<<" "<<sum<<endl;
				sum=sum+num[i][j];
				num[i][j]=-1;
			}
		}
	}
	cout<<sum<<endl;
}
