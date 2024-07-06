#include<stdio.h>

int main()
{
    int arr[100]={0}, arrLimit;

    printf("Enter the total no of elements for array :");
    scanf("%d", &arrLimit);

    for(int i=0; i<arrLimit; i++) 
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    int maxArr= arr[0], minArr = arr[0];

    for(int i=1; i<arrLimit; i++)
    {
        if ( maxArr<arr[i] ) maxArr = arr[i];
        if ( minArr>arr[i] ) minArr = arr[i];
    }

    printf("\nMaximum element : %d\nMinimum element : %d", maxArr, minArr);

    return 0;
}