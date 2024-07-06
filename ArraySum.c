#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[1000] = {0}, arrLimit, sum=0;
    
        
    printf("Enter the no of array elements [ 1 to 100 ] :  ");
    scanf("%d", &arrLimit);
    
    for (int i=0; i<=arrLimit-1; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("\nSum of array : %d", sum);

    return 0;
}