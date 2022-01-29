//implementation file for sudoku-solver
#include "SudokuSolver.hpp"
#include <cstring>

//constructor
SudokuSolver::SudokuSolver(std::string fileName) {
  std::ifstream inputFile;
  NUM_OF_ELEMENTS = 81;
  MAX_ROWS = 9;
  MAX_COLS = 9;
  MAX_POSSIBLE = 10;
  currCorrVal = -1;

  //open file and read it into the Board
  inputFile.open(fileName.c_str());

  if(!inputFile)
  {
    cout << "Error: Filename invalid." << endl;
  }
  else
  {
    for(int row = 0; row < MAX_ROWS; row++)
    {
      for(int col = 0; col < MAX_COLS; col++)
      {
        inputFile >> sudokuBoard.contents[row][col];
        if(sudokuBoard.contents[row][col] == 0)
        {
          sudokuBoard.openSquares++;
          openSpots[sudokuBoard.openSquares].x = row;
          openSpots[sudokuBoard.openSquares].y = col;
        }
      }
    }
  }
  inputFile.close();

  finished = false;
}

//start solving!
void SudokuSolver::solvePuzzle() {

	
  }
}




/*
Description: Checks if there is a solution to the board
*/

bool SudokuSolver::isSolution()
{

    
}




/*
Description:
*/
void SudokuSolver::findCandidates(int candidates[], int &nCandidates)
{
  
}


/*
Description: Print the broad and set finished to true, as we have solved the
             puzzle.
*/
void SudokuSolver::processSolution()
{
  
}


/*
Description: Write the current candidate to the square we are looking at
*/
void SudokuSolver::makeMove()
{
  
}


/*
Description: In the case the number we tested for a square is wrong, reset it
             to zero.
*/
void SudokuSolver::unmakeMove()
{
 
}

/*
Description: Finds the square with the least number of possibilities to attempt
             to find a solution for.
*/

void SudokuSolver::findNextSquare(int& row, int& col)
{
   
}

/*
Description: Finds the possibiles numbers for a given empty square that we are
             examining.
*/

void SudokuSolver::findPossibilites(const int row, const int col, bool possible[])
{
  
}

/*
Description: Prints board, pauses at the end for user input
*/

void SudokuSolver::print() {
  
}

/*
Description:  Prints the location of the open spots in the puzzle, primarily
              for testing purposes.
*/

void SudokuSolver::printOpenSpots()
{
 
}
