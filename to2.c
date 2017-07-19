#include <stdio.h>

int main(void) 
{
	int ft,i,j,flag=0,k;
	scanf("%d",&ft);
	scanf("%d",&k);
	int a[ft];
	for(i=0;i<ft;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<ft-1;i++)
	{
		for(j=i+1;j<ft;j++)
		{
			if(a[i]+a[j]==k)
			{
				printf("%d %d",a[i],a[j]);
				printf("\n");
				printf("%d",a[i]+a[j]);
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("not target");
	}
	return 0;
}
