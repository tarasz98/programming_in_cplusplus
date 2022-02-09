#include <iostream>
#include <string>
#include <stdlib.h>     /* Library containing functions such as
                           rand (a generator of random numbers) */
using namespace std;

// We declare here an enumeration type called "material"
enum material {wood, stone, player};

// We declare here a record type called "tile"
struct tile {   
    int x;         // x-coordinate of the tile in the playfield
    int y;         // y-coordinate of the tile in the playfield
    bool isWall;   // Is this tile a wall?
    material type; // The material of this tile
};

// This function translates materials into a symbol in order to display it
char symbol(material m) {
    // Switch is a sort of if-then-else, useful when there many cases.
    // Remember to always break each branch!
    switch (m) {
    case wood:
        return ' ';
    case stone:
        return '*';
    case player:
        return 'O';
    default:
        return '?';
    }
}



int main() {
    int rows=12, cols=16;
    int x=5, y=5;
    char move;

    // If rows and cols are constants, we could define the playground as:
    // tile playground[rows][cols];
    tile playground[rows][cols];
    // If rows and cols aren't constant, we can't do the above in standard C++!

    // Building the playground (stone perimeter, wood inside)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Note how we access an element of an array with playground[i][j]
            // and how we access the fields of a struct with .x, .y, etc.
            playground[i][j].x = i;
            playground[i][j].y = j;
            playground[i][j].isWall = (i==0 && j!=3 || i==(rows-1) || j==0 || j==(cols-1));
            if (playground[i][j].isWall) {
                playground[i][j].type = stone;
            } else {
                playground[i][j].type = wood;
            }
            if(x==i&&y==j){
                playground[i][j].type = player;
            }
        }
    }

    // Printing the playground
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << symbol(playground[i][j].type);
        }
        cout << endl;
    }

    cin>>move;

    while (move !='q'){
        if(move =='u' && playground[x-1][y].type == wood){
            x=x-1;
        }else if(move =='d' && playground[x+1][y].type == wood){
            x=x+1;
        }else if(move == 'l' && playground[x][y-1].type == wood){
            y=y-1;
        }else if(move == 'r' && playground[x][y+1].type == wood){
            y=y+1;
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
            // Note how we access an element of an array with playground[i][j]
            // and how we access the fields of a struct with .x, .y, etc.
                playground[i][j].x = i;
                playground[i][j].y = j;
                playground[i][j].isWall = (i==0 && j!=3 || i==(rows-1) || j==0 || j==(cols-1));
                if (playground[i][j].isWall) {
                    playground[i][j].type = stone;
                } else {
                    playground[i][j].type = wood;
                }
                if(x==i&&y==j){
                    playground[i][j].type = player;
                }
                
            }
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << symbol(playground[i][j].type);
            }
            cout << endl;
        }
        cin>>move;
    }
    
    return 0;
}