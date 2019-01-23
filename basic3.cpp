#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,j,k;
    scanf("%d %d",&n,&m);
	if(n>=1&&m<=26)
    for(j=0;j<n;j++)
    {
	for(k=0;k<m;k++)
	printf("%c",65+abs(j-k));
	printf("\n");
	}
	return 0;
}
