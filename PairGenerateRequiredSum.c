#include <stdio.h>

int main()
{
    int arr[1000] = {0}, arrSize, reqSum;

    scanf("%d", &arrSize);

    for(int i=0; i<arrSize; i++) scanf("%d", &arr[i]);

    scanf("%d", &reqSum);

    for(int i=0; i<arrSize-1; i++)
    {
        for(int j=i+1; j<arrSize; j++) if(arr[i]+arr[j]==reqSum) printf("%d = %d + %d\n", reqSum, arr[i], arr[j]);
    }

    return 0;
}