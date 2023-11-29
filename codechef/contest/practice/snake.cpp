#include <iostream>
#include <queue>
#include <vector>
#include <map>

using namespace std;

// Structure to represent a board cell
struct Cell {
    int row, col;
    int moves;
};

// Function to simulate the Snake and Ladder game using BFS
int playSnakeAndLadder(vector<int>& board, int boardSize) {
    queue<Cell> q;
    vector<bool> visited(boardSize, false);

    // Starting position
    Cell start = {0, 0, 0};
    q.push(start);
    visited[0] = true;

    while (!q.empty()) {
        Cell current = q.front();
        q.pop();

        if (current.row == boardSize - 1 && current.col == boardSize - 1) {
            // Reached the destination
            return current.moves;
        }

        // Generate all possible moves from the current position
        for (int i = 1; i <= 6; ++i) {
            int nextCell = current.row * boardSize + current.col + i;
            
            if (nextCell < boardSize * boardSize) {
                // If not visited, enqueue it
                if (!visited[nextCell]) {
                    Cell next;
                    next.moves = current.moves + 1;

                    // Check if the next cell is a ladder or snake
                    if (board[nextCell] != -1) {
                        nextCell = board[nextCell];
                    }

                    // Calculate row and column of the next cell
                    next.row = nextCell / boardSize;
                    if (next.row % 2 == 0) {
                        next.col = nextCell % boardSize;
                    } else {
                        next.col = boardSize - 1 - (nextCell % boardSize);
                    }

                    q.push(next);
                    visited[nextCell] = true;
                }
            }
        }
    }

    // If we cannot reach the destination
    return -1;
}

int main() {
    const int boardSize = 10;
    vector<int> board(boardSize * boardSize, -1); // Initialize with -1 (no snake or ladder)

    // Define snakes and ladders (customize as needed)
    map<int, int> snakesAndLadders = {{16, 6}, {47, 26}, {49, 11}, {56, 53}, {62, 19},
                                       {64, 60}, {87, 24}, {93, 73}, {95, 75}, {98, 78}};

    for (const auto& entry : snakesAndLadders) {
        board[entry.first - 1] = entry.second - 1;
    }

    int moves = playSnakeAndLadder(board, boardSize);

    if (moves != -1) {
        cout << "Minimum moves to reach the destination: " << moves << endl;
    } else {
        cout << "Destination is not reachable." << endl;
    }

    return 0;
}
