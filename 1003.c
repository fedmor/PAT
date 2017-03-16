#include "stdio.h"
#include "string.h"
int main()
{
	/* code */
int n;
char str[100];
scanf( "%d", &n );
if(n<10){
while(n--){
	scanf( "%s" , str);
	int count_A_left=0,count_A_right=0,count_A_mid=0,count_P=0,count_T=0;
	for (int i = 0; i < strlen(str); i++)
	 {
	 	if (str[i]=='P')
	 		{
	 			count_P++;
	 			
	 		}
	 	if (str[i]=='A')
	 		{

	 			if(count_P==0&&count_T==0)count_A_right++;
	 			if(count_P==1&&count_T==0)count_A_mid++;
	 			if(count_P==1&&count_T==1)count_A_left++;
	 		}
	 	if (str[i]=='T')
	 		{
	 			count_T++;
	 			
	 		}
	 }
	 if((count_T+count_A_left+count_A_mid+count_A_right+count_P)==strlen(str))
	 {
	 	if(count_T==1 && count_P==1&&count_A_mid!=0)
	 	{
	 		if(count_A_mid==1){
	 			if(count_A_right==count_A_left)printf("YES\n");
	 			else printf("NO\n");
	 		}
	 		else 
	 		{
	 			if((count_A_left)==(count_A_right*count_A_mid))printf("YES\n");
	 			
	 			else printf("NO\n");
	 		}

	 	}
	 	else printf("NO\n");

	 } 
	 else printf("NO\n");
	 //printf("%d\n",sum);
	// printf("%d %d %d\n", count_A_left,count_A_right,count_A_mid);
}
}

//printf("%s\n","hello,word" );
return 0;
}