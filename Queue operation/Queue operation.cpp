#include<iostream>
using namespace std;
int main()
{
    int count, temp, j, array[30];
    printf("How many numbers are u going to enter?: ");
    scanf_s("%d", &count);
    printf("Enter %d numbers: ", count);
    for (int i = 0; i < count; i++)
        scanf_s("%d", &array[i]);
    /* This is the main logic of bubble sort algorithm */
    for (int i = count - 2; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Sorted elements: ");
    for (int i = 0; i < count; i++)
        printf(" %d", array[i]);
    return 0;
}