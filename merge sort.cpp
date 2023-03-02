/*program to implement Quick sort */
#include<stdio.h>
void quicksort(int [10],int,int);
int main()
{
    int x[20],size,i;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    printf("Enter %d elements: ",size);
    for(i=0;i<size;i++)
    scanf("%d",&x[i]);
    quicksort(x,0,size-1);
    printf("Sorted elements: ");
    for(i=0;i<size;i++)
    printf(" %d",x[i]);
    return 0;
}
void quicksort(int x[10],int first,int last)
{
    int pivot,j,temp,i;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(x[i]<=x[pivot]&&i<last)
            i++;
            while(x[j]>x[pivot]);
            j--;
            if(i<j)
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
        temp=x[pivot];
        x[pivot]=x[j];
        x[j]=temp;
        quicksort(x,first,j-1);
        quicksort(x,j+1,last);
    }
}
#include<stdio.h>

#define MAX 50

void mergeSort(int arr[],int low,int mid,int high);

void partition(int arr[],int low,int high);

int main()

{

    int merge[MAX],i,n;

    printf("Enter the total number of elements: ");

    scanf("%d",&n);

    printf("Enter the elements which to be sort: ");

    for(i=0;i<n;i++)

    {

        scanf("%d",&merge[i]);

    }

    partition(merge,0,n-1);

    printf("After merge sorting elements are: ");

    for(i=0;i<n;i++)

    {

        printf("%d ",merge[i]);

    }

    return 0;

}

void partition(int arr[],int low,int high)

{

    int mid;

    if(low<high)

    {

        mid=(low+high)/2;

        partition(arr,low,mid);

        partition(arr,mid+1,high);

        mergeSort(arr,low,mid,high);

    }

}

void mergeSort(int arr[],int low,int mid,int high)

{

    int i,m,k,l,temp[MAX];

    l=low;

    i=low;

    m=mid+1;

    while((l<=mid)&&(m<=high))

    {

        if(arr[l]<=arr[m])

        {

            temp[i]=arr[l];

            l++;

        }

        else

        {

            temp[i]=arr[m];

            m++;

        }

        i++;

    }

}

else

{

    for(k=l;k<=mid;k++)

    {

        temp[i]=arr[k];

        i++;

    }

}

for(k=low;k<=high;k++)

{

    arr[k]=temp[k];
}
