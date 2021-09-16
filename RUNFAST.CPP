/*
This program is created by : © shivanshusurya192@gmail.com
It is a GAME in which we will be given a dot and we have to go and eat that BUT "in the shortest distance possible" otherwise you will lose!
Give it a shot and Lets see how much you score :)) 
*/

#include<iostream.h>         //A programme by :SHIVANSHU!!!
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
int F,a2=0,a3=0;
char name[100],ins,las;
char l1[100]="\t\t\tWELCOME TO THE GAME\n* ENTER YOUR NAME: ";
for(int st=0;st<(strlen(l1));st++)
{
cout<<l1[st];
delay(50);
}
gets(name);
clrscr();
char l3[1000]="\t\t\tHOW TO PLAY:\n1)You will be given a Target dot.\n2)You should reach the dot from a short path.\n3)Press W/w to go up.\n4)Press A/a to go left.\n5)Press D/d to go right.\n6)Press S/s to go down.\n";

for(st=0;st<strlen(l3);st++)
{
 cout<<l3[st];
 delay(50);
}
cout<<"\n\n\n\t\t**IF YOU ARE READY PRESS ANY KEY **\n";
ins=getch();
clrscr();
int q=5,w=5,s=5,e=5;                                     //w to up
							 //s to down
int gd=DETECT,gm,color=0;                                //q to left
							 //e to right
float x=0,f=0;
initgraph(&gd,&gm,"c://TC//bgi");
float posx=(getmaxx()/2);
float posy=(getmaxy()/2);
start:
randomize();
int var=rand()%4;
int s1=(rand()%2)+1,s2=(rand()%3)+1;
color=15;
int win1,win2;
int rand1=(100*s1),rand2=(50*s2);
			   //coordinates of the dot
switch(var)
{
case 0:win1=((getmaxx()/2)-rand1),win2=((getmaxy()/2)-rand2);
break;
case 1:win1=((getmaxx()/2)+rand1),win2=((getmaxy()/2)-rand2);
break;
case 2:win1=((getmaxx()/2)-rand1),win2=((getmaxy()/2)+rand2);
break;
default:win1=((getmaxx()/2)+rand1),win2=((getmaxy()/2)+rand2);
}


setbkcolor(0);
			   //varying dot
for(float m=1;m<11;m++)
{
circle(win1,win2,m);
setcolor(color);
}
for(int i=0;i<400;i++)     // for moving circles
{

 {
if((f>0)&&(i==0))          //after winning 1 or more times
{
      {
    if(x==1)
 {
  posx=posx-q;
  posy=posy;

 }
 if(x==2)
 {
 posx=posx+e;
 posy=posy;

 }
 if(x==3)
 {
 posx=posx;
 posy=posy-w;

 }
 if(x==4)
 {
  posx=posx;
  posy=posy+s;

 }
    }
}
    }


 char a=getch();              //moving by user

   if(a=='a'||a=='A')
  {

  circle(posx-q,posy,10);    //moving left
  setcolor(1);
  q=1;
  q=q++;
  x=1;
  }
  if(a=='d'||a=='D')                 //moving right
  {

  circle(posx+e,posy,10);
  setcolor(4);
  e=1;
  e=e++;
  x=2;
  }                          //moving upward
  if(a=='w'||a=='W')
  {
  circle(posx,posy-w,10);
  setcolor(2);
  w=1;
  w=w++;
  x=3;
  }
  if(a=='s'||a=='S')                 //moving downward
  {

  circle(posx,posy+s,10);
  setcolor(14);
  s=1;
  s=s++;
  x=4;
  }
	       //assigning latest position for the user's circle
  if(x==1)
 {
  posx=posx-q;                    //after going left
  posy=posy;
 // goto read;
 }
 if(x==2)
 {
 posx=posx+e;                    //after going right
 posy=posy;
// goto read;
 }
 if(x==3)
 {
 posx=posx;                      //after going upwards
 posy=posy-w;
// goto read;
 }
 if(x==4)
 {
  posx=posx;                     //after going downwards
  posy=posy+s;
 // goto read;
 }
 {
if((posx==win1)&&(posy==win2))   //if point coincides with winning dot
 {  f++;
  F=f*100;
 sound(700);
 delay(30);
 nosound();
 if(F>1000&&F<2000&&a2==0)
 {
 clrscr();
 cout<<"\t\t\tLEVEL 2:\n";
 a2=1;
 }
 if(F>2000&&F<3000&&a3==0)
 {
 clrscr();
 cout<<"\t\t\tLEVEL 3:\n";
 a3=1;
 }
 else
 {
  cout<<"\rSCORE:"<<F;
  }
  s1=(rand()%2)+2;
  s2=(rand()%3)+1;

  goto start;
 }

 }
  }
  clrscr();
 cout<<"\t\t\t  YOU LOSE THE GAME\n";
 cout<<"\t\t   You  should have to reach it from Short Path\n";
 cout<<"\t\t\tBETTER LUCK NEXT TIME\n";
sound(380);
delay(100);
sound(350);
delay(100);
sound(300);
delay(100);
sound(280);
delay(100);
sound(250);
delay(100);
sound(380);
delay(100);
sound(350);
delay(100);
sound(300);
delay(100);
sound(280);
delay(100);
sound(250);
delay(100);
sound(450);
delay(180);
nosound();
delay(500);
clrscr();
cout<<"\t\t\tPRESS ANY KEY TO QUIT!!";
las=getch();
 getch();
  }

