#include <stdio.h>
int main()
{
	int turn=1;
	char game[] = {'_', '_', '_', '_', '_', '_', '_', '_', '_'};
	int pos;

	while(turn<10)
	{
		if(turn%2==0)
		{
			printf("\n");
			printf("\nPlayer 1 Enter your position =>");
			scanf("%d", &pos);

			game[pos - 1] = 'X';
		}
		else
		{
			printf("\n");
			printf("\nPlayer 2 Enter your position =>");
			scanf("%d", &pos);

			game[pos - 1] = '0';
		}
		printf("\nAfter %d turn", turn);
		printf("\n%c\t%c\t%c", game[0], game[1], game[2]);
		printf("\n%c\t%c\t%c", game[3], game[4], game[5]);
		printf("\n%c\t%c\t%c", game[6], game[7], game[8]);

        //* For player 1 //*
		if(game[0] == game[1] && game[0]==game[2] && game[0]=='X')
		{
			printf("\nPlayer 1 is winner ");
				turn = 15;
		}
		else if(game[3] == game[4] && game[3]==game[5] && game[3]=='X')
		{
			printf("\nPlayer 1 is winner ");
				turn = 15;
		}
		else if(game[6] == game[7] && game[6]==game[8] && game[6]=='X')
		{
			printf("\nPlayer 1 is winner ");
				turn = 15;
		}
		else if(game[0] == game[3] && game[0]==game[6] && game[0]=='X')
		{
			printf("\nPlayer 1 is winner ");
				turn = 15;
		}
		else if(game[1] == game[4] && game[1]==game[7] && game[1]=='X')
		{
			printf("\nPlayer 1 is winner ");
				turn = 15;
		}
		else if(game[2] == game[5] && game[2]==game[8] && game[2]=='X')
		{
			printf("\nPlayer 1 is winner ");
				turn = 15;
		}
		else if(game[0] == game[4] && game[0]==game[8] && game[0]=='X')
		{
			printf("\nPlayer 1 is winner ");
				turn = 15;
		}
		else if(game[2] == game[4] && game[2]==game[6] && game[2]=='X')
		{
			printf("\nPlayer 1 is winner ");
				turn = 15;
		}

		//* For player 2 //*
		if (game[0] == game[1] && game[0] == game[2] && game[0] == '0')
		{
			printf("\nPlayer 2 is winner ");
				turn = 15;
		}
		else if(game[3] == game[4] && game[3]==game[5] && game[3]=='0')
		{
			printf("\nPlayer 2 is winner ");
				turn = 15;
		}
			else if(game[6] == game[7] && game[6]==game[8] && game[6]=='0')
		{
			printf("\nPlayer 2 is winner ");
				turn = 15;
		}
			else if(game[0] == game[3] && game[0]==game[6] && game[0]=='0')
		{
			printf("\nPlayer 2 is winner ");
				turn = 15;
		}
			else if(game[1] == game[4] && game[1]==game[7] && game[1]=='0')
		{
			printf("\nPlayer 2 is winner ");
				turn = 15;
		}
			else if(game[2] == game[5] && game[2]==game[8] && game[2]=='0')
		{
			printf("\nPlayer 2 is winner ");
				turn = 15;
		}
			else if(game[0] == game[4] && game[0]==game[8] && game[0]=='0')
		{
			printf("\nPlayer 2 is winner ");
				turn = 15;
		}
			else if(game[2] == game[4] && game[2]==game[6] && game[2]=='0')
		{
			printf("\nPlayer 2 is winner ");
				turn = 15;
		}

		turn++;
	}
	//* Tie condition //*
	if(turn==10)
	{
		printf("\nThe game is tie , have fun playing it again !!");
	}
}