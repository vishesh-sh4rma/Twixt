#ifndef BOARD
#define BOARD
typedef enum 
{
    e, r, b
}Player;
typedef struct 
{
    Player G[24][24];
}Board;
void makeBoard(Board *B);
int place(Board *B, int m, int n, Player p);
#endif