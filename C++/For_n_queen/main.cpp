#include "function.cpp"

int rcNumber;
vector<vector<char>> board;
vector<vector<char>> queenPos;
int main()
{
    cout << "ROW = COL = Number of Queen =";
    cin >> rcNumber;

    boardInit(board, rcNumber);
    printVector(board);

    cout<<"Please set position of queen: ";
    setQueen(queenPos);
    //system("clear");
    return 0;
}