#include "function.h"

void printVector(const vector<vector<char>> &board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board.at(0).size(); j++)
        {
            cout << board.at(i).at(j) << " ";
        }
        cout << endl;
    }
}

void boardInit(vector<vector<char>> &board, const int &rcNumber)
{
    board.resize(rcNumber + 1);
    board.at(0).resize(rcNumber + 1);
    for (int i = 0; i < (rcNumber + 1); i++)
    {
        board.at(0).at(i) = 96 + i;
    }
    for (int i = 1; i < (rcNumber + 1); i++)
    {
        board.at(i).resize(rcNumber + 1);
        board.at(i).at(0) = static_cast<char>(64 + i);
    }
    for (int i = 1; i < board.size(); i++)
    {
        for (int j = 1; j < board.at(0).size(); j++)
        {
            board.at(i).at(j) = 48;
        }
    }
}

void setQueen(vector<vector<char>> &queenPos)
{
    
}