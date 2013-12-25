#include<iostream>
#include<windows.h>	//for timing
#include<conio.h>	//for getch();
#include<stdio.h>	//for puts(" ")
#include <cstdlib>	//for clear screen
#include <time.h>	//for initializing srand() function
#include"pachead.h"

using namespace std;

#define up 72		//*
#define down 80		//*	
#define left 75		//*==> Defining Arrow Input keys for User
#define right 77	//*
#define esc 27		//*
#define enter 13	//*


void game::initializeRandom()
{
	srand ( time(NULL) );
}



void game::MainMenu()				//******MAIN MENU FUNCTION******
{
	
	do
	{
		system("cls");
		
		cout<<"\n\n\t";			//*
		for(j=0;j<40;j++)	//*
		{						//*	UPPER WAAL IN MENU
			cout<<waal;			//*
		}						//*

		cout<<"\n\n\tWECLOME TO [PAC-MAN A><E]\n\n\t\t\t\tby gamingumar\n";
			
		cout<<"\n\n\t";		//*
		for(j=0;j<40;j++)	//*
		{					//* LOWER WAAL IN MENU
			cout<<waal;		//*
		}					//*

	
		cout<<"\n\n 1==>\tHit Enter to Start the Game" <<endl;				//*
		cout<<"\n\n 2==>\tChoose Game Mode OR Enemy Speed Press 2"<<endl;	//*
		cout<<"\n\n 3==>\tHelp Guide Press 3" <<endl;						//* OPTIONS
		cout<<"\n\n 4==>\tAbout PAC-MAN A><E Press 4" <<endl;				//*
		cout<<"\n\n 5==>\tPress Escape to Exit the Game" <<endl;			//*
		
		chm=getch();	//INPUT USER CHOICE TO CONTINUE OR EXIT
		

		if(chm=='2')
		{
			do
			{
				system("CLS");

				cout<<"\n\n*** Press Escape to Go Back ***\n";

				cout<<"\n\n 1==>\t TO PLAY SCORE MODE PRESS 1" <<endl;		//* OPTIONS
				cout<<"\n\n 3==>\t TO PLAY CLASSIC MODE PRESS 2" <<endl;	//*
				cout<<"\n\n 2==>\t TO PLAY DEAD END MODE PRESS 3" <<endl;	//*
				cout<<"\n\n 3==>\t TO CHANGE ENEMY SPEED PRESS 4" <<endl;	//*

				chm1=getch();

				if(chm1=='1')
				{
					ghostMode=0;
					cout<<"\n\t*** SCORE MODE ACTIVATED ***\n\n";
				}
				if(chm1=='2')
				{
					cout<<"\n\t*** Not Defined Yet ***\n\n";
				}
				if(chm1=='3')
				{
					ghostMode=1;
					cout<<"\n\t*** DEAD END MODE ACTIVATED ***\n\n";
				}
				if(chm1=='4')
				{
					ghostSpeed=2;
					cout<<"\n\t*** ENEMY SPEED REDUCED ***\n\n";
				}
			//	if(chm1!='1'||chm1!='2'||chm1!='3'||chm1!='4')
			//	{
			//		cout<<"Wrong Choice";
			//	}
			}
			while(chm1!=esc);

		
		}


		if(chm=='3')		//HELP GUIDE FROM OPTION CHOICE 3
		{
			system("CLS");
			do
			{
				cout<<"\n*** Press Escape to Go Back ***\n";
				
				cout<<"\n\t 1=>Move Pac-Man using Arrow Keys on your Keyboard\n";
				cout<<"\n\t 2=>Eat Food and Get 1 Point Score\n";
				cout<<"\n\t 3=>Eat Bonus Food and Get 200 Points Score\n";
				cout<<"\n\t 4=>Protect Pac-Man from The Enemy\n";
				cout<<"\n\t 5=>If time is Up you will lose the Game\n";
				cout<<"\n\t 6=>If you have eaten all the food in the maze in time you will WIN\n";
				cout<<"\n\t 7=>Go To Main Menu to Change the difficulty of the Game\n";
				cout<<"\n\t 8=>There are 3 Modes of this Game\n\n";

				cout<<"==>Score Mode:";
				cout<<"Eat the Most in Time & get the Best Score\n";
				cout<<"==>Classic Mode:";
				cout<<"Save Pac-Man from being caught by the Enemy \n";
				cout<<"==>Dead End Mode:\n";
				cout<<"\tIn this Mode you can't live, here the enemy will follow you and\n";  
				cout<<"also blocks your way, so earn the best score by eating the most food";
				cout<<endl;
				
				chm1=getch();
			}
			while(chm1!=esc);
		}						//CHOICE 3 BRACKET CLOSE

		if(chm=='4')	//ABOUT FROM OPTION 4
		{
			system("CLS");
			do
			{
				cout<<"\n*** Press Escape to Go Back ***";
				
				cout<<"\t\t\t\tgamingumar.blogspot.com \n\n";

				cout<<"\n\n\t";			//*
				for(j=0;j<40;j++)	//*
				{						//*	UPPER WAAL IN MENU
					cout<<waal;			//*
				}						//*

				cout<<"\n\n\t AIR UNIVERSITY ISLAMABAD MAY 2012";				
				cout<<"\n\n \t OBJECT ORIENTED PROGRAMMING ";
				cout<<"\n\n \t SEMESTER 2 PROJECT";
				cout<<"\n\n \t PAC-MAN >< ";
				cout<<"\n\n \t PROGRAMMER:"; 
				cout<<"\n\n \t MUHAMMAD UMAR"; 
				cout<<"\t ID= 110613";
				cout<<"\n\n \t BSCS - F11 SECTION B";

				cout<<"\n\n\t";		//*
				for(j=0;j<40;j++)	//*
				{					//* LOWER WAAL IN MENU
					cout<<waal;		//*
				}					//*

				cout<<endl;
				
				chm1=getch();
			}
			while(chm1!=esc);
		}						//OPTION 4 BRACKET CLOSE

		
		if(chm==esc)
		{
			exit(1);
		}
		system("cls");
	}
	while(chm!=enter);
}



void game::showScore()					//******SHOW SCORE FUNCTION******
{
	cout<<"\n\n\t\t\t\t*************\n\t\t\t\tScore is::" <<score <<"\n\t\t\t\t*************\n";
	cout<<"\nFood Eated=" <<foodEated <<endl;
}



void game::makePacMap()					//******MAKING PAC-MAP FUNCTION******
{	//makePacMap bracket start
			

	for(x=0;x<15;x++)			//making pac map		[X] is Row & [Y] is Column
	{
		for(y=0;y<40;y++)	
		{
			pac[x][y]=food;			//FILLING MAP WITH FOOD
						
			if(y==3|| y==10|| y==15|| y==20|| y==25|| y==30|| y==35)
			{
				pac[x][y]=null;
			}
			if(x==12|| x==9|| x==3)
			{
				pac[x][y]=null;
			}

			if(x==12 && y==4|| x==12 && y==5)	//*
			{									//*	blocking
				pac[x][y]=x_axis;				//*
			}									//*
			if(y==9 && x==5 || y==9 && x==4)
			{
				pac[x][y]=y_axis;
			}
			if(x==12 && y==30||x==12 && y==31||x==12 && y==32||x==12 && y==33)
			{									//*	blocking
				pac[x][y]=x_axis;				//*
			}									//*

			if(x==7 && y==16 || x==7 && y==24)	//Bonus Food
			{									//Bonus Food
				pac[x][y]=bonusFood;			//Bonus Food
			}									//Bonus Food
			if(x==1 && y==36 || x==13 && y==4)	//Bonus Food
			{									//Bonus Food
				pac[x][y]=bonusFood;			//Bonus Food
			}


			if(y==18 || y==22)
			{						
				pac[x][y]=y_axis;	//MAKING VERTICAL FREE WAY WAAL
				
				if(x==4||x==5||x==6||x==7||x==8||x==9||x==10)			
				{						//making FREE SPACE
					pac[x][y]=null;
				}					
			}

			if(y==1 && x==8 || y==2 && x==8 || y==3 && x==8)	//*
			{													//*		
				pac[x][y]=x_axis;								//*			
			}													//* Making left side inside waal
			if(y==1 && x==5 || y==2 && x==5 || y==3 && x==5)	//*
			{													//*
				pac[x][y]=x_axis;								//*
			}													//*


			if(y==38 && x==8 || y==37 && x==8 || y==36 && x==8)	//*
			{													//*		
				pac[x][y]=x_axis;								//*			
			}													//* Making right side inside waal
			if(y==38 && x==5 || y==37 && x==5 || y==36 && x==5)	//*
			{													//*
				pac[x][y]=x_axis;								//*
			}													//*

			
			
			
			if(x==3 && y==7|| x==3 && y==8|| x==3 && y==9|| x==3 && y==10)			//waal
			{																		//waal
				pac[x][y]=x_axis;													//waal
			}																		//waal
													//* LEFT SIDE UP LINE			//waal
			if(x==3 && y==11|| x==3 && y==12|| x==3 && y==13|| x==3 && y==14)		//waal
			{																		//waal
				pac[x][y]=x_axis;													//waal
			}																		//waal
																					//waal
			if(x==10 && y==7|| x==10 && y==8|| x==10 && y==9|| x==10 && y==10)		//waal
			{																		//waal		
				pac[x][y]=x_axis;													//waal
			}										//* LEFT SIDE DOWN LINE			//waal
			if(x==11 && y==11|| x==11 && y==12|| x==11 && y==13|| x==11 && y==14)	//waal
			{																		//waal
				pac[x][y]=x_axis;													//waal
			}																		//waal
																					
																				
			if(x==3 && y==26|| x==3 && y==27|| x==3 && y==28|| x==3 && y==29)		//waal
			{																		//waal
				pac[x][y]=x_axis;													//waal
			}										//* RIGHT SIDE UP LINE			//waal
			if(x==3 && y==30|| x==3 && y==31|| x==3 && y==32|| x==3 && y==33)		//waal
			{																		//waal
				pac[x][y]=x_axis;													//waal
			}																		//waal

			if(x==11 && y==26|| x==11 && y==27|| x==11 && y==28|| x==11 && y==29)	//waal
			{																		//waal
				pac[x][y]=x_axis;													//waal
			}										//* RIGHT SIDE DOWN LINE		//waal
			if(x==10 && y==30|| x==10 && y==31|| x==10 && y==32|| x==10 && y==33)	//waal
			{																		//waal
				pac[x][y]=x_axis;													//waal
			}																		//waal



			if(x==5 && y==14|| x==6 && y==14|| x==7 && y==14|| x==8 && y==14)	//box	
			{												//BOX LEFT			//box
				pac[x][y]=y_axis;												//box
			}																	//box
			if(x==5 && y==26|| x==6 && y==26|| x==7 && y==26|| x==8 && y==26)	//box
			{												//BOX RIGHT			//box
				pac[x][y]=y_axis;												//box
			}																	//box
																				//box
			if(x==5 && y==15|| x==5 && y==16|| x==5 && y==17|| x==5 && y==18)	//box
			{												//BOX UP-LEFT		//box
				pac[x][y]=x_axis;												//box
			}																	//box
			if(x==5 && y==22|| x==5 && y==23|| x==5 && y==24|| x==5 && y==25)	//box
			{												//BOX UP-RIGHT		//box
				pac[x][y]=x_axis;												//box
			}																	//box
																				//box
			if(x==9 && y==15|| x==9 && y==16|| x==9 && y==17|| x==9 && y==18)	//box
			{												//BOX DOWN			//box
				pac[x][y]=x_axis;												//box
			}																	//box
			if(x==9 && y==14)													//box
			{												//BOX DOWN			//box
				pac[x][y]=x_axis;												//box
			}																	//box
			if(x==9 && y==19|| x==9 && y==20|| x==9 && y==21|| x==9 && y==22)	//box
			{												//BOX DOWN			//box
				pac[x][y]=x_axis;												//box
			}																	//box
			if(x==9 && y==23|| x==9 && y==24|| x==9 && y==25|| x==9 && y==26)	//box
			{																	//box	
				pac[x][y]=x_axis;												//box
			}																	//box



																				
			
			if(x==14||y==39||x==0||y==0)			//MAKING MAIN MAP BOUNDARY
			{
				pac[x][y]=waal;
			}


			if(x==0 && y==20||y==19||y==21 || x==14 && y==20)	
			{										//VERTICAL WAAL FREE WAY
				pac[x][y]=null;
			}

			if(y==0 && x==7||x==6 || y==39 && x==7)	
			{										//HORIZONTAL WAAL FREE WAY
				pac[x][y]=null;
			}



		}			//Making PAC-MAP FOR LOOP X BRACKET CLOSE
	}				//Making PAC-MAP FOR LOOP Y BRACKET CLOSE
	cout<<"\n\n";
	
}	//makePacMap bracket close

void game::showPacMap()						//******OUTPUT PAC-MAP FUNCTION******
{	//showPacMap bracket start
	
	//	cout<<"[gamingumar.blogspot.com]\n\n\n";
	for(y=0;y<15;y++)		
	{
		cout<<"\t\t";
		for(x=0;x<40;x++)
		{	
			if(chkStart==0)
			{
				pac[yi][xi]='<';
			}
			cout<<pac[y][x];
			chkStart++;
		}
		cout<<endl;					
	}	
}	//showPacMap bracket close



void game::countDown()					//******COUNT DOWN FUNCTION******
{
	//60000 = 60000-100
	stopWatch=stopWatch-100;
	
	sec=stopWatch/1000;
	
	cout<<"\n\tTime Left  [" <<sec <<"]" <<endl ;
	
}

void game::calFood()					//******CALCULATE FOOD FUNCTION******
{
	for(x=0;x<15;x++)			
	{
		for(y=0;y<40;y++)	
		{
			if(pac[x][y]==food||pac[x][y]==bonusFood)
			{
				foodCount++;
			}
		}
	}
	cout<<"Food in The Map is=" <<foodCount <<endl;
}


void game::downBody()					//******COMMON THINGS IN GAME FUNCTION******
{	
	
/*	if(foodEated==foodCount)
	{						//IF FOOD IS FINISHED SHOW MESSAGE & RESET GAME
		showScore();
		stopWatch=reset;	
		chkStart=0;
			yi=10;	xi=20;	foodEated=-1; 
		score=0;
		cout<<"\n\n\t\t:::YOU WON CONGRATULATIONS:::";
		cout<<"\n\n\t\tENTER 1 TO GO TO MAIN MENU\n";
		cout<<"\n\t\tENTER 2 TO EXIT GAME\n";
		cout<<"Enter Your Choice=";
		cin>>ch;
		if(ch==1)
		{					//CONTINUE PLAYING GAME
			MainMenu();		
			makePacMap();
			showScore();
			showPacMap();
			pacmanMove();
	//		ghost();
		}
		if(ch==2)
		{					//EXIT GAME
			exit(1);
		}
		else
		{
			if(ch!=2||ch!=3)
			{
				MainMenu();
			}
		}
	}

*/
	
	if(sec==timeUp || input==enter || foodEated==foodCount || pac[yi][xi]==enemy)

	{						//IF THESE CONDITION ARE TRUE, SHOW MESSAGE & RESET GAME
		
		if(sec==timeUp)
		{
			cout<<"\n\n\t";			//*
			for(j=0;j<40;j++)		//*
			{						//*	UPPER WAAL IN MESSAGE
				cout<<waal;			//*
			}						//*
			
			
			cout<<"\n\n\t:::TIME UP,,, GAME OVER:::";		//WHEN TIME IS UP GAME WILL OVER
			
			
			cout<<"\n\n\t";		//*
			for(j=0;j<40;j++)	//*
			{					//* LOWER WAAL IN MESSAGE
				cout<<waal;		//*
			}					//*

		}



		if(foodEated==foodCount)
		{
			cout<<"\n\n\t";			//*
			for(j=0;j<40;j++)		//*
			{						//*	UPPER WAAL IN MESSAGE
				cout<<waal;			//*
			}						//*
			
			
			cout<<"\n\n\t:::CONGRATULATIONS,,, YOU WON:::";	//WHEN PAC-MAN HAVE EATEN ALL THE FOOD
															//YOU WON THE GAME
			
			cout<<"\n\n\t";		//*
			for(j=0;j<40;j++)	//*
			{					//* LOWER WAAL IN MESSAGE
				cout<<waal;		//*
			}					//*
			
		}




		if(pac[yi][xi]==enemy)
		{
			cout<<"\n\n\t";			//*
			for(j=0;j<40;j++)		//*
			{						//*	UPPER WAAL IN MESSAGE
				cout<<waal;			//*
			}						//*
			
			
			cout<<"\n\n\t:::GHOST ATE YOU,,, GAME OVER:::";	//WHEN GHOST ATE YOU GAME WILL OVER
			
			
			cout<<"\n\n\t";		//*
			for(j=0;j<40;j++)	//*
			{					//* LOWER WAAL IN MESSAGE
				cout<<waal;		//*
			}					//*


		}		
		
		showScore();
		stopWatch=reset;
		chkStart=0;			foodEated=-1;
			yi=10;	xi=20;	 
		score=0;

		
		
		cout<<"\n\n\t\tENTER 1 TO GO TO MAIN MENU\n";
		cout<<"\n\t\tENTER 2 TO EXIT GAME\n";
		cout<<"Enter Your Choice=";
		cin>>ch;
		if(ch==1)			//This is Main Menu if choice is 1 continue the game
		{
			MainMenu();
			makePacMap();
			showPacMap();
			pacmanMove();
	//		ghost();
		}
		if(ch==2)			//This is Main Menu if choice is 2 exit the game
		{
			exit(1);
		}
		else
		{
			if(ch!=2||ch!=3)
			{
				MainMenu();
			}
		}
	}

/*	if(pac[yi][xi]==enemy)		//LIVES LEFT COUNTER
	{
		lives--;
		cout<<"lives Left=" <<lives;
		Sleep(delay*60);

		cout<<"lives Left=" <<lives;
	}*/

	if(sec!=timeUp || foodEated!=foodCount ||pac[yi][xi]!=enemy)
	{	
		showScore();
		showPacMap();
		countDown();
//		ghost();
		Sleep(delay);			//controlling the speed of Pacman
		system("CLS");		//clears the previous screen


		if(ghostMode==1)
		{
			if(delay+=ghostSpeed)// && ghostMode==1)
			{
				ghost(yi,xi);
			}
		}	
	}	
	
}
void game::pacmanMove()							//******MOVING PAC-MAN FUNCTION******

{								//pacmanMove bracket start
	do
	{				//pacmanMove do bracket start
		cout<<endl;
		input=getch();			//Direction Input of Pacman
		
		
		switch (input)			//choosing the direction using case
		{		//switch bracket start
			
		case right:		//***MOVING RIGHT SIDE CODE***

			{						//case right bracket
				
				while (!_kbhit())
				{	
					
					if(xi==xiLimit)
					{
						pac[yi][xi]=null;
						xi=xiStart;						
					}	
					
										
					if(pac[yi][xi+1]==food)		//*
					{							//*		
						pac[yi][xi+1]='<';		//*
						pac[yi][xi]=null;		//*=====>Right Side Food Eating
						xi++;					//*
						score++;				//*
						foodEated++;			//*
					}
					if(pac[yi][xi+1]==waal)
					{					
						downBody();				//if it is waal do nothing except timer											
					}
					if(pac[yi][xi+1]==null)		//if next is nothing
					{
						pac[yi][xi+1]='<';
						pac[yi][xi]=null;
						xi++;
					}
					if(pac[yi][xi+1]==bonusFood)	//if next is bonus food
					{
						pac[yi][xi+1]='<';
						pac[yi][xi]=null;
						xi++;
						score+=200;
						foodEated++;
					}
				
					downBody();				
				}
				break;
			}						//case right bracket close
			
			
		case left:		//***MOVING LEFT SIDE CODE***

			{						//case left bracket start
				
				while (!_kbhit())
				{			//left while bracket start
					

					if(xi==xiStart)			//if Pac-Map Limit riched
					{
						pac[yi][xi]=null;
						xi=xiLimit;
					}
					
					if(pac[yi][xi-1]==food)		//if next is food
					{
						pac[yi][xi-1]='>';
						pac[yi][xi]=null;
						xi--;
						score++;
						foodEated++;
					}
					if(pac[yi][xi-1]==waal)		//if next is waal
					{
						downBody();
					}
					if(pac[yi][xi-1]==null)		//if next is nothing
					{
						pac[yi][xi-1]='>';
						pac[yi][xi]=null;
						xi--;
					}

					if(pac[yi][xi-1]==bonusFood)	//if next is bonus food
					{
						pac[yi][xi-1]='>';
						pac[yi][xi]=null;
						xi--;
						score+=200;
						foodEated++;
					}
					
					downBody();	
				}			//left while bracket close
				break;				
			}						//case left bracket close	
			
			
		case up:		//***MOVING TOWARDS UP CODE***

			{						//case up bracket start
				
				while (!_kbhit())
				{			//up while bracket start
					
					
					if(yi==yiStart)				//if Pac-Map Limit riched
					{
						pac[yi][xi]=null;
						yi=yiLimit;
					}					
					
					if(pac[yi-1][xi]==food)		//if next is food
					{
						pac[yi][xi]=null;
						pac[yi-1][xi]='V';
						yi--;
						score++;
						foodEated++;
					}
					if(pac[yi-1][xi]==waal)		//if next is waal
					{
						downBody();
					}
					if(pac[yi-1][xi]==null)		//if next is nothing
					{
						pac[yi-1][xi]='V';
						pac[yi][xi]=null;
						yi--;
					}
	
					if(pac[yi-1][xi]==bonusFood)	//if next is bonus food
					{
						pac[yi-1][xi]='V';
						pac[yi][xi]=null;
						yi--;
						score+=200;
						foodEated++;
					}
					
					downBody();	
				}			//up while bracket close
				break;
				
			}						//case up bracket close
			
			
		case down:		//***MOVING DOWN WARDS CODE***

			{						//case down bracket start
				
				while (!_kbhit())
				{			//down while bracket start
					
										
					if(yi==yiLimit)				//if Pac-Map Limit riched
					{
						pac[yi][xi]=null;
						yi=yiStart;
					}						
					
					if(pac[yi+1][xi]==food)		//if next is food
					{
						pac[yi][xi]=null;
						pac[yi+1][xi]='^';
						yi++;
						score++;
						foodEated++;
					}
					if(pac[yi+1][xi]==waal)		//if next is waal
					{
						downBody();
					}				
					if(pac[yi+1][xi]==null)		//if next is nothing
					{
						pac[yi+1][xi]='^';
						pac[yi][xi]=null;
						yi++;
					}

					if(pac[yi+1][xi]==bonusFood)	//if next is bonus food
					{
						pac[yi+1][xi]='^';
						pac[yi][xi]=null;
						yi++;
						score+=200;
						foodEated++;
					}

					downBody();	
				}			//down while bracket close
				break;
				
			}						//case down bracket close

		case enter:
			{
				downBody();
			}

		default:
			{
				showPacMap();
				cout<<"\n\tGAME PAUSED\n";
			}
			
			
		}		//switch bracket close
	}			//do bracket close
	while(input!=esc);				//IF ESCAPE KEY IS PRESSED CLOSE THE GAME
	
}								//pacmanMove bracket close



void game::ghost(int tmp1,int tmp2)					//******ENEMY GHOST FUNCTION******

{					//GHOST FUNCTION BRACKET START
	
	
	pac[t1][t2]=pac[tmp1][tmp2];	//SAVING GHOST POSITION TEMPORARY
	
	pac[ey][ex]=enemy;

	ey=tmp1;
	ex=tmp2;
	

	pac[ey][ex]=pac[tmp1][tmp2];

	if(pac[t1][t2]==food)
	{
		pac[ey][ex]=food;
	}
	else 
	{
		if(pac[t1][t2]==null)
		{
			pac[ey][ex]=null;
		}
	}

}


/*

//	if(pac[ey][ex+1]==waal|| pac[ey][ex-1]==waal|| pac[ey-1][ex]==waal|| pac[ey-1][ex]==waal)
//	{
//		chooseEnemyWay=1+rand()%4;		//****RANDOMLY CHOOSE ENEMY DIRECTION****
//	}
	chooseEnemyWay=1+rand()%4;

	if(pac[ey][ex+1]==waal||pac[ey][ex+1]==food||pac[ey][ex+1]==null)		
		
	{						//1=LEFT, 2=RIGHT, 3=UP, 4=DOWN



		switch(chooseEnemyWay)
		{		//Switch Choose Enemy Way Bracket Start


			//***If Choice is Left Side***

		case 1://i.e GO LEFT 
			{
				
				if(pac[ey][ex-1]==food)		//if next is food
				{
					pac[ey][ex-1]=enemy;
					pac[ey][ex]=food;
					ex--;				
				}
				if(pac[ey][ex-1]==waal)
				{
					chooseEnemyWay=1+rand()%4;
				//	moveRandom();
				}
				if(pac[ey][ex-1]==null)		//if next is nothing
				{
					pac[ey][ex-1]=enemy;
					pac[ey][ex]=null;
					ex--;
				}
				if(ex==xiStart)			//if Pac-Map Limit riched
				{
					pac[ey][ex]=null;
					ex=xiLimit;
				}
				else 
					downBody();
			}
			
			
			//***If Choice is Right Side***
			
		case 2:		//i.e GO RIGHT
			{		
				
				if(pac[ey][ex+1]==food)
				{
					pac[ey][ex+1]=enemy;
					pac[ey][ex]=food;
					ex++;
				}
				if(pac[ey][ex+1]==waal)
				{
					chooseEnemyWay=1+rand()%4;
				//	moveRandom();
				}
				if(pac[ey][ex+1]==null)
				{
					pac[ey][ex+1]=enemy;
					pac[ey][ex]=null;
					ex++;
				}
				if(ex==xiLimit)
				{
					pac[ey][ex]=null;
					ex=xiStart;
				}
				else 
					downBody();
			}
			
			
			//***If Choice is Up***
			
		case 3:		//i.e GO UP 
			{		
				
				if(pac[ey-1][ex]==food)
				{
					pac[ey-1][ex]=enemy;
					pac[ey][ex]=food;
					ey--;
				}
				if(pac[ey-1][ex]==waal)
				{
					chooseEnemyWay=1+rand()%4;
				//	moveRandom();
				}
				if(pac[ey-1][ex]==null)
				{
					pac[ey-1][ex]=enemy;
					pac[ey][ex]=null;
					ey--;
				}
				if(ey==yiStart)				
				{
					pac[ey][ex]=null;
					ey=yiLimit;
				}					
				else 
					downBody();
			}
			
			
			//***If Choice is Down***
			
		case 4:		//i.e GO DOWN 
			{		
				
				if(pac[ey+1][ex]==food)
				{
					pac[ey+1][ex]=enemy;
					pac[ey][ex]=food;
					ey++;
				}
				if(pac[ey+1][ex]==waal)
				{
					chooseEnemyWay=1+rand()%4;
				//	moveRandom();
				}
				if(pac[ey+1][ex]==null)
				{
					pac[ey+1][ex]=enemy;
					pac[ey][ex]=null;
					ey++;
				}
				if(ey==yiLimit)				//if Pac-Map Limit riched
				{
					pac[ey][ex]=null;
					ey=yiStart;
				}						
				else 
					downBody();
			}

		}	//Switch Choose Enemy Way Bracket Start
			
		downBody();			
			
	}		
	
*/	

//}					//GHOST FUNCTION BRACKET CLOSE



void game::moveRandom()
{
}
