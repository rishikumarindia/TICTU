#include<conio.h>
#include<stdio.h>
#include<string.h>
int i,j;
char ch='O',reply;
char tictoc[3][3]={'1','2','3',
		   '4','5','6',
		   '7','8','9'};

//display is a function for display the array
void disp()
 {
   textmode(BW80);
   textcolor(RED);
   textbackground(WHITE);
  clrscr();
     printf("\n\t\t\t   ____________________");
     for(i=0;i<3;i++)
      {
	   printf("\n\t\t\t");
	      for(j=0;j<=3;j++)
		 {
		      printf("  |  ");
		      if(j==3)
		      {
		       break;
		      }
		   if(tictoc[i][j]=='X')
		       {
			   textbackground(BLUE);
		       }
	      else if(tictoc[i][j]=='O')
		       {
			   textbackground(CYAN);
		       }
		       else
		       {
			   textbackground(WHITE);
		       }
		       cprintf("%2c",tictoc[i][j]);
		 }
		 printf("\n\t\t\t  |______|______|______|");
      }
 }
 void welcome()

 {
  textbackground(BLACK);
 clrscr();
  //textbackground(BLACK);
  textmode(BW40);
  textcolor(GREEN);
  printf("\n\n\n\t   ");
  cprintf("WELCOME  YOU");
  textcolor(GREEN);
  printf("\n\n\t\t");
  cprintf("TO");
  textcolor(YELLOW);
  printf("\n\n\t     ");
  cprintf("\"TICTOC\"");
  textcolor(WHITE);
  printf("\n\n\t");
  cprintf(" ____________________ ");printf("\n\t");
  cprintf("|   X  |   O  |  O   |");printf("\n\t");
  cprintf("|______|______|______|");printf("\n\t");
  cprintf("|   X  |   X  |  O   |");printf("\n\t");
  cprintf("|______|______|______|");printf("\n\t");
  cprintf("|   X  |   O  |  X   |");printf("\n\t");
  cprintf("|______|______|______|");
  printf("\n\n\n\t");
  textbackground(CYAN);
  textcolor(RED+BLINK);
  cprintf("Enter Any Key To Play");
  textbackground(BLACK);
  textcolor(WHITE);
  printf("\n\n\n\n\n");
  cprintf("By - \"Rishi Kumar Sharma\"");
  getch();
  }
  int thank()
  {
   w:
   textmode(BW40);
   textbackground(BLACK);
   clrscr();
   //textbackground(CYAN);
   textcolor(YELLOW+BLINK);
   printf("\n\n\n\n\n\t   ");
   cprintf("Thanks For Playing");
   printf("\n\n\n\n\tWanna Play Again(Y/N):");
   flushall();
   scanf("%c",&reply);
   if(reply=='Y'||reply=='y')
   {
    return 99;
   }
   else if(reply=='N'||reply=='n')
   {
    textbackground(BLACK);
    clrscr();
    textcolor(RED);
    printf("\n\n\n\n\t");
    cprintf("Hope To See You Again.");
    printf("\n\n\n\n\t");
    cprintf("  Have A Nice Day.");
    printf("\n\n\n");
    printf("\n\t     * * * * *         ");
    printf("\n\t   *            *      ");
    printf("\n\t *    ***  ***   *     ");
    printf("\n\t*      *    *     *    ");
    printf("\n\t*        ||       *    ");
    printf("\n\t*     ********    *    ");
    printf("\n\t *     ******    *     ");
    printf("\n\t  *             *      ");
    printf("\n\t     * * * * *         ");
    return 100;
   }
   else
   {
    goto w;
   }
  }

int check(int x)
{
   int r;
      switch(x)
      {
	      case 1:r=tictoc[0][0]=='X'||tictoc[0][0]=='O'?1:0;break;
	      case 2:r=tictoc[0][1]=='X'||tictoc[0][1]=='O'?1:0;break;
	      case 3:r=tictoc[0][2]=='X'||tictoc[0][2]=='O'?1:0;break;
	      case 4:r=tictoc[1][0]=='X'||tictoc[1][0]=='O'?1:0;break;
	      case 5:r=tictoc[1][1]=='X'||tictoc[1][1]=='O'?1:0;break;
	      case 6:r=tictoc[1][2]=='X'||tictoc[1][2]=='O'?1:0;break;
	      case 7:r=tictoc[2][0]=='X'||tictoc[2][0]=='O'?1:0;break;
	      case 8:r=tictoc[2][1]=='X'||tictoc[2][1]=='O'?1:0;break;
	      case 9:r=tictoc[2][2]=='X'||tictoc[2][2]=='O'?1:0;break;
	}
     return r;
}

void input()
{
 int op,a,b;
 //char d[]=" ";
 printf("\n\n\Enter The Number...: ");
 flushall();
  //scanf("%s",&d);
 scanf("%d",&op);
 b=op;
 if(b<=0||b>=10)
 {
  printf("\n\n Enter the valid Number Shown above");
 getch();
 goto cont;
 }
 else if(b>0&&b<10)
 {
 a=check(op);
 if(a==0)
 {
    if(ch=='O')
    ch='X';
    else
    ch='O';
      switch(op)
      {
	     case 1: tictoc[0][0]=ch;break;
	     case 2: tictoc[0][1]=ch;break;
	      case 3: tictoc[0][2]=ch;break;
	      case 4: tictoc[1][0]=ch;break;
	      case 5: tictoc[1][1]=ch;break;
	      case 6: tictoc[1][2]=ch;break;
	      case 7: tictoc[2][0]=ch;break;
	      case 8: tictoc[2][1]=ch;break;
	      case 9: tictoc[2][2]=ch;break;
      }
 }
 else
 {
    printf("\n\n This position is already marked");
    getch();
 }
 }
/* else
 {
 printf("\n\n Please don't use character ");
 getch();
 }*/
 cont:
}
  int win()

  {
    if(tictoc[0][0]==tictoc[0][1] && tictoc[0][0]==tictoc[0][2])
    return 1;
    else if(tictoc[1][0]==tictoc[1][1] && tictoc[1][0]==tictoc[1][2])
    return 1;
    else if(tictoc[2][0]==tictoc[2][1] && tictoc[2][0]==tictoc[2][2])
    return 1;
    else if(tictoc[0][0]==tictoc[1][0] && tictoc[0][0]==tictoc[2][0])
    return 1;
    else if(tictoc[0][1]==tictoc[1][1] && tictoc[0][1]==tictoc[2][1])
    return 1;
    else if(tictoc[0][2]==tictoc[1][2] && tictoc[0][2]==tictoc[2][2])
    return 1;
    else if(tictoc[0][0]==tictoc[1][1] && tictoc[0][0]==tictoc[2][2])
    return 1;
    else if(tictoc[0][2]==tictoc[1][1] && tictoc[0][2]==tictoc[2][0])
    return 1;
    else
    return 0;
  }

 int call()

  {
    int e=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
		 if(tictoc[i][j]=='X'||tictoc[i][j]=='O')
		 e++;
		}
    return e;
  }

  void reset()
  {

    tictoc[0][0]='1';
    tictoc[0][1]='2';
    tictoc[0][2]='3';
    tictoc[1][0]='4';
    tictoc[1][1]='5';
    tictoc[1][2]='6';
    tictoc[2][0]='7';
    tictoc[2][1]='8';
    tictoc[2][2]='9';
    ch='O';
  }

void main()
{
 int k,p,f,g,r;
 y:
 welcome();
 p=0;
 textcolor(RED);
 textbackground(WHITE);
for(k=1;k<=g;k++)
 {
  disp();
  if(p==1)
  break;
  input();
  f=call();
  if(f==9)
  g=f;
  p=win();
 }

 textcolor(RED);
 textbackground(WHITE);
 //textmode(C80);
 clrscr();
 disp();
 if(p==0)
 {
 printf("\n\n\n\n\t\t\t\t Match Draw...");
 printf("\n\n");
    printf("\n\t\t\t\t     * * * * *         ");
    printf("\n\t\t\t\t   *            *      ");
    printf("\n\t\t\t\t *    ***  ***   *     ");
    printf("\n\t\t\t\t*      *    *     *    ");
    printf("\n\t\t\t\t*        ||       *    ");
    printf("\n\t\t\t\t*       ****      *    ");
    printf("\n\t\t\t\t *     *    *    *     ");
    printf("\n\t\t\t\t  *             *      ");
    printf("\n\t\t\t\t     * * * * *         ");
 }
 else if(ch=='X')
 printf("\n\n\n\n\t\t\t\t   Player 1st Win \n\n\n\t\t\t\tWhose Keyword Was X");
 else
 printf("\n\n\n\n\t\t\t\t   Player 2nd Win \n\n\n\t\t\t\tWhose Keyword Was O");
 getch();
 r=thank();
 if(r==99)
 {
  reset();
  goto y;
 }
 getch();
}
