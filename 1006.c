#include "stdio.h"

int main(int argc, char const *argv[])
{
	int n ,num_B,num_S;
	scanf("%d",&n);
	num_B=n/100;
	num_S=(n%100)/10;
	n=n%10;
	while(num_B--)printf("B");
	while(num_S--)printf("S");
	for (int i = 1; i <=n; i++)
	{
		printf("%d",i );
	}
	printf("\n");


	return 0;
}