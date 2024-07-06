#include <stdio.h>

int main()
{
    int arr[100] = {0}, arrLimit;
    
    printf("Enter the no of array elements [ 1 to 100 ] :  ");
    scanf("%d", &arrLimit);
    
    // taking inputs for array
    for (int i=0; i<=arrLimit-1; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for (int i=0; i<=(arrLimit-1)/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[arrLimit-1-i];
        arr[arrLimit-1-i] = temp;
    }
    
    //printing reverse array
    printf("\nReverse Array : ");
    for (int i=0; i<=arrLimit-1; i++) printf("\t%d", arr[i]);
    
    return 0;
}