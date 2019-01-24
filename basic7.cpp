#include <iostream>
using namespace std;

int main()
{
	int i,a0,a1,a2;
	for(i=100;i<1000;i++)
	{
		a2=i/100;
		a0=i%10;
		a1=(i-a2*100)/10;
		if(i==a0*a0*a0+a1*a1*a1+a2*a2*a2)
		cout<<i<<endl;
	}
	return 0;
}
