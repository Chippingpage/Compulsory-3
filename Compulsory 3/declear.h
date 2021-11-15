#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stdlib.h>


//Start-------------------------------------

void start();

std::string PlayerOne;
std::string PlayerTwo;

//Board-------------------------------------
void table(std::vector <std::vector <char>>& board);

int col = 9;
int row = 7;

std::vector <std::vector <char>> board = {

	{'-', '1', '2', '3', '4', '5', '6', '7', '-'},
	{'|', '0', '0', '0', '0', '0', '0', '0', '|'},
	{'|', '0', '0', '0', '0', '0', '0', '0', '|'},
	{'|', '0', '0', '0', '0', '0', '0', '0', '|'},
	{'|', '0', '0', '0', '0', '0', '0', '0', '|'},
	{'|', '0', '0', '0', '0', '0', '0', '0', '|'},
	{'|', '0', '0', '0', '0', '0', '0', '0', '|'},

};

//PVP---------------------------------------

void pvp();

int win = 0;

int counter = 0;

int row_1 = 6, row_2 = 6, row_3 = 6, row_4 = 6, row_5 = 6, row_6 = 6, row_7 = 6;

int PlayerOneChoice = 0;
int PlayerTwoChoice = 0;


//WinCondition-------------------------------

void wincon();

//WIn---------------------------------
void winner();
int ScoreP1 = 0;
int ScoreP2 = 0;

//PlayAgain----------------------------------'
void PlayAgain();

char retry{};
char AI{};
//PvA------------------------------------------

void pva();

int max = 7;
int AIChoice = 0;

//ResetBoard------------------------------------
void resetboard();

std::vector <std::vector <char>> reset = {

	{'-', '1', '2', '3', '4', '5', '6', '7', '-'},
	{'|', '0', '0', '0', '0', '0', '0', '0', '|'},
	{'|', '0', '0', '0', '0', '0', '0', '0', '|'},
	{'|', '0', '0', '0', '0', '0', '0', '0', '|'},
	{'|', '0', '0', '0', '0', '0', '0', '0', '|'},
	{'|', '0', '0', '0', '0', '0', '0', '0', '|'},
	{'|', '0', '0', '0', '0', '0', '0', '0', '|'},

};