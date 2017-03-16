#include "stdio.h"
#include "math.h"
int is_prime(int n );

int main(int argc, char const *argv[])
{
	int m ,count=0;
	scanf("%d",&m);
	for (int i = m; i >2; i--)
	{
		if(is_prime(i)==1)
		{
			if(is_prime(i-2)==1)count++;
		}
		//printf("%d", i);
	}
	printf("%d\n",count);
	return 0;
}

int is_prime(int n)
{	
		
		if(n!=1){
					if(n==2)return 1 ;
					if(n%2==0)return 0;
					int sqrtn = (int) sqrt((double)n);
					int k=1;
					for (int i = 3; i <= sqrtn; i+=2)
					{
						if (n%i==0)
						{
							k=0;
						}
					}
					return k ;
				}
		
		
		
	return 0;
}