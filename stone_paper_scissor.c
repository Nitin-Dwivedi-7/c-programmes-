#include<stdio.h>
#include<conio.h>
int user,compp,out=0;
int player();
int player()
{
    system("cls");
    printf("\n\t\t\t\t WELCOME \n\t\t\t STONE PAPER SCISSORS\n\t\t\t\t\t\t\t\t\t ANDY");
    printf("\n\n 1.PAPER \n 2.SCISSOR \n 3.ROCK \n 4.EXIT\n\n select one option ");
    scanf("%d",&user);
     switch(user){
case 1:
    printf("\n\t\t\t YOU  PAPER ");
    break;
case 2:
    printf("\n\t\t\t YOU SCISSOR ");
    break;
case 3:
    printf("\n\t\t\t YOU ROCK ");
    break;
case 4:
    out=1;
    }
    return(user);

}
int comp()
{
    start:
    compp=rand()%4;
    if(compp==0) goto start;

    return(compp);
}
void check()
{
    if(user==1 && compp==1 )
        printf("\n\t\t\tCOMPUTER ROCK \n \t\t\tYOU WON THE GAME");
else if(user==1 && compp==2)
    printf("\n\t\t\tCOMPUTER PAPER \n\t\t\tsame result try again\n press enter");
else if(user==1 && compp==3)
    printf("\n\t\t\tCOMPUTER SCISSOR \n\t\t\t YOU LOSE better luck next time\n press enter");
else if(user==2 && compp==1)
    printf("\n\t\t\tCOMPUTER ROCK \n \t\t\t YOU LOSE better luck next time\n press enter");
else if(user==2 && compp==2)
    printf("\n\t\t\tCOMPUTER PAPER \n\t\t\t YOU WON THE GAME");
else if (user==2 && compp==3)
    printf("\n\t\t\tCOMPUTER SCISSOR \n\t\t\tsame result try again\n press enter");
else if(user==3 && compp==1)
    printf("\n\t\t\tCOMPUTER ROCK \n \t\t\t same result try again \n press enter");
else if (user==3 && compp==2)
    printf("\n\t\t\tCOMPUTER PAPER \n\t\t\t YOU LOSE better luck next time");
else if (user==3 && compp==3)
    printf("\n\t\t\tCOMPUTER SCISSOR \n\t\t\t YOU WON THE GAME");
else if(user==4)
    printf("\n\t\t\tTHANK YOU \n press any key twice to exit ");
}
int main()
{
    while(!out){
    player();
    comp();
    check();
    getch();
    }
	printf("\nBY nitin");
    return 0;
}
