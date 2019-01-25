#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=0&&a<=2147483647) 
	{	
		printf("%X",a);
	}
	return 0;	
}
