#include <stdio.h>


void my_qsort(int* str, int n)
{
    int i = 0;
    int j = 0;
    int sum = 0;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i; j < n; j++)
        {
            if (str[i] > str[j])
            {
                sum = str[i];
                str[i] = str[j];
                str[j] = sum;
            }
        }
    }
}

int main()
{
    int arr[10] = { 3,5,1,11,99,66,22,2,8,6 };
    my_qsort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

	return 0;
}