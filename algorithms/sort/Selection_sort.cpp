#include<iostream>
using namespace std;

int selectionsort(int *A,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[minIndex]>A[j])
            minIndex=j;
        }
        int temp=A[i];
        A[i]=A[minIndex];
        A[minIndex]=temp;


    }
    return *A;
    



}
void display(int *A, int n){
    
    for(int i=0;i<n;i++)
    {
         printf("%d  ",A[i]);
     }
     printf("\n");
   
}


int main()
{
    int A[]={3,5,2,13,12};
    int n=5;
printf("Array before swaping:\n");
    display(A,n);
    selectionsort(A,n);
    printf("Array after swaping:\n");
    display(A,n);

    return 0;
}
