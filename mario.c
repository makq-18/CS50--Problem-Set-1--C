#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int input = 0;
    do
    {
        printf("height:");
        input = GetInt();
    }while(input < 0 || input > 23);

    int l=0;
    for(int i=1 ; i <=input ; i++)
    {
        for(int j=0 ; j<input-i ; j++)
        {
            printf(" ");
        }
        
       for(l=0 ; l<1 ; l++)
        {
            printf("#");
        }
        
        for(int k=0 ; k<i ; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
