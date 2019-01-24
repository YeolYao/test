#include <iostream>
using namespace std;
const int MAXSIZE=1000;

int main()
{
	int n,s[MAXSIZE],a,i;
	cin>>n;
	for(i=1;i<=n;i++)
	    cin>>s[i];
	cin>>a;
	for(i=1;i<=n;i++)
		if(s[i]==a)
		{
			cout<<i;
			break;
		}
	if(i>n)
	    cout<<"-1";
	return 0;	
}
