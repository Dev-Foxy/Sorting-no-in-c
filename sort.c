#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, random, temp, flag;
    int list[100];

    srand(time(NULL)); // for generating random no in the list

    printf("Before sorting...\n");
    for (i = 0; i < 100; i++)
    {
        random = rand() % 100; // to generate random no between 1 to 100
        list[i] = random;      // adding that random value to the list
    }

    for (i = 0; i < 100; i++)
    {
        printf("%d\n", list[i]); // printing the list before sorting it
    }

    printf("After sorting...\n");
    for (i = 0; i < 99; i++)
    {
        flag = 0;
        for (j = i; j < 100; j++)
        {
            if (list[i] > list[j])
            {
                temp = list[i];    // swapping value
                list[i] = list[j]; // swapping value
                list[j] = temp;    // swapping value
            }
            flag = 1;
        }
        if (flag == 0)
        {
            break; // terminating the loop when the list is sorted
        }
    }

    for (i = 0; i < 100; i++)
    {
        printf("%d\n", list[i]); // printing the sorted list
    }

    return 0;
}