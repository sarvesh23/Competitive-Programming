#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

bool isValidSudoku(vector<vector<int>> &board)
{
    int N = board.size();
    int sqrtN = sqrt(N);
    vector<unordered_set<int>> rows(N), cols(N), subgrids(N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int num = board[i][j];
            if (num == 0)
                continue;

            int subgrid_index = (i / sqrtN) * sqrtN + j / sqrtN;

            if (rows[i].count(num) || cols[j].count(num) || subgrids[subgrid_index].count(num))
                return false;

            rows[i].insert(num);
            cols[j].insert(num);
            subgrids[subgrid_index].insert(num);
        }
    }
    return true;
}

void parseSudokuInput(vector<vector<int>> &board)
{
    int size;
    cin >> size;
    int N = size;
    board.resize(N, vector<int>(N));

    for (int i = 0; i < N; i++)
    {
        string row;
        cin >> row;

        for (int j = 0; j < N; j++)
        {
            if (row[j] == '.')
                board[i][j] = 0; // Assuming 0 represents an empty cell
            else
                board[i][j] = row[j] - '0';
        }
    }
}

int main()
{
    vector<vector<int>> board ;
     parseSudokuInput(board);
for (const vector<int>& row : board) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
    if (isValidSudoku(board))
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;

    return 0;
}
