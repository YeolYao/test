#include <iostream>
using namespace std;
const int MAXSIZE=34;

int main()
{
	int n,i,j,a[MAXSIZE][MAXSIZE]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
		for(j=0;j<=i;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
