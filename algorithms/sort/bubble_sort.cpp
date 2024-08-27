#include<bits/stdc++.h>
using namespace std;

void displaylist(int A[],int n)
{
      
    for(int i=0;i<n;i++)
    {
         cout<<A[i]<<" ";
    }
    cout<<endl;
}

int *bubblesort(int A[],int n)
{
    int passes=0;
    int comparisons=0;
    for(int i=0;i<n-1;i++)
    {
        passes++;
        for(int j=0;j<n-1-i;j++)
        {
            
            if(A[j]>A[j+1])
            {
                int temp = A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
                comparisons++;
            }
           

        }
        if(passes==0)
        {
            cout<<passes<<endl;
            return A;
        }
       

    }
     cout<<"Passes: "<<passes<<endl;
     cout<<"Comparisons : "<<comparisons<<endl;
     cout<<"Array after sorting:"<<endl;
    return A;
    
}

 int main()
  {
    int N=6;
    int A[N]={7,11,9,2,17,4};
    // int A[N]={1,2,3,4,5,6};

    cout<<"Array before sorting:"<<endl;
    displaylist(A,N);

  
    bubblesort(A,N);
    displaylist(A,N);

    return 0;
}  