#include<windows.h>
#include <stdio.h>
#include <conio.h>
void show3(int,char);
void show4(int,char);
void gotoxy(int x, int y)
{COORD c;
c.X = x;
c.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int noebazi()
{ int no;
	printf("1. 3*3\n");
	printf("2. 4*4\n");
	printf("SELECT >>> ");
	scanf("%d",&no);
	return(no);
}
void selectpoint4(int t)
{static int width=18;
width=1+width;
gotoxy(8,width);
printf("SELECT (player %d) >>> ",t);		
}
void selectpoint3(int t)
{
static int width=15;
width=1+width;
gotoxy(8,width);
printf("SELECT (player %d) >>> ",t);		
}
void menu()
{
printf("1.start new game\n");
printf("2.guide\n");
printf("3.about us\n");
printf("4.exit\n\n");
printf("select >>> ");
}
int winner4(char chr[][4])
{
int i;
if(chr[0][0]==chr[1][1]&&chr[1][1]==chr[2][2]&&chr[2][2]==chr[3][3]) return 1;
if(chr[0][3]==chr[1][2]&&chr[1][2]==chr[2][1]&&chr[2][1]==chr[3][0]) return 1;
for(i=0; i<4; i++) 
{ 
if(chr[i][0]==chr[i][1]&&chr[i][1]==chr[i][2]&&chr[i][2]==chr[i][3]) return 1;
if(chr[0][i]==chr[1][i]&&chr[1][i]==chr[2][i]&&chr[2][i]==chr[3][i]) return 1;
 }		
}
int winner3(char ch [][3])
{
int i;
if(ch[0][0]==ch[1][1]&&ch[1][1]==ch[2][2]) return 1;
else if(ch[0][2]==ch[1][1]&&ch[1][1]==ch[2][0]) return 1;
for(i=0; i<3; i++) 
{ 
if(ch[i][0]==ch[i][1]&&ch[i][1]==ch[i][2]) return 1;
 else if(ch[0][i]==ch[1][i]&&ch[1][i]==ch[2][i]) return 1; }		
}
void game4()
{int end=1,turn=1,place,win,after=0,i,j;

char chr[4][4] = {{ '1','2','3','4' },{ '5','6','7','8' },{ '9','a','b','c' },{'d','f','g','h'},};
 system("cls");
 
    printf("\t-------------------------------------\t\n");
	printf("\t|1       |2       |3       |4	    |\t\n");
	printf("\t|        |        |        |	    |\t\n");
	printf("\t|        |        |        |	    |\t\n");
	printf("\t-------------------------------------\t\n");
    printf("\t|5       |6       |7       |8	    |\t\n");
	printf("\t|        |        |        |	    |\t\n");
	printf("\t|        |        |        |        |\t\n");
	printf("\t-------------------------------------\t\n");
	printf("\t|9       |10      |11      |12      |\t\n");
	printf("\t|        |        |        |        |\t\n");
	printf("\t|        |        |        |        |\t\n");
	printf("\t-------------------------------------\t\n");
    printf("\t|13      |14      |15      |16      |\t\n");
	printf("\t|        |        |        |        |\t\n");
	printf("\t|        |        |        |        |\t\n");
	printf("\t-------------------------------------\t\n");
while(end<=16)	
{
selectpoint4(turn);	
scanf("%d",&place);
	if(turn==1)
	 	{
	 		if(place==1)
				{
				  chr[0][0]='X';
				  show4(place,'X');
				}
			if(place==2)
				{
				  chr[0][1]='X';
				  show4(place,'X');	
				}
			if(place==3)
				{
				  chr[0][2]='X';	
				  show4(place,'X');
					}
			if(place==4)
				{ 
				  chr[0][3]='X';
				  show4(place,'X');	
				}
			if(place==5)
				{
				  chr[1][0]='X';
				  show4(place,'X');	
				}
			if(place==6)
				{
				  chr[1][1]='X';
				  show4(place,'X');	
				}
			if(place==7)
				{
				  chr[1][2]='X';
				  show4(place,'X');	
				}
			if(place==8)
				{
				  chr[1][3]='X';
				  show4(place,'X');	
				}
			if(place==9)
				{
				  chr[2][0]='X';
				  show4(place,'X');	
				}
			if(place==10)
				{
				  chr[2][1]='X';
				  show4(place,'X');
				}
			if(place==11)
				{
				  chr[2][2]='X';
				  show4(place,'X');	
				}
			if(place==12)
				{
				  chr[2][3]='X';	
				  show4(place,'X');
				}
			if(place==13)
				{
				  chr[3][0]='X';
				  show4(place,'X');	
				}
			if(place==14)
				{
				  chr[3][1]='X';
				  show4(place,'X');
				}
			if(place==15)
				{
				  chr[3][2]='X';
				  show4(place,'X');	
				}
			if(place==16)
				{
				  chr[3][3]='X';
				  show4(place,'X');	
				}
			end++;
		}
	if(turn==2)
		{
	 		if(place==1)
				{
				  chr[0][0]='O';
				  show4(place,'O');
				}
			if(place==2)
				{
				  chr[0][1]='O';
				  show4(place,'O');	
				}
			if(place==3)
				{
				  chr[0][2]='O';	
				  show4(place,'O');
					}
			if(place==4)
				{ 
				  chr[0][3]='O';
				  show4(place,'O');	
				}
			if(place==5)
				{
				  chr[1][0]='O';
				  show4(place,'O');	
				}
			if(place==6)
				{
				  chr[1][1]='O';
				  show4(place,'O');	
				}
			if(place==7)
				{
				  chr[1][2]='O';
				  show4(place,'O');	
				}
			if(place==8)
				{
				  chr[1][3]='O';
				  show4(place,'O');	
				}
			if(place==9)
				{
				  chr[2][0]='O';
				  show4(place,'O');	
				}
			if(place==10)
				{
				  chr[2][1]='O';
				  show4(place,'O');
				}
			if(place==11)
				{
				  chr[2][2]='O';
				  show4(place,'O');	
				}
			if(place==12)
				{
				  chr[2][3]='O';	
				  show4(place,'O');
				}
			if(place==13)
				{
				  chr[3][0]='O';
				  show4(place,'O');	
				}
			if(place==14)
				{
				  chr[3][1]='O';
				  show4(place,'O');
				}
			if(place==15)
				{
				  chr[3][2]='O';
				  show4(place,'O');	
				}
			if(place==16)
				{
				  chr[3][3]='O';
				  show4(place,'O');	
				}	
			end++;
			turn--;		
		}
	else turn++;
	after++;	
win=winner4(chr);
if(after>=7)
{
	win=winner4(chr);

		if(win==1)
		{
		if(turn==2){
		gotoxy(8,17);
		printf("player %d is winner",turn-1);}
		else if(turn==1){
		gotoxy(8,17);
		printf("player %d is winner",turn+1);}	
		break;
		}		
}}	

if(win!=1)
{
	gotoxy(8,17);	
	printf("no winner");	
}}

void show4(int seat,char m)
{
if(seat==1)
{
gotoxy(12,2);
printf("%c",m);
}
if (seat==2)
{
gotoxy(21,2);	
printf("%c",m);
}
if (seat==3)
{
gotoxy(30,2);	
printf("%c",m);	
}
if(seat==4)
{
gotoxy(39,2);
printf("%c",m);	
}
if(seat==5)
{
gotoxy(12,6);
printf("%c",m);	
}
if(seat==6)
{
gotoxy(21,6);
printf("%c",m);	
}
if(seat==7)
{
gotoxy(30,6);
printf("%c",m);	
}
if(seat==8)
{
gotoxy(39,6);
printf("%c",m);	
}
if(seat==9)
{
gotoxy(12,10);
printf("%c",m);	
}	
if(seat==10)
{
gotoxy(21,10);
printf("%c",m);
}
if (seat==11)
{
gotoxy(30,10);	
printf("%c",m);
}
if (seat==12)
{
gotoxy(39,10);	
printf("%c",m);	
}
if(seat==13)
{
gotoxy(12,14);
printf("%c",m);	
}
if(seat==14)
{
gotoxy(21,14);
printf("%c",m);	
}
if(seat==15)
{
gotoxy(30,14);
printf("%c",m);	
}
if(seat==16)
{
gotoxy(39,14);
printf("%c",m);	
}
}
void game3()
{ 
system("cls");
int end=1,turn=1,place,win,back,i,j;
char ch[3][3];
    printf("\t-------------------------\t\n");
	printf("\t|1      |2      |3      |\t\n");
	printf("\t|       |       |       |\t\n");
	printf("\t|       |       |       |\t\n");
	printf("\t-------------------------\t\n");
	printf("\t|4      |5      |6      |\t\n");
	printf("\t|       |       |       |\t\n");
	printf("\t|       |       |       |\t\n");
	printf("\t-------------------------\t\n");
	printf("\t|7      |8      |9      |\t\n");
	printf("\t|       |       |       |\t\n");
	printf("\t|       |       |       |\t\n");
	printf("\t-------------------------\t\n");
while(end<=9)
{ 
selectpoint3(turn);
scanf("%d",&place);
	if(turn==1)	
		{ 
			if(place==1)
					{
					  ch[0][0]='X';
					  show3(place,'X');
					}
			if(place==2)
					{
					  ch[0][1]='X';
					  show3(place,'X');	
					}
			if(place==3)
					{
					  ch[0][2]='X';	
					  show3(place,'X');
					}
			if(place==4)
					{ 
					  ch[1][0]='X';
					  show3(place,'X');	
					}
			if(place==5)
					{
					  ch[1][1]='X';
					  show3(place,'X');	
					}
			if(place==6)
					{
					  ch[1][2]='X';
					  show3(place,'X');	
					}
			if(place==7)
					{
					  ch[2][0]='X';
					  show3(place,'X');	
					}
			if(place==8)
					{
					  ch[2][1]='X';
					  show3(place,'X');	
					}
			if(place==9)
					{
					  ch[2][2]='X';
					  show3(place,'X');	
					}
			end++;
		}		
	if(turn==2)
		{
			if(place==1)
					{
					  ch[0][0]='O';
					  show3(place,'O');
					}
			if(place==2)
					{
					  ch[0][1]='O';
					  show3(place,'O');	
					}
			if(place==3)
					{
					  ch[0][2]='O';	
					  show3(place,'O');
					}
			if(place==4)
					{ 
					  ch[1][0]='O';
					  show3(place,'O');	
					}
			if(place==5)
					{
					  ch[1][1]='O';
					  show3(place,'O');	
					}
			if(place==6)
					{
					  ch[1][2]='O';
					  show3(place,'O');	
					}
			if(place==7)
					{
					  ch[2][0]='O';
					  show3(place,'O');	
					}
			if(place==8)
					{
					  ch[2][1]='O';
					  show3(place,'O');	
					}
			if(place==9)
					{
					  ch[2][2]='O';
					  show3(place,'O');	
					}
			turn--;	
			end++;
		}
	else turn++;
	win=winner3(ch);
		if(win==1)
	{
		if(turn==2){
		gotoxy(8,14);
		printf("player %d is winner",turn-1);}
		else if(turn==1){
		gotoxy(8,14);
		printf("player %d is winner",turn+1);}	
		break;		
	}
}
if(win!=1)
{
	gotoxy(8,14);
	printf("no winner");	
}}
void show3(int seat,char m)
{
if(seat==1)
{
gotoxy(12,2);
printf("%c",m);
}
if (seat==2)
{
gotoxy(20,2);	
printf("%c",m);
}
if (seat==3)
{
gotoxy(28,2);	
printf("%c",m);	
}
if(seat==4)
{
gotoxy(12,6);
printf("%c",m);	
}
if(seat==5)
{
gotoxy(20,6);
printf("%c",m);	
}
if(seat==6)
{
gotoxy(28,6);
printf("%c",m);	
}
if(seat==7)
{
gotoxy(12,10);
printf("%c",m);	
}
if(seat==8)
{
gotoxy(20,10);
printf("%c",m);	
}
if(seat==9)
{
gotoxy(28,10);
printf("%c",m);	
}	
}
 void example()
 {
 	printf("-------------\t\t-------------\t\t-------------\n");
 	printf("| X |   |   |\t\t|   | X |   |\t\t|   |   |   |\n");
 	printf("-------------\t\t-------------\t\t-------------\n");
 	printf("|   | X |   |\t\t|   | X |   |\t\t| X | X | X |\n");
 	printf("-------------\t\t-------------\t\t-------------\n");
 	printf("|   |   | X |\t\t|   | X |   |\t\t|   |   |   |\n");
 	printf("-------------\t\t-------------\t\t-------------\n");	
 }
 int main()
 {
 	int me,noe;
 	system("cls");
 	menu();
 	int num;
 	scanf("%d",&num);
 	switch(num)
 	{
 	case 1:
 	system("cls");
 	noe=noebazi();
 	if(noe==1)
	 game3();
	if(noe==2)
	game4();
	 break;
	 case 2:	
	 system("cls");
	 printf("In order to win the game,a players must place three of their marks in a horizontal,vertical,or diagonal row.\n");	
	 printf("which player done sooner,will be the winner.\n");
	 printf("forexample:\n\n");
	 example();
 	 break;	
 	 case 3:
 	 system("cls");
 	 printf("we hope you enjoy our game :D \n");
 	 printf("if you have question , idea or critic , contact us:544545");
	 break;	
	 case 4:
	system("cls");
	printf("SEE YOU LATER!");
	exit(0);
	 default:
	  main();		
	}		
 	gotoxy(0,40);
 	printf("1.back to menu >>> ");
 	scanf("%d",&me);
 	main();
 	getch();
 }
