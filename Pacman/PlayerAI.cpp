#include <stdio.h>
#include <stdlib.h>
#include "Info.h"

#define _ABS(x) ((x) < 0 ? (x) * -1 : (x))

MOVEMENT playerAI(MAPDATA map, POSITION p, POSITION e, int turn)
{
	printf("%d", turn);
	
	//
	if (turn < 400) {
		//‰a—Dæ
		if (map[p.y][p.x - 1] == 1 && !(e.x == p.x - 1 && e.y == p.y)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 1 && !(e.x == p.x && e.y == p.y - 1)) { return UP; }
		else if (map[p.y + 1][p.x] == 1 && !(e.x == p.x && e.y == p.y + 1)) { return DOWN; }
		else if (map[p.y][p.x + 1] == 1 && !(e.x == p.x + 1 && e.y == p.y)) { return RIGHT; }


		
		else if (map[p.y][p.x - 1] != 2 && ((e.x == p.x + 1 && e.y == p.y - 1) || (e.x == p.x + 1 && e.y == p.y + 1) || (e.x == p.x && e.y == p.y + 1))) { return LEFT; }
		else if ((e.x == p.x + 2 && e.y == p.y) || (e.x == p.x && e.y == p.y + 2)) { return STAY; }
		else if (map[p.y][p.x + 1] != 2 && !(e.x == p.x + 1 && e.y == p.y)) { return RIGHT; }
		else if (map[p.y + 1][p.x] != 2 && !(e.x == p.x && e.y == p.y + 1)) { return DOWN; }
		else if (map[p.y - 1][p.x] != 2 && !(e.x == p.x && e.y == p.y - 1)) { return UP; }


		else if (map[p.y + 1][p.x] == 0 && ((e.x == p.x + 1 && e.y == p.y) || (e.x == p.x && e.y == p.y + 1))) { return UP; }
		else if (map[p.y][p.x - 1] == 0 && !(e.x == p.x - 1 && e.y == p.y)) { return LEFT; }
		
	}
	//
	else if (400 <= turn && turn < 600) {
		if (map[p.y][p.x + 1] == 1 && !(e.x == p.x + 1 && e.y == p.y)) { return RIGHT; }


		else if (map[p.y][p.x - 1] != 2 && !(e.x == p.x - 1 && e.y == p.y)) { return LEFT; }
		else if (map[p.y - 1][p.x] != 2 && !(e.x == p.x && e.y == p.y - 1)) { return UP; }
		else if (map[p.y + 1][p.x] != 2 && !(e.x == p.x && e.y == p.y + 1)) { return DOWN; }
		else if (map[p.y][p.x + 1] != 2 && !(e.x == p.x + 1 && e.y == p.y)) { return RIGHT; }

		else if (map[p.y][p.x - 1] == 1 && !(e.x == p.x - 1 && e.y == p.y)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 1 && !(e.x == p.x && e.y == p.y - 1)) { return UP; }
		else if (map[p.y + 1][p.x] == 1 && !(e.x == p.x && e.y == p.y + 1)) { return DOWN; }

		else if (map[p.y - 1][p.x + 2] == 1 && !(e.x == p.x + 1 && e.y == p.y)) { return RIGHT; }

		else if (map[p.y][p.x - 1] == 0 && ((e.x == p.x + 1 && e.y == p.y - 1) || (e.x == p.x + 1 && e.y == p.y + 1) || (e.x == p.x && e.y == p.y + 1))) { return LEFT; }
		else if ((e.x == p.x + 2 && e.y == p.y) || (e.x == p.x && e.y == p.y + 2)) { return STAY; }
		else if (map[p.y][p.x + 1] == 0 && !(e.x == p.x + 1 && e.y == p.y)) { return RIGHT; }
		else if (map[p.y + 1][p.x] == 0 && !(e.x == p.x && e.y == p.y + 1)) { return DOWN; }
		else if (map[p.y - 1][p.x] == 0 && !(e.x == p.x && e.y == p.y - 1)) { return UP; }

		else if (map[p.y + 1][p.x] == 0 && ((e.x == p.x + 1 && e.y == p.y) || (e.x == p.x && e.y == p.y + 1))) { return UP; }
		else if (map[p.y][p.x - 1] == 0 && !(e.x == p.x - 1 && e.y == p.y)) { return LEFT; }
	}
	else if (600 <= turn && turn < 650) {
		if (map[p.y][p.x + 1] == 1 && !(e.x == p.x + 1 && e.y == p.y)) { return RIGHT; }
		else if (map[p.y][p.x - 1] == 1 && !(e.x == p.x - 1 && e.y == p.y)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 1 && !(e.x == p.x && e.y == p.y - 1)) { return UP; }
		else if (map[p.y + 1][p.x] == 1 && !(e.x == p.x && e.y == p.y + 1)) { return DOWN; }


		else if (map[p.y + 3][p.x] == 1 && !(e.x == p.x && e.y == p.y + 1)) { return DOWN; }

		else if (map[p.y][p.x - 1] != 2 && ((e.x == p.x + 1 && e.y == p.y - 1) || (e.x == p.x + 1 && e.y == p.y + 1) || (e.x == p.x && e.y == p.y + 1))) { return LEFT; }
		else if ((e.x == p.x + 2 && e.y == p.y) || (e.x == p.x && e.y == p.y + 2)) { return STAY; }
		else if (map[p.y][p.x + 1] != 2 && !(e.x == p.x + 1 && e.y == p.y)) { return RIGHT; }
		else if (map[p.y + 1][p.x] !=2 && !(e.x == p.x && e.y == p.y + 1)) { return DOWN; }
		else if (map[p.y - 1][p.x] != 2 && !(e.x == p.x && e.y == p.y - 1)) { return UP; }


		else if (map[p.y + 1][p.x] != 2 && ((e.x == p.x + 1 && e.y == p.y) || (e.x == p.x && e.y == p.y + 1))) { return UP; }
		else if (map[p.y][p.x - 1] != 2 && !(e.x == p.x - 1 && e.y == p.y)) { return LEFT; }

	}
	//
	else if ( 650 <= turn && turn <= 800)
	{
		

		if ((e.x == p.x - 1) && (e.y == p.y))
		{  
			if ((map[p.y][p.x + 1] == 1) || (map[p.y][p.x + 1] != 2)) { return RIGHT; }
			else if ((map[p.y - 1][p.x] == 1) || (map[p.y - 1][p.x] != 2)) { return UP; }
			else if ((map[p.y + 1][p.x] == 1) || (map[p.y + 1][p.x] != 2)) { return DOWN; }

		}
		else if ((e.x == p.x +1) && (e.y == p.y)) 
		{ 
			
			if ((map[p.y - 1][p.x] == 1) || (map[p.y - 1][p.x] != 2)) { return UP; }
			else if ((map[p.y][p.x - 1] == 1) || (map[p.y][p.x - 1] != 2)) { return LEFT; }
			else if ((map[p.y + 1][p.x] == 1) || (map[p.y + 1][p.x] != 2)) { return DOWN; }
		}
		else if ((e.x == p.x) && (e.y == p.y-1)) 
		{ 
			if (((map[p.y + 1][p.x] == 1) || (map[p.y + 1][p.x] != 2)) && turn >= 670 && turn <= 680) { return DOWN; }

			if ((map[p.y][p.x + 1] == 1) || (map[p.y][p.x + 1] != 2)) { return RIGHT; }
			else if ((map[p.y][p.x - 1] == 1) || (map[p.y][p.x - 1] != 2)) { return LEFT; }
			else if ((map[p.y + 1][p.x] == 1) || (map[p.y + 1][p.x] != 2)) { return DOWN; }
		}
		else if ((e.x == p.x) && (e.y == p.y+1)) 
		{ 
			if ((map[p.y][p.x + 1] == 1) || (map[p.y][p.x + 1] != 2)) { return RIGHT; }
			else if ((map[p.y][p.x - 1] == 1) || (map[p.y][p.x - 1] != 2)) { return LEFT; }
			else if ((map[p.y - 1][p.x] == 1) || (map[p.y - 1][p.x] != 2)) { return UP; }
		}
	}
	//
	else if (800 < turn && turn <= 1000)
	{
		if ((e.x == p.x - 1) && (e.y == p.y))
		{
			if ((map[p.y + 1][p.x] == 1) || (map[p.y + 1][p.x] != 2)) { return DOWN; }
			else if ((map[p.y - 1][p.x] == 1) || (map[p.y - 1][p.x] != 2)) { return UP; }
			else if ((map[p.y][p.x + 1] == 1) || (map[p.y][p.x + 1] != 2)) { return RIGHT; }
		}
		else if ((e.x == p.x + 1) && (e.y == p.y))
		{
			if (((map[p.y - 1][p.x] == 1) || (map[p.y - 1][p.x] != 2)) && turn >= 960) { return UP; }

			if ((map[p.y][p.x - 1] == 1) || (map[p.y][p.x - 1] != 2)) { return LEFT; }
			else if ((map[p.y + 1][p.x] == 1) || (map[p.y + 1][p.x] != 2)) { return DOWN; }
			else if ((map[p.y - 1][p.x] == 1) || (map[p.y - 1][p.x] != 2)) { return UP; }
		}
		else if ((e.x == p.x) && (e.y == p.y - 1))
		{
			if ((map[p.y + 1][p.x] == 1) || (map[p.y + 1][p.x] != 2)) { return DOWN; }
			else if ((map[p.y][p.x - 1] == 1) || (map[p.y][p.x - 1] != 2)) { return LEFT; }
			else if ((map[p.y][p.x + 1] == 1) || (map[p.y][p.x + 1] != 2)) { return RIGHT; }
		}
		else if ((e.x == p.x) && (e.y == p.y + 1))
		{
			if ((map[p.y - 1][p.x] == 1) || (map[p.y - 1][p.x] != 2)) { return UP; }
			else if ((map[p.y][p.x - 1] == 1) || (map[p.y][p.x - 1] != 2)) { return LEFT; }
			else if ((map[p.y][p.x + 1] == 1) || (map[p.y][p.x + 1] != 2)) { return RIGHT; }
		}
	}

	else { return STAY; }
}

int DisFood(int x1, int y1, int x2, int y2)
{
	int dx, dy;

	dx = _ABS(x1 - x2);
	dy = _ABS(y1 - y2);

	return dx + dy;
}

void SearchFood(MAPDATA map)
{
	for (int i = 0; i < MAP_HEIGHT; i++)
	{
		for (int j = 0; j < MAP_WIDTH; j++)
		{
			if (map[i][j] == 1)
			{

			}
		}
	}
}