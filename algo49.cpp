#include <iostream>
using namespace std;
int main()
{
	int a[100],i,n,max=0,j;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			j=i;
		}
	}
	cout<<max<<" "<<j;
	return 0;
}
