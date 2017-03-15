#include "stdio.h"

int main(int argc, char const *argv[])
{
	char str[80][80];
	char n;
	int number =0,isFrist=1,loc=0;
	while(1)
	{
		scanf("%c",&n);
		if (n==' ')
			{
				number++;
				loc=0;
				continue;
			}
		if (n=='\n')break;
		str[number][loc]=n;
		loc++;
		
	}
	for (int i = number; i >=0 ; i--)
	{
		if (isFrist)
		{
			printf("%s",str[i]);
			isFrist=0;
		}
		else printf(" %s",str[i]);
	}
	printf("\n");
	return 0;
}