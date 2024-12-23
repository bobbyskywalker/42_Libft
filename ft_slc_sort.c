#include "libft.h"

void ft_slc_sort(int *arr, int len)
{
    int min;
    int tmp;
    int i;
    int j;

    i = 0;
    while (i < len)
    {
        min = i;
        j = i + 1;
        while (j < len)
        {
            if (arr[j] < arr[min])
                min = j;
            j++;
        }
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
        i++;
    }
}