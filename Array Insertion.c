#include<stdio.h>

void array_insertion(int arr[], int sz, int value, int position)
{
    for(int i=sz; i>position; i--)
    {
        arr[i]=arr[i-1];
    }

    arr[position]=value;


    for(int i=0; i<sz; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int sz,value,position;

    printf("Enter array size: ");
    scanf("%d",&sz);
    printf("\n");

    int arr[sz];

    for(int i=0; i<sz-1; i++)
    {
        printf("Enter value in index[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");

    printf("Enter value to insert: ");
    scanf("%d",&value);
    printf("Enter index position: ");
    scanf("%d",&position);
    printf("\n");

    array_insertion(arr,sz,value,position);
    printf("\n");

    return 0;
}
