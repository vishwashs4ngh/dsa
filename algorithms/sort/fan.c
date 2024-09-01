#include<stdio.h>
#include<stdlib.h>



 int * bubblesort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
       for (int j = 0; j < size ; i++)
       {
        if (arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }
        
       }
       
    }
      
    return arr;

    
    
}
    int main()
{
   

    int arr[]={7,3,8,6,1};

    bubblesort(arr,5);
for (int i = 0; i < 5; i++)
{
    printf(" %d  ",arr[i]);



}


return 0;
}