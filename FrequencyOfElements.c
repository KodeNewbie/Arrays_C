#include <stdio.h>

int main()
{
    int arr1[1000]={0}, arrSize, arr2[1000]={0};

    printf("Enter size of array : ");
    scanf("%d", &arrSize);

    printf("Enter elements : \n");
    for(int i=0; i<arrSize; i++) scanf("%d", &arr1[i]);

    //finding frequency
    for(int i=0; i<arrSize-1; i++)
    {
        int count=1;
        for(int j=i+1; j<arrSize; j++)
        {
            if (arr1[i]==arr1[j] && arr2[i]!=-1)
            {
                count++;
                arr2[j] = -1;
            }
        }
        if (arr2[i]!=-1) 
        {
            arr2[i] = count;
            printf("%d occurs %d times\n", arr1[i], arr2[i]);
        }
    }

    return 0;
}