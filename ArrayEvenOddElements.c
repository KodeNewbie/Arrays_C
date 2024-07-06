#include <stdio.h>

int main()
{
    int arr[100]={0}, arrLimit;

    printf("Enter size of array : ");
    scanf("%d", &arrLimit);

    for(int i=0; i<arrLimit; i++) 
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nEven elements : ");
    for(int i=0; i<arrLimit; i++) if(arr[i]%2==0) printf("%d\t",arr[i]);

    printf("\nOdd elements  : ");
    for(int i=0; i<arrLimit; i++) if(arr[i]%2!=0) printf("%d\t",arr[i]);

    return 0;
}