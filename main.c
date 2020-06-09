/*
* Author : Kasra bozorgmehr (کسری بزرگمهر)
* Date : 2020-06-10 (۱۳۹۹/۰۳/۲۱)
* Student id : 980291611
* email : bo.kasra79@gmail.com
*
* this program will create rhombus inside a N by N rectangle
* which N is an integer taken from user.
*
* این برنامه یک لوزی درون یک مربع N در N میسازد که N
* یک عدد صحیح است که از کاربر گرفته میشود
*/
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int getUserInput();
void printShape(int num);

int main()
{
    printShape(getUserInput());
    return 0;
}

// This function will take user input
int getUserInput()
{
    printf("Please enter a number: ");
    int num;
    scanf("%d", &num);

    return num;
}

// This function will print proper shape
void printShape(int num)
{
    int half;
    int half_index;
    if (num % 2 == 0) // even num
    {
        half = num / 2;
        half_index = half - 1;

        for (int row = 0; row < num; row++)
        {
            for (int col = 0; col < num; col++)
            {
                if (row == 0 || row == num -1) // Top and down border
                {
                    printf(" * ");
                    continue;
                }
                if (col == 0 || col == num -1) // Right and left border
                {
                    printf(" * ");
                    continue;
                }
                if (col == half_index + 1 - row ||
                        col == row + half_index ||
                        col == row - half_index ||
                        col == num + half_index - 1 - row) // Rhombus
                    {
                        printf(" * ");
                        continue;
                    }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }
    else // odd num
    {
        num += 1;
        half = num / 2;
        half_index = half - 1;
        num -= 1;

        for (int row = 0; row < num; row++)
        {
            for (int col = 0; col < num; col++)
            {
                if (row == 0 || row == num -1) // Top and down border
                {
                    printf(" * ");
                    continue;
                }
                if (col == 0 || col == num -1) // Right and left border
                {
                    printf(" * ");
                    continue;
                }
                if (col == half_index - row ||
                    col == row + half_index ||
                    col == row - half_index ||
                    col == num + half_index - 1 - row) // Rhombus
                {
                    printf(" * ");
                    continue;
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }

}
