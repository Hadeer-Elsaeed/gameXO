#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	int j;
	clrscr();
   //	gotoxy(20,10);

	for(i=10;i<26;i=+4)
	{
		for(j=20;j<=60;j++)
		{
			gotoxy(j,i);
			printf("-");
		}
	}

   for(i=20;i<60;i+=10)
	{
		for(j=10;j<=26;j++)
		{
			gotoxy(i,j);
			printf("|");
		}
	}

getch();
return 0;
}