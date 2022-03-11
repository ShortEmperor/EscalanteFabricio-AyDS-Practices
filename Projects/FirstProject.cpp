#include <iostream>
using namespace std;

void maze(char matrix[15][15]);
void printMatrix(char matrix[15][15]);

int main() {
    char Maze[15][15]={35,35,64,35,35,35,35,35,35,32,32,32,32,32,32,
                       35,35,32,35,35,35,35,35,35,32,35,35,35,35,35,
                       35,35,32,32,32,32,32,32,32,32,35,35,35,35,35,
                       32,32,35,35,32,35,32,35,35,32,32,32,32,32,32,
                       35,35,35,35,32,35,35,35,35,35,35,35,35,35,35,
                       32,32,32,32,32,35,35,35,35,35,35,35,35,32,32,
                       35,35,35,35,32,32,32,32,32,32,32,32,35,32,32,
                       32,32,32,32,35,35,35,35,32,35,35,32,32,32,35,
                       32,35,35,32,32,32,32,32,32,35,35,35,35,35,35,
                       32,35,35,35,35,35,32,35,35,35,35,35,35,35,35,
                       35,35,35,35,32,32,32,32,32,32,32,32,32,32,32,
                       35,32,32,32,32,35,35,32,35,35,35,35,35,32,32,
                       32,35,35,35,35,35,32,32,35,35,35,35,35,32,35,
                       32,35,35,32,32,32,32,32,35,35,32,32,32,32,32,
                       35,32,32,32,35,32,35,32,32,35,32,35,70,35,35};

    maze(Maze);
    return 0;
}

void printMatrix(char matrix[15][15]){
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 15; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}

void maze(char matrix[15][15]){
    int x = 0, y = 2;
    char movement;
    bool mistake = false, won = false;

    do {
        system("clear");

        printMatrix(matrix);

        if (mistake){
            cout << "Invalid Movement\n";
            mistake = false;
        }
        cout << "X: " << x << " Y: " << y << " Move: " << movement << endl;
        cout << "Controls: W- Up, A- Left, S- Down, D- Right" << endl;

        cin >> movement;

        switch (movement) {
            case 'w':
                if(matrix[x-1][y] == 32 && x >= 0){
                    matrix[x-1][y] = 64;
                    matrix[x][y] = 32;
                    x--;
                    break;
                }else if(matrix[x-1][y] == 70){
                    won = true;
                    break;
                }
                else{
                    mistake = true;
                    break;
                }
            case 'a':
                if(matrix[x][y-1] == 32 && x >= 0){
                    matrix[x][y-1] = 64;
                    matrix[x][y] = 32;
                    y--;
                    break;
                }else if(matrix[x][y-1] == 70){
                    won = true;
                    break;
                }
                else{
                    mistake = true;
                    break;
                }
            case 's':
                if(matrix[x+1][y] == 32 && x <= 14){
                    matrix[x+1][y] = 64;
                    matrix[x][y] = 32;
                    x++;
                    break;
                }else if(matrix[x+1][y] == 70){
                    won = true;
                    break;
                }
                else{
                    mistake = true;
                    break;
                }
            case 'd':
                if(matrix[x][y+1] == 32 && x >= 0){
                    matrix[x][y+1] = 64;
                    matrix[x][y] = 32;
                    y++;
                    break;
                }else if(matrix[x][y+1] == 70){
                    won = true;
                    break;
                }
                else{
                    mistake = true;
                    break;
                }
        }



    }while(!won);

    cout << "\nCongratulations, you Won!!";

}
