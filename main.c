#include <stdio.h>
#include <stdlib.h> 

void main()
{
	int i,j,k,n,choice;
	k=0;
	int input_valid;
	char s[100];
	char a[4][4];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			a[i][j]='\0';
	}

	printf("input string:input 1 \n get string from file:input 2\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		input_valid=1;
		scanf("%s",&s);
		for(i=j=0;s[i];i++)
   		{
       			if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
			{
				if(j==0)
					s[j++]=s[i];
				else
				{
					int m,en;
					en=0;
					for(m=0;m<j;m++)
					{
						if(s[i]==s[m])
						{
							en=1;
							break;
						}
					}
					if(en==0)
            					s[j++]=s[i];
				}
			}
   		}
		n=j;
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				if(k<n)
					a[i][j]=s[k];
				//printf(" %c ",a[i][j]);
				k++;
			}
		}
	}
	else if(choice==2)
	{
		input_valid=1;
	}
	else
	{
		input_valid=0;
		printf("invalid \n");
	}

	if(input_valid==1)
	{
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%c ",a[i][j]);
			}
			printf("\n");
		}
	}	
}
