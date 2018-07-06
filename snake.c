#include<stdio.h>
int main(int argc, char const *argv[])
{
	srand(time(NULL));
int a[100],b[100],k,chance=1,player1=1,player2=1,i;
for(i=0;i<101;i++)
{
	b[i]=0;
}
b[15]=50,b[99]=2,b[77]=44,b[28]=87,b[41]=91,b[66]=19;
printf("%d\n",b[14]);
while(1)
{

	if(chance%2==0)
	{
		k=rand()%6+1;
		
		if(player2+k<=100)
		{
printf("chance 2st player \t%d\n",k);
		player2=player2+k;
		}printf("player value 2 \t%d\n",player2);
		if(b[player2]!=0)
			player2=b[player2];
		
		if(player2==100)
		{
			printf("second player win\n");
	break;

		}
chance=chance+1;

	}
	else
	

{
		k=rand()%6+1;
		
		if(player1+k<=100)
{printf("chance 1st player \t %d\n",k);
		player1=player1+k;
}		printf("player value 1\t%d\n",player1);
		if(b[player1]!=0)
			player1=b[player1];
	
		if(player1==100)
		{
			printf("first player win\n");
	break;

		}
	chance=chance+1;

	}

	}












	return 0;
}