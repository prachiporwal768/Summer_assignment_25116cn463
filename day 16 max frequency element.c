#include <stdio.h>

int main()
{
    int n, i, j, maxFreq = 0, freq, element;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        freq = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                freq++;
            }
        }

        if(freq > maxFreq)
        {
            maxFreq = freq;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d", maxFreq);

    return 0;
}