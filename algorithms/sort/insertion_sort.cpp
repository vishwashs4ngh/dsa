#include<bits/stdc++.h>
using namespace std;\


int insertionsort(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        int temp=A[i];
        int j=i-1;
        while(j>=0 && A[j]>temp)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }
    return *A;
}

void display(int *A,int n)
{
   for(int i=0;i<n;i++)
   {
    printf("%d  ",A[i]);
   }
   printf("\n");
}

int main()
{
      int A[]={5,4,10,1,6,2};
      int n=6;

      printf("Array before swapping:\n");
      display(A,n);
      insertionsort(A,n);
      printf("Array after swapping:\n");
      display(A,n);

      return 0;


}