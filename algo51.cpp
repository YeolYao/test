#include<stdio.h>
#define M 50000
int num[100000]={0};
void isprime()
{
    num[0]=num[1]=1;
    int i,j;
    for(i=2;i<=1000;i++)
    {
        if(!num[i])
        for(j=i*i;j<=1000;j+=i)
            num[j]=1;
	}   
}
int main()
{
    int n;
    scanf("%d",&n);
    isprime();
    int sum=1,cnt=0,i;
    for(i=2;i<=100000;i++)
    {
        if(!num[i]&&cnt<n)
		{
		   cnt++;
           sum=sum%M*i%M;
        }
        if(cnt>=n)
            break;
    }
    printf("%d\n",sum);
    return 0;
}

