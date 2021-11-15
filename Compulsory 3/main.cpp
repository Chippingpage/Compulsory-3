#include "declear.h"



int main() {


	start();

	return 0;
}

void start() {
	std::cout << "Welcome to Connect 4" << std::endl;
	std::cout << "To Play against AI write AI for PlayerTwo" << std::endl;
	std::cout << "PlayerOne name: ";
		std::cin >> PlayerOne;
	std::cout << "PlayerTwo name: ";
		std::cin >> PlayerTwo;

		transform(PlayerOne.begin(), PlayerOne.end(), PlayerOne.begin(), ::toupper); // transform name to uppcase
		transform(PlayerTwo.begin(), PlayerTwo.end(), PlayerTwo.begin(), ::toupper); // transform name to uppcase

	if (PlayerTwo == "AI") // if Playertwo is AI 
	{
		pva();
	}
	else
	{
		pvp();

	}


}


void table(std::vector <std::vector <char>>& board) { // creates board
	

	for (int i = 0; i < row; i++)
	{
		
		for (int j = 0; j < col; j++)
		{

			std::cout << board[i][j] << " ";

		}
		std::cout << std::endl;
	}
	std::cout << "+---------------+" << std::endl;
}



void pvp() { // Player vs Player
	
	


	

		table(board); //display Board

		while (win == 0) // will run until there is a winner or draw
		{
		
			int valid = 1;
			std::cout << std::endl;


			while (valid == 1) {

				std::cout << PlayerOne << " Enter a column number: ";
				std::cin >> PlayerOneChoice;
				if (PlayerOneChoice <= 0 || PlayerOneChoice >= 8) {
					std::cout << "Try again.";
					valid = 1;

				}
				else if (PlayerOneChoice == 1) {

					if (row_1 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_1][PlayerOneChoice] = 'X'; // places the X on row 1 and what user picked
						counter++; // counts turn
						row_1 = row_1 - 1; // removes the row where where the user put a X on
						valid = 0;
						break;
					}
				}
				else if (PlayerOneChoice == 2) {
					if (row_2 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_2][PlayerOneChoice] = 'X'; // places the X on row 2 and what user picked
						counter++; // counts turn
						row_2 = row_2 - 1; // removes the row where where the user put a X on
						valid = 0;
						break;
					}
				}
				else if (PlayerOneChoice == 3) {
					if (row_3 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_3][PlayerOneChoice] = 'X'; // places the X on row 3 and what user picked
						counter++; // counts turn
						row_3 = row_3 - 1; // removes the row where where the user put a X on
						valid = 0;
						break;
					}
				}
				else if (PlayerOneChoice == 4) {
					if (row_4 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_4][PlayerOneChoice] = 'X'; // places the X on row 4 and what user picked
						counter++; // counts turn
						row_4 = row_4 - 1; // removes the row where where the user put a X on
						valid = 0;
						break;
					}
				}
				else if (PlayerOneChoice == 5) {
					if (row_5 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_5][PlayerOneChoice] = 'X'; // places the X on row 5 and what user picked
						counter++; // counts turn
						row_5 = row_5 - 1; // removes the row where where the user put a X on
						valid = 0;
						break;
					}
				}
				else if (PlayerOneChoice == 6) {
					if (row_6 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_6][PlayerOneChoice] = 'X'; // places the X on row 6 and what user picked
						counter++; // counts turn
						row_6 = row_6 - 1; // removes the row where where the user put a X on
						valid = 0;
						break;
					}
				}
				else if (PlayerOneChoice == 7) {
					if (row_7 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_7][PlayerOneChoice] = 'X'; // places the X on row 7 and what user picked
						counter++; // counts turn
						row_7 = row_7 - 1; // removes the row where where the user put a X on
						valid = 0;
						break;
					}
				}
			}
			table(board);
			wincon();

			while (win == 0) {

				std::cout << PlayerTwo << " Enter a column number: ";
				std::cin >> PlayerTwoChoice;
				if (PlayerTwoChoice <= 0 || PlayerTwoChoice >= 8) {
					std::cout << "Try again.";
					valid = 1;

				}
				else if (PlayerTwoChoice == 1) {

					if (row_1 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerTwoChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_1][PlayerTwoChoice] = 'Z'; // places the Z on row 1 and what user picked
						counter++; // counts turn
						row_1 = row_1 - 1; // removes the row where where the user put a Z on
						valid = 0;
						break;
					}
				}
				else if (PlayerTwoChoice == 2) {
					if (row_2 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerTwoChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_2][PlayerTwoChoice] = 'Z'; // places the Z on row 2 and what user picked
						counter++; // counts turn
						row_2 = row_2 - 1; // removes the row where where the user put a Z on
						valid = 0;
						break;
					}
				}
				else if (PlayerTwoChoice == 3) {
					if (row_3 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerTwoChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_3][PlayerTwoChoice] = 'Z'; // places the Z on row 3 and what user picked
						counter++; // counts turn
						row_3 = row_3 - 1; // removes the row where where the user put a Z on
						valid = 0;
						break;
					}
				}
				else if (PlayerTwoChoice == 4) {
					if (row_4 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerTwoChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_4][PlayerTwoChoice] = 'Z'; // places the Z on row 4 and what user picked
						counter++; // counts turn
						row_4 = row_4 - 1; // removes the row where where the user put a Z on
						valid = 0;
						break;
					}
				}
				else if (PlayerTwoChoice == 5) {
					if (row_5 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerTwoChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_5][PlayerTwoChoice] = 'Z'; // places the Z on row 5 and what user picked
						counter++; // counts turn
						row_5 = row_5 - 1; // removes the row where where the user put a Z on
						valid = 0; 
						break;
					}
				}
				else if (PlayerTwoChoice == 6) {
					if (row_6 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerTwoChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_6][PlayerTwoChoice] = 'Z'; // places the Z on row 6 and what user picked
						counter++;  // counts turn
						row_6 = row_6 - 1; // removes the row where where the user put a Z on
						valid = 0;
						break;
					}
				}
				else if (PlayerTwoChoice == 7) {
					if (row_7 <= 0) { // checks if the row is full
						std::cout << "Column " << PlayerTwoChoice << " is full, Try again" << std::endl;
						valid = 1;
						continue;
					}
					else {
						board[row_7][PlayerTwoChoice] = 'Z'; // places the Z on row 7 and what user picked
						counter++; // counts turn
						row_7 = row_7 - 1; // removes the row where where the user put a Z on
						valid = 0;
						break;
					}
				}
			}
			table(board);
			wincon(); // checks WinCondition

		}


	
}


void wincon() {


	for (size_t i = 6; i > 0; i--)
	{


			//Horizontal
			if (board[i][1] == 'X' && board[i][2] == 'X' && board[i][3] == 'X' && board[i][4] == 'X' || board[i][2] == 'X' && board[i][3] == 'X' && board[i][4] && board[i][5] == 'X' || board[i][3] == 'X' && board[i][4] == 'X' && board[i][5] == 'X' && board[i][6] == 'X' || board[i][4] == 'X' && board[i][5] == 'X' && board[i][6] == 'X' && board[i][7] == 'X')
			{
			
				win = 1;
			}
			//Vertical
			if (board[i][1] == 'X' && board[i-1][1] == 'X' && board[i-2][1] == 'X' && board[i-3][1] == 'X' || board[i][2] == 'X' && board[i - 1][2] == 'X' && board[i - 2][2] == 'X' && board[i - 3][2] == 'X' || board[i][3] == 'X' && board[i - 1][3] == 'X' && board[i - 2][3] == 'X' && board[i - 3][3] == 'X' || board[i][4] == 'X' && board[i - 1][4] == 'X' && board[i - 2][4] == 'X' && board[i - 3][4] == 'X' || board[i][5] == 'X' && board[i - 1][5] == 'X' && board[i - 2][5] == 'X' && board[i - 3][5] == 'X' || board[i][6] == 'X' && board[i - 1][6] == 'X' && board[i - 2][6] == 'X' && board[i - 3][6] == 'X' || board[i][7] == 'X' && board[i - 1][7] == 'X' && board[i - 2][7] == 'X' && board[i - 3][7] == 'X')
			{
			
				win = 1;
			}
			//Cross right
			if (board[i][1] == 'X' && board[i-1][2] == 'X' && board[i-2][3] == 'X' && board[i-3][4] == 'X' || board[i][2] == 'X' && board[i - 1][3] == 'X' && board[i - 2][4] == 'X' && board[i - 3][5] == 'X' || board[i][3] == 'X' && board[i - 1][4] == 'X' && board[i - 2][5] == 'X' && board[i - 3][6] == 'X' || board[i][4] == 'X' && board[i - 1][5] == 'X' && board[i - 2][6] == 'X' && board[i - 3][7] == 'X')
			{
			
				win = 1;
			}
			//Cross Left
			if (board[i][7] == 'X' && board[i-1][6] == 'X' && board[i-2][5] == 'X' && board[i-3][4] == 'X' || board[i][6] == 'X' && board[i - 1][5] == 'X' && board[i - 2][4] == 'X' && board[i - 3][3] == 'X' || board[i][5] == 'X' && board[i - 1][4] == 'X' && board[i - 2][3] == 'X' && board[i - 3][2] == 'X' || board[i][4] == 'X' && board[i - 1][3] == 'X' && board[i - 2][2] == 'X' && board[i - 3][1] == 'X')
			{
				
				win = 1;
			}


			//Horizontal
			if (board[i][1] == 'Z' && board[i][2] == 'Z' && board[i][3] == 'Z' && board[i][4] == 'Z' || board[i][2] == 'Z' && board[i][3] == 'Z' && board[i][4] && board[i][5] == 'Z' || board[i][3] == 'Z' && board[i][4] == 'Z' && board[i][5] == 'Z' && board[i][6] == 'Z' || board[i][4] == 'Z' && board[i][5] == 'Z' && board[i][6] == 'Z' && board[i][7] == 'Z')
			{
				
				win = 2;
			}
			//Vertical
			if (board[i][1] == 'Z' && board[i - 1][1] == 'Z' && board[i - 2][1] == 'Z' && board[i - 3][1] == 'Z' || board[i][2] == 'Z' && board[i - 1][2] == 'Z' && board[i - 2][2] == 'Z' && board[i - 3][2] == 'Z' || board[i][3] == 'Z' && board[i - 1][3] == 'Z' && board[i - 2][3] == 'Z' && board[i - 3][3] == 'Z' || board[i][4] == 'Z' && board[i - 1][4] == 'Z' && board[i - 2][4] == 'Z' && board[i - 3][4] == 'Z' || board[i][5] == 'Z' && board[i - 1][5] == 'Z' && board[i - 2][5] == 'Z' && board[i - 3][5] == 'Z' || board[i][6] == 'Z' && board[i - 1][6] == 'Z' && board[i - 2][6] == 'Z' && board[i - 3][6] == 'Z' || board[i][7] == 'Z' && board[i - 1][7] == 'Z' && board[i - 2][7] == 'Z' && board[i - 3][7] == 'Z')
			{
				
				win = 2;
			}
			//Cross right
			if (board[i][1] == 'Z' && board[i - 1][2] == 'Z' && board[i - 2][3] == 'Z' && board[i - 3][4] == 'Z' || board[i][2] == 'Z' && board[i - 1][3] == 'Z' && board[i - 2][4] == 'Z' && board[i - 3][5] == 'Z' || board[i][3] == 'Z' && board[i - 1][4] == 'Z' && board[i - 2][5] == 'Z' && board[i - 3][6] == 'Z' || board[i][4] == 'Z' && board[i - 1][5] == 'Z' && board[i - 2][6] == 'Z' && board[i - 3][7] == 'Z')
			{
				
				win = 2;
			}
			//Cross Left
			if (board[i][7] == 'Z' && board[i - 1][6] == 'Z' && board[i - 2][5] == 'Z' && board[i - 3][4] == 'Z' || board[i][6] == 'Z' && board[i - 1][5] == 'Z' && board[i - 2][4] == 'Z' && board[i - 3][3] == 'Z' || board[i][5] == 'Z' && board[i - 1][4] == 'Z' && board[i - 2][3] == 'Z' && board[i - 3][2] == 'Z' || board[i][4] == 'Z' && board[i - 1][3] == 'Z' && board[i - 2][2] == 'Z' && board[i - 3][1] == 'Z')
			{
				
				win = 2;
			}
		
	}

	if (counter == 42) // if board is full
	{
		win = 3;
	}

	winner();
}

void winner() {


	if (win == 1) // if PlayerOne Wins
	{
		std::cout << PlayerOne << " Wins" << std::endl;
		ScoreP1++; // add score
		std::cout << std::endl;
		std::cout << PlayerOne << " " << ScoreP1 << " Points" << std::endl; //Prints score
		std::cout << PlayerTwo << " " << ScoreP2 << " Points" << std::endl; //Prints score
		std::cout << std::endl;
		PlayAgain();
	}
	if (win == 2) // if PlayerTwo Wins
	{
		std::cout << PlayerTwo << " Wins" << std::endl;
		ScoreP2++; // add score
		std::cout << std::endl;
		std::cout << PlayerOne << " " << ScoreP1 << " Points" << std::endl; //Prints score
		std::cout << PlayerTwo << " " << ScoreP2 << " Points" << std::endl; //Prints score
		std::cout << std::endl;
		PlayAgain();
	}
	if (win == 3) // if Draw
	{
		std::cout << "Draw" << std::endl;
		std::cout << std::endl;
		std::cout << PlayerOne << " " << ScoreP1 << " Points" << std::endl; //Prints score
		std::cout << PlayerTwo << " " << ScoreP2 << " Points" << std::endl; //Prints score
		std::cout << std::endl;
		PlayAgain();
	}

}

void PlayAgain() {

	std::cout << "Do you want to play again?" << std::endl;
	std::cout << "Write y to play again or any other to quit" << std::endl;
	std::cin >> retry;

	if (retry == 'Y' || retry == 'y') // resets declerations
	{
		row_1 = 6;
		row_2 = 6;
		row_3 = 6;
		row_4 = 6;
		row_5 = 6;
		row_6 = 6;
		row_7 = 6;
		win = 0;
		counter = 0;

		resetboard();
		
		std::cout << "If you played against AI type y" << std::endl;
		std::cin >> AI;

		if (AI=='Y' || AI=='y') // if played against AI
		{
			pva();
		}
		else {
			pvp();
		}
		
	}
	else {

		exit(0);
	}
}




void pva() {



	
	while (win == 0)
	{
		table(board);

		int valid = 1;
		std::cout << std::endl;


		while (valid == 1) {

			std::cout << PlayerOne << " Enter a column number: " << std::endl;;
			std::cin >> PlayerOneChoice;
			if (PlayerOneChoice <= 0 || PlayerOneChoice >= 8) { // if entered correct column
				std::cout << "Try again.";
				valid = 1;

			}
			else if (PlayerOneChoice == 1) {

				if (row_1 <= 0) { // checks if the row is full
					std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
					valid = 1;
					continue;
				}
				else {
					board[row_1][PlayerOneChoice] = 'X'; // places the X on row 1 and what user picked
					counter++; // counts turn
					row_1 = row_1 - 1; // removes the row where where the user put a X on
					valid = 0;
					break;
				}
			}
			else if (PlayerOneChoice == 2) {
				if (row_2 <= 0) { // checks if the row is full
					std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
					valid = 1;
					continue;
				}
				else {
					board[row_2][PlayerOneChoice] = 'X'; // places the X on row 2 and what user picked
					counter++; // counts turn
					row_2 = row_2 - 1; // removes the row where where the user put a X on
					valid = 0;
					break;
				}
			}
			else if (PlayerOneChoice == 3) {
				if (row_3 <= 0) { // checks if the row is full
					std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
					valid = 1;
					continue;
				}
				else {
					board[row_3][PlayerOneChoice] = 'X'; // places the X on row 3 and what user picked
					counter++; // counts turn
					row_3 = row_3 - 1; // removes the row where where the user put a X on
					valid = 0;
					break;
				}
			}
			else if (PlayerOneChoice == 4) {
				if (row_4 <= 0) { // checks if the row is full
					std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
					valid = 1;
					continue;
				}
				else {
					board[row_4][PlayerOneChoice] = 'X'; // places the X on row 4 and what user picked
					counter++; // counts turn
					row_4 = row_4 - 1; // removes the row where where the user put a X on
					valid = 0;
					break;
				}
			}
			else if (PlayerOneChoice == 5) {
				if (row_5 <= 0) { // checks if the row is full
					std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
					valid = 1;
					continue;
				}
				else {
					board[row_5][PlayerOneChoice] = 'X'; // places the X on row 5 and what user picked
					counter++; // counts turn
					row_5 = row_5 - 1; // removes the row where where the user put a X on
					valid = 0;
					break;
				}
			}
			else if (PlayerOneChoice == 6) {
				if (row_6 <= 0) { // checks if the row is full
					std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
					valid = 1;
					continue;
				}
				else {
					board[row_6][PlayerOneChoice] = 'X'; // places the X on row 6 and what user picked
					counter++; // counts turn
					row_6 = row_6 - 1; // removes the row where where the user put a X on
					valid = 0;
					break;
				}
			}
			else if (PlayerOneChoice == 7) {
				if (row_7 <= 0) { // checks if the row is full
					std::cout << "Column " << PlayerOneChoice << " is full, Try again" << std::endl;
					valid = 1;
					continue;
				}
				else {
					board[row_7][PlayerOneChoice] = 'X'; // places the X on row 7 and what user picked
					counter++; // counts turn
					row_7 = row_7 - 1; // removes the row where where the user put a X on
					valid = 0;
					break;
				}
			}
		}
		
		wincon();

		while (win == 0) {
			srand(time(NULL)); // generate random seed
			AIChoice = rand() % max + 1; // generate random nummber
			std::cout << PlayerTwo << " Enter a column number: " << std::endl;
			
			if (AIChoice <= 0 || AIChoice >= 8) {
				std::cout << "Try again.";
				valid = 1;

			}
			else if (AIChoice == 1) {

				if (row_1 <= 0) { // if colum is full
					std::cout << "Column " << AIChoice << " is full, Try again" << std::endl;
					valid = 1;
					srand(time(NULL));
					AIChoice = rand() % max + 1; // new random number
					continue;
				}
				else {
					board[row_1][AIChoice] = 'Z';  // places the Z on row 1 and what AI picked
					counter++; // counts turn
					row_1 = row_1 - 1; // removes the row where where the AI put a Z on
					std::cout << AIChoice;
					valid = 0;
					break;
				}
			}
			else if (AIChoice == 2) { 
				if (row_2 <= 0) { // if colum is full
					std::cout << "Column " << AIChoice << " is full, Try again" << std::endl;
					valid = 1;
					srand(time(NULL));
					AIChoice = (rand() % max) + 1; // new random number
					continue;
				}
				else {
					board[row_2][AIChoice] = 'Z'; // places the Z on row 2 and what AI picked
					counter++; // counts turn
					row_2 = row_2 - 1; // removes the row where where the AI put a Z on
					valid = 0;
					break;
				}
			}
			else if (AIChoice == 3) {
				if (row_3 <= 0) { // if colum is full
					std::cout << "Column " << AIChoice << " is full, Try again" << std::endl;
					valid = 1;
					srand(time(NULL));
					AIChoice = (rand() % max) + 1; // new random number
					continue;
				}
				else {
					board[row_3][AIChoice] = 'Z'; // places the Z on row 3 and what AI picked
					counter++; // counts turn
					row_3 = row_3 - 1; // removes the row where where the AI put a Z on
					valid = 0;
					break;
				}
			}
			else if (AIChoice == 4) {
				if (row_4 <= 0) { // if colum is full
					std::cout << "Column " << AIChoice << " is full, Try again" << std::endl;
					valid = 1;
					srand(time(NULL));
					AIChoice = (rand() % max) + 1; // new random number
					continue;
				}
				else {
					board[row_4][AIChoice] = 'Z'; // places the Z on row 4 and what AI picked
					counter++; // counts turn
					row_4 = row_4 - 1; // removes the row where where the AI put a Z on
					valid = 0;
					break;
				}
			}
			else if (AIChoice == 5) {
				if (row_5 <= 0) { // if colum is full
					std::cout << "Column " << AIChoice << " is full, Try again" << std::endl;
					valid = 1;
					srand(time(NULL));
					AIChoice = (rand() % max) + 1; // new random number
					continue;
				}
				else {
					board[row_5][AIChoice] = 'Z'; // places the Z on row 5 and what AI picked
					counter++; // counts turn
					row_5 = row_5 - 1; // removes the row where where the AI put a Z on
					valid = 0; 
					break;
				}
			}
			else if (AIChoice == 6) {
				if (row_6 <= 0) { // if colum is full
					std::cout << "Column " << AIChoice << " is full, Try again" << std::endl;
					valid = 1;
					srand(time(NULL));
					AIChoice = (rand() % max) + 1; // new random number
					continue;
				}
				else {
					board[row_6][AIChoice] = 'Z'; // places the Z on row 6 and what AI picked
					counter++; // counts turn
					row_6 = row_6 - 1; // removes the row where where the AI put a Z on
					valid = 0;
					break;
				}
			}
			else if (AIChoice == 7) {
				if (row_7 <= 0) { // if colum is full
					std::cout << "Column " << AIChoice << " is full, Try again" << std::endl;
					valid = 1;
					srand(time(NULL));
					AIChoice = (rand() % max) + 1; // new random number
					continue;
				}
				else {
					board[row_7][AIChoice] = 'Z'; // places the Z on row 7 and what AI picked
					counter++; // counts turn
					row_7 = row_7 - 1; // removes the row where where the AI put a Z on
					valid = 0;
					break;
				}
			}
		}
		std::cout << std::endl;
	
		wincon(); // Checks WinCondition

	}

}

void resetboard() { // resets the board

	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col; j++)
		{

			board[i][j] = reset[i][j];

		}
		std::cout << std::endl;
	}
	std::cout << "+---------------+" << std::endl;

}