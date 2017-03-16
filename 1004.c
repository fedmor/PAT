#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n ;
	char name_class;
	char str_name[100][11];
	char str_class[100][11];
	int str_grade[100];
	int grade,max_i,min_i,max=0,min=100;
	scanf("%d",&n);
	
	for (int i = 0; i < n;i++)
	{
		scanf("%s",str_name[i]);
		scanf("%s",str_class[i]);
		scanf("%d",&str_grade[i]);
		//printf("%d\n",str_grade[i] );

		if(max<str_grade[i])
			{
				max=str_grade[i];
				max_i=i;
			}
		if(min>str_grade[i])
		{
			min=str_grade[i];
			min_i=i;
		}
	}
	printf("%s %s\n",str_name[max_i],str_class[max_i]);
	printf("%s %s\n",str_name[min_i],str_class[min_i]);
	return 0;
}