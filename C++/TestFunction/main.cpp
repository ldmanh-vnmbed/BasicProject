#include <iostream>
#include <vector>

using namespace std;

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

vector<vector<char>> queenPos;
int numberOfQueen;

int main()
{
    cout << "Number Of Queen: ";
    cin >> numberOfQueen;

    queenPos.resize(numberOfQueen);
    for (int i = 0; i < numberOfQueen; i++)
    {
        queenPos.at(i).resize(2);
        for (int j = 0; j < 2; j++)
        {
            cin >> queenPos.at(i).at(j);
        }
    }
    printVector(queenPos);
    return 0;
}