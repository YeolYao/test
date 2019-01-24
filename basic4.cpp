#include <iostream>
using namespace std;
const int MAXSIZE=10000;
int main()
{
	int n;
	int max=-MAXSIZE,min=MAXSIZE,sum=0,i,a;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		if(max<a)
		max=a;
		if(min>a)
		min=a;
		sum+=a;
	}
	cout<<max<<endl<<min<<endl<<sum;
	return 0;
}
