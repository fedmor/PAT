#include "stdio.h"
#include "string.h"

int main(int argc, char const *argv[])
{
	int n,move,isFrist=1,ect=0;
	int number[100]={0};
	scanf("%d",&n);
	scanf("%d",&move);
	move=move%n;
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&number[i]);

	}
	if (n!=1&&move!=0)
	{
		for (int i = (n - move); i < n; i++)
	{
		if (isFrist)	
		{
			printf("%d",number[i]);
			isFrist=0;
		}
		else printf(" %d",number[i]);
	}
	for (int i = 0; i < (n - move); i++)printf(" %d",number[i]);
	
	}
	else 
	{
		for (int i = 0; i < n; i++)
		{
			if (isFrist)
			{
				printf("%d",number[i]);
				isFrist=0;
			}
			else printf(" %d",number[i]);
		}
	}
	printf("\n");

	return 0;
}