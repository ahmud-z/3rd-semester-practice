#include<stdio.h>

void array_deletion(int arr[], int sz, int value)
{
    int index;

    for(int i=0; i<sz; i++)
    {
        if(arr[i]==value)
        {
            index=i;
        }
    }

    for(int i=index; i<sz; i++)
    {
        arr[i]=arr[i+1];
    }

    for(int i=0; i<sz-1; i++)
    {
        printf("%d ",arr[i]);
    }

}

int main()
{
    int sz,value;


    printf("Enter array size: ");
    scanf("%d",&sz);
    printf("\n");

    int arr[sz];

    for(int i=0; i<sz; i++)
    {
        printf("Enter value in index[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");

    printf("Enter a value to delete: ");
    scanf("%d",&value);
    printf("\n");

    printf("After given element deletion: ");

    array_deletion(arr, sz, value);
    printf("\n");

    return 0;
}
