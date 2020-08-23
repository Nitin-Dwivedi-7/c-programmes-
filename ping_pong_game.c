#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int x,y,yo=0,bx=10,by=17,go,end=0,fx=10,fy=1,score=0;
char user;
void show();//this function print every thing which shows on the screen
void control();//this use to decide the keys to move the objects
void move();//this have the logic of the game,this is use to move the objects in the game
void show()
{
    system("cls");//this is statement is used to clear the previous screen
    printf("\n\t\t\t\tHOLD THE BALOON \n\t\t\t\t      GAME ");//this line print the  head line of the game
    printf("\t by ANDY");

    for(y=0;y<20;y++)//this loop prints the stars vertically
    {
        printf("\n\t\t\t     ");

        for(x=0;x<20;x++)//this loop prints the stars horizontally
        {
            if(y==0 || y==19 || x==0 || x==19 )//because of the line stars only print on the boundaries
                    printf("*");
           else{
                  if(x==bx && y==by)//this statement prints the base
                   {
                       printf("_");
                    }
                   else if(x==fx && y==fy)//this is for printing the fruit
                          {

                              printf("0");
                          }
                          else  if(bx==fx && by==fy){
                                                     ++score;

                                                     fy=1;
                                                     start3:
                                                     fx=rand()%20;
                                                     if(fx==0) goto start3;
                                                     }
                   else if(yo==0)
                       printf(" ");

            }
            }
        }

        printf("\n\t\t\t\t\t\t\t\tscore : %d ",score);
    }

 void control()
 {
     if(kbhit()){
        switch(getch()){
         case 'a': go=1;
         break;
         case 's': go=2;
          break;
         case 'q': end=1;
            break;
        case 'z': go=9;
            break;
        }
 }
 }
 void move()
 {
     switch(go){
     case 1: bx--;
         break;
     case 2: bx++;
         break;
     case 9: fy++;

         break;
     default:
         fy++;
        break;


     }

 }
int main()
{
    int d;

    while(!end){


if(bx==-2 || bx==22 || by==-1 || by==22 || fy==18) {end=1;}
    show();

   control();
    move();
    for(d=1;d<=1000;d++){}//the loop is used to slow the program

}
printf("BY nitin ");
getch();
    return 0;
}
