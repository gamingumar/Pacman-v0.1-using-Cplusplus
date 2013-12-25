#include<iostream>
#include"pachead.h"
#include<conio.h>
#include<stdio.h>

#define esc 27		
#define enter 13	

using namespace std;

void main()
{
	game pacman;
	
//	do
//	{
		//	pacman.initializeRandom();
		pacman.MainMenu();
		pacman.showScore();
		pacman.makePacMap();
		pacman.calFood();
		pacman.showPacMap();
		pacman.pacmanMove();
		cout<<"Press Escape Key to Exit Game" <<endl;

//		pacman.mainCh=getch();
		
//	}
//	while(pacman.mainCh!=esc || pacman.mainCh==enter);

}