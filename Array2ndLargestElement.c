#include <stdio.h>

int main()
{
    int arr[100] = {0}, arrLimit;

    scanf("%d", &arrLimit);

    for(int i=0; i<arrLimit; i++) scanf("%d", &arr[i]);

    //sorting the array
    for(int i=0; i<arrLimit-1; i++)
    {
        for(int j=i+1; j<arrLimit; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("\nSorted Array : ");
    for(int i=0; i<arrLimit; i++) printf("%d\t", arr[i]);

    printf("\n2nd largest element : ");

    for(int i=arrLimit-1; i>=0; i--)
    {
        if (arr[i]!=arr[i-1]) { printf("%d", arr[i-1]); break; }
    }

    return 0;
}