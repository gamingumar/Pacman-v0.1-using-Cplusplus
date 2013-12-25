#ifndef pacheadH
#define pacheadH


class game
{
public:
	int chkStart,score,x,y,counter,ex,ey,chooseEnemyWay,mainCh,lives;
	int yi,xi,xiStart,yiStart,yiLimit,xiLimit,t1,t2, ghostMode;
	int ch,ch1,foodCount,foodEated,chk,null,x_axis,y_axis, j;

	float delay,stopWatch,sec,reset,timeUp,ghostSpeed;
	
	char input,pac[15][40],food,bonusFood,waal,enemy;	
	char chm,chm1;	//Options from Main Menu

	  

	void makePacMap();
	void showPacMap();
	void pacmanMove();
	void showScore();
	void downBody();	//it will output & call common functions 
	void MainMenu();
	void countDown();
	void calFood();
	void ghost(int tmp1, int tmp2);
	void moveRandom();
	void initializeRandom();
	
	game()			//CONSTRUCTOR INITIALIZING VALUES
	{	


	//	cout<<"\n\tGame Constructor Called";
		
		chkStart=0;		score=0;	counter=0;	//chkStart will see if its the first time you have started game
		food='.';	null='\0';
		foodCount=-1;	foodEated=0;	//total food count which includes bonus + simple food

		yi=10; xi=20;					//initializing the starting point of PAC-MAN
		yiLimit=14; xiLimit=39;			//PAC-MAP limit is the max 2D Array Size
		
		xiStart=0; yiStart=0;			//if PAC-MAN reaches end of the Map & there is no waal
										//then it will come to the start of the array
		timeUp=0.0;	lives=3;
		
		bonusFood=157;					//Special Food Item
		enemy='X';//238;						//Enemy or Ghost
		waal=219;						//This is the main Waal Character ASCII value
		x_axis=205;	y_axis=186;			//These are the ASCII of inner waals of the map
				
		ghostSpeed=0.5;	ghostMode=0;
		ey=10;	ex=19; 
//		ex=16; ey=8;					//Enemy/Ghost Starting Point Location

				
		delay=40;						//This is time delay used in my Stop Watch & timing
		stopWatch=60000; reset=60000;	//This is starting time of Stop Watch
		

		t1=10; t2=19;
	}
	~game()
	{
	//	cout<<"\n\tGame Destructor Called";
	}
};

#endif

