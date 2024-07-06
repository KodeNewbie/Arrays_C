#include <stdio.h>

int main()
{
    int arr[1000]={0}, arrSize, delEle, delCount=0;

    scanf("%d", &arrSize);

    for(int i=0; i<arrSize; i++) scanf("%d", &arr[i]);

    scanf("%d", &delEle);
    
    printf("\nBefore Deleting :\n");
    for(int i=0; i<arrSize; i++) printf("%d  ",arr[i]);

    for(int i=0; i<arrSize; i++)
    {
        if (arr[i]==delEle)
        {
            for(int j=i; j<arrSize; j++) arr[j] = arr[j+1];
            delCount++;
            i--;
        }
    }

    printf("\nAfter Deleting :\n");
    for(int i=0; i<arrSize-delCount; i++) printf("%d  ",arr[i]);

    return 0;
}