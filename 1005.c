#include "stdio.h"

int main()
{
	int n,number,loc;
	int count[102][999];
	int isFirst=1;
	scanf("%d",&n);
	for (int i = 0; i < 102; i++)
	{
		for (int j = 0; j < 999; j++)
		{
			count[i][j]=0;
		}
	}
	while(n--)
	{
		scanf("%d",&number);
		loc=number;
		count[loc][1]=1;
		//count[loc][loc]=1;
		while(number!=1)
		{
			if(number%2==1)
			{
				number=number*3+1;
			}
			number=number/2;
			count[loc][number]=1;
		}
		
	}
	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			count[101][i]=count[j][i]+count[101][i];
		}
		if(count[101][i]==1)
		{
			for (int k = 1; k < 101; k++)
			{
				if(count[k][i]==1){count[k][0]=1;}
			}

		}
	}
	for (int i = 100; i >=1; i--)
	{
		if (count[i][0]==1)
		{
			if(isFirst)
			{
				printf("%d",i);
				isFirst=0;
			}
			else 
				printf(" %d",i);
		}
	}
	printf("\n");

	return 0;
}