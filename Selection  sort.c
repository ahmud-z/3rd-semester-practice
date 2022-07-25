#include<stdio.h>

void selection_sort(int arr[], int n)
{

    for(int i=0; i<n; i++)
    {
        int small=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[small])
            {
                small=j;
            }
        }

        int temp =arr[i];
        arr[i]=arr[small];
        arr[small]=temp;
    }

}

void print_array(int arr[], int sz)
{
    for(int i=0; i<sz; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
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


    selection_sort(arr, sz);

    printf("sorted Elements: ");

    print_array(arr,sz);

}
