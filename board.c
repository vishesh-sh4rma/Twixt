#include <stdio.h>
#include "board.h"
void makeBoard(Board *B) 
{
    for(int i=0; i<24; i++) 
    {
        for(int j=0; j<24; j++) 
        {
            B->G[i][j]=e;
        }
    }
}
int place(Board *B, int m, int n, Player p) 
{
    if(p==b)
    {
        if(m<=1 || m>=24 || n<=0 || n>=25) 
        {
            return 0; 
        }
    }
    else
    {
        if(n<=1 || n>=24 || m<=0 || m>=25) 
        {
            return 0; 
        }
    }
    if(B->G[m-1][n-1]==e) 
    {
        B->G[m-1][n-1]=p;
        return 1; 
    }
    return 0; 
}