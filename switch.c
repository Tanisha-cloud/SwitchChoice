#include<stdio.h>

int main()
{
	int choice;
	printf("\nENTER THE (EITHER 1 OR 2) AS A CHOICE: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{
				printf("\nYOU HAVE CHOSEN 1"); 
				break;
			}
			
		case 2:
			{
				printf("\nYOU HAVE CHOSEN 2");
				break;
			}
			
		default: printf("YOU HAVE CHOSEN OTHER THAN 1 AND 2");
	}
	
	return 0;
}


