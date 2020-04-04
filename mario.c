#include <cs50.h>
#include <stdio.h>

/*
CS50 Week 1 
Problem Set 1.2 Mario.C
By: Colin Lee
*/

int main(void)
{
    printf("Please enter a number (1 - 8) for the height of the pyramid. \n");
    
    int height=0;

    do
    {
        height = get_int("Height: ");
    } while((height<1)||(height>8));

    for(int row=1; row<=height; row++)
    {
        for(int column=0; column<=((height)*2+2); column++)
        {
            if(column<(height-row)&&(column<height))
            {
                printf(" ");
            }
            else if(column>=(height-row)&&(column<height))
            {
                printf("#");
            }
            else if((column==(height+1))||(column==(height+2)))
            {
                printf(" ");
            }
            else if((column>(height+2))&&(column<=(height+row+2)))
            {
                printf("#");
            }
        }
        printf("\n");
    }

}
