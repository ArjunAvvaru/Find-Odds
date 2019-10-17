
Skip to content
Using Gmail with screen readers
Conversations
6.12 GB (40%) of 15 GB used
Manage
Terms · Privacy · Program Policies
Last account activity: 1 hour ago
Details

#include<stdio.h>
#include<stdlib.h>

void zerodigits(int i, int*res)
{
	int n,*a,b;
	int count=0;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(int j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	for(int j=0;j<n;j++)
	{	
		int ctr=0;
		do
		{
			b=a[j]%10;
			a[j]=a[j]/10;
			if(b==0)
			{	
				ctr++;
			}
		}
		while(a[j]>=10);			
		if(ctr>0)
		{	
			count++;
		}
		
	}
	res[i]=count;
	
}

main()
{
	int n, *res;
	int i;
	scanf("%d",&n);
	res=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{	
		zerodigits(i,res);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",res[i]);
	}
	return(0);
}

Success7.cpp
Displaying Succ
