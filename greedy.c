#include <stdio.h>
#include <cs50.h>
#include <math.h> // to perform round function

float roundf(float input); // round method declaration.

int main(void)
{
   float input;    //user input value
   
   do       // repeat untill user inputs non-negative value       
   {
        printf("input:");
        input = GetFloat();
   }while(input < 0);
   
        input = input *100; 
        int i = (int) roundf(input); //round user input float value to integer value
        int  remainder1 = 0, remainder2 =0 , remainder3 = 0;
        int q_quotient = 0 , d_quotient = 0 , n_quotient = 0 , p_quotient = 0;
      
    if (i >= 25) // calculating quaters
    {
      remainder1 = i % 25;
      q_quotient = i / 25;
    }
     
    if (remainder1 >= 10) // calculating dimes
    {
      remainder2 = remainder1 % 10;
      d_quotient = remainder1 /10;
    }
        else if(i >10 && i < 25) // if input value is less than 0.25
        {
          remainder2 = i % 10;
          d_quotient = i/10;
        }
      
    if (remainder2 >= 5) // calculating nickels
    {
     remainder3 = remainder2 % 5;
     n_quotient = remainder2/5;
     }
         else if ((remainder1 >=5) && (remainder1<10)) // if input value does not include any dimes
         {
             remainder3 = remainder1 % 5;
             n_quotient = remainder1/5;
         }
     
        else if (i>=5 && i<10) // if input value is less than 0.10 and greater than or equal to 0.05
        {
             remainder3 = i % 5;
             n_quotient = i/5;
        }
    p_quotient = i - ((25*q_quotient)+(10*d_quotient)+(5*n_quotient)); // calculating pennis
     
    printf("%i\n", q_quotient+d_quotient+n_quotient+p_quotient);
      
}
