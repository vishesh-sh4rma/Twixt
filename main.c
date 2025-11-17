#include <stdio.h>
#include "board.h"
#include "ui.h"
int main() 
{
    Board B;
    Player cp=r;
    int m, n;
    makeBoard(&B);
    while(1) 
    {
        display(&B);
        if(cp==r) 
        {
            printf("RED's turn. Enter move (row column): ");
        } 
        else 
        {
            printf("BLACK's turn. Enter move (row column): ");
        }
        scanf("%d %d", &m, &n);
        if(m==-1)
        {
            return 0;
        }
        if(place(&B, m, n, cp)==1) 
        {
            if(cp==r) 
            {
                cp=b;
            } 
            else 
            {
                cp=r;
            }
            continue;
        } 
        else 
        {
            printf("Invalid Input\n");
            continue;
        }
    }
    return 0;
}