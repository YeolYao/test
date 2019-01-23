#include <iostream>
using namespace std;

int main()
{
    int s=0,n=0,f1=1,f2=1,f3=1;
    cin>>n;
    if(n>2)
    for(s=3;s<=n;s++)
    {
        f3=(f2+f1)%10007;
        f1=f2;
        f2=f3;
    }
    cout<<f3;
    return 0;
}
 	/*
	fn%10007=?
	fn=fn-1+fn-2;
	f1=1;
	f2=1;
	f3=2;
	f4=3;
	f5=5;
	f6=8;
	f7=13;
	f8=21;
	*/
