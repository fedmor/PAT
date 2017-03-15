#include "stdio.h"

int main(int argc, char const *argv[])
{
	int number[1000];
	int count=0,isFirst=1; 
	while(1)
	{
		scanf("%d",&number[count]);
		if(count%2)
		{
			if(number[count]==0)break;
		}
		count++;
	}
	if(number[1]==0)printf("0 0\n");
	else
	{
		for (int i = 0; i <=(count-2); i+=2)
		{
			if (isFirst)
			{
				printf("%d %d",(number[i]*number[i+1]),(number[i+1]-1));
				isFirst=0;
			}
			else
			printf(" %d %d",number[i]*number[i+1],number[i+1]-1);
		}
		printf("\n");
	}

	return 0;
}