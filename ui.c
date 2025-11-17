#include <stdio.h>
#include "ui.h"
void display(Board *B) 
{
    printf("\n   ");
    for(int j=0; j<24; j++) 
    {
        printf("%2d ", j+1);
    }
    printf("\n");
    for(int i=0; i<24; i++)
    {
        printf("%2d ", i+1);
        for(int j=0; j<24; j++) 
        {
            char c = '.';
            if(B->G[i][j]==r) 
            {
                c='R';
            } 
            else if(B->G[i][j]==b) 
            {
                c='B';
            }
            if((i==0 && j==0) || (i==23 && j==0) || (i==0 && j==23) || (i==23 && j==23))
            {
                c=' ';
            }
            printf(" %c ", c);
        }
        printf("\n");
    }
    printf("\n");
}
