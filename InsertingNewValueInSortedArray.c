#include <stdio.h>

int main()
{
    int arr[1000]={0}, arrSize, newEle, indexNewEle;

    scanf("%d", &arrSize);

    for(int i=0; i<arrSize; i++) scanf("%d", &arr[i]);

    scanf("%d", &newEle);
    
    printf("\nBefore Insertion :\n");
    for(int i=0; i<arrSize; i++) 
    {
        printf("%d  ",arr[i]);
        if(newEle>arr[i] && newEle<arr[i+1]) indexNewEle=i+1;
    }
    
    //inserting element
    for(int i=0, j=arrSize; j>=indexNewEle; i++,j--)
    {
        arr[arrSize-i] = arr[arrSize-i-1];
    }

    arr[indexNewEle] = newEle;

    printf("\nAfter Insertion :\n");
    for(int i=0; i<=arrSize; i++) printf("%d  ",arr[i]);

    return 0;
}