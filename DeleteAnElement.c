#include <stdio.h>

int main()
{
    int arr[1000]={0}, arrSize, delPos;

    printf("Enter size of array : ");
    scanf("%d", &arrSize);

    printf("Enter elements : \n");
    for(int i=0; i<arrSize; i++) scanf("%d", &arr[i]);

    printf("Enter position to delete : ");
    scanf("%d", &delPos);

    for(int i=delPos-1; i<arrSize-1; i++) arr[i] = arr[i+1];

    printf("New Array : \n");
    for(int i=0; i<arrSize-1; i++) printf("%d  ", arr[i]);
}