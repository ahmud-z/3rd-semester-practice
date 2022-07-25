#include<stdio.h>

int linear_search(int arr[], int n, int value)
{
    int flag=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==value)
        {
            flag=1;
        }
    }

    return flag;
}

int main()
{
    int sz;
    int flag=0, search_value;

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

    printf("Enter a value to search: ");
    scanf("%d",&search_value);

    flag = linear_search(arr, sz, search_value);

    if(flag==1)
    {
        printf("Given value exist in array");
    }
    else
    {
        printf("Given value not found");
    }
    printf("\n");

    return 0;
}
