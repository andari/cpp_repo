#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solution(int A[], int N)
{
    //add a comment for git 
    // write your code in C99 (gcc 6.2.0)
    //add another comment
    int missing = 0;
    int max = 0;
    int min = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            printf("MIN: %d\n", max);
        }
    }
    int max_missing[max - 1];

    for (int i = 0; i < N; i++)
    {
        max_missing[A[i]] = 1;
    }
    for (int i = 1; i < N + 1; i++)
    {
        printf("i: %d %d\n", i, max_missing[i]);
        if (max_missing[i] != 1)
        {
            return i;
        }
    }
}

int main()
{
    int A[] = {1, 5, 6, 4, 1, 2};
    int result = solution(A, 6);
    printf("Result: %d", result);
}
