#include <iostream>
using namespace std;

int main()
{
	int i,a0,a1,a2,a3;
	for(i=1000;i<10000;i++)
	{
		a3=i/1000;
		a2=(i-a3*1000)/100;
		a1=(i-a3*1000-a2*100)/10;
		a0=i%10;
		if(a0==a3&&a1==a2)
		cout<<i<<endl;
	}
	return 0;
}
