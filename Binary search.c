#include<stdio.h>

int binary_search(int arr[], int n, int low, int high, int value)
{
    if(high<low)
    {
        return -1;
    }

    int mid=(low+high)/2;

    if(arr[mid]==value)
    {
        return mid;
    }

    if(value>arr[mid])
    {
        return binary_search(arr, n, mid+1, high, value);
    }

    return binary_search(arr, n, low, mid-1, value);


}

void bubble_sort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

}

int main()
{
    int sz;
    int flag, search_value;

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

    int low=0;
    int high=sz-1;

    printf("Enter a value to search: ");
    scanf("%d",&search_value);

    bubble_sort(arr, sz);

    flag = binary_search(arr, sz, low, high, search_value);
    printf("\n\n");

    if(flag==-1)
    {
        printf("value was not found\n");
    }
    else
    {
        printf("Value was found at[%d]",flag);
    }
    printf("\n");


    return 0;
}
