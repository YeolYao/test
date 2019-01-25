#include <iostream>
using namespace std;
const int MAXSIZE=200;

int main()
{
	int n,i,j,s,a[MAXSIZE];
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	i=n+1;  
	while(i--)
	for(j=1;j<i;j++)
	{
		if(a[j]>a[j+1])
		{
			s=a[j+1];
			a[j+1]=a[j];
			a[j]=s;
		}
	}
	for(i=1;i<=n;i++)
	cout<<a[i]<<" ";
	return 0;
}
