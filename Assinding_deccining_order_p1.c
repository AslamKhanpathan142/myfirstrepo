#include<stdio.h>
int main()
{
    int arr[100];
    int i, j, n, temp;
    printf("enter the array size: ");
    scanf("%d", &n);
    for(i = 0; i <n; i++)
    {
        printf("Enter the array: ");
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
           
        }
    }
    printf("assending order\n");
    for(i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }


    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
           
        }
    }
    printf("\ndessending order\n");
    for(i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }

    return 0;
}