 //program to print christmas tree  using C proramming
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
		{
			for(k=i;k<=6;k++)
			{
			 printf(" ");
			}
		   for(j=1;j<=i;j++)
		   {
              printf("* ");
            }
            printf("\n");
        }
    
    	for(i=3;i<=7;i++)
		{
			for(k=i;k<=6;k++)
			{
				printf(" ");
			}
		   for(j=1;j<=i;j++)
		    {
             printf("* ");
            }
             printf("\n");
        }
        	for(i=4;i<=7;i++)
		{
			for(k=i;k<=6;k++)
			{
				printf(" ");
			}
		   for(j=1;j<=i;j++)
		    {
             printf("* ");
            }
             printf("\n");
        }
        
        for(i=1;i<=7;i++)
        {
        	for(k=1;k<=4;k++)
        	printf(" ");
           for(j=1;j<=3;j++)
           {
		   printf("# ");
		   } 
		   printf("\n");	
		}
	return 0;
}
