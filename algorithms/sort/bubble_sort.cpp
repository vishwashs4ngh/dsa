#include<iostream>
using namespace std;

int *bubblesort(int *a , int len)
{
    int comparisons=0;
    int swaps=0;
    for(int i=0;i<len-1;i++)
    {
        comparisons++;
        int flag =0;
        for(int j=0;j<len-1-i;j++)
        {
        
            if(a[j]>a[j+1])
            {
                int temp = a[j+1];
                a[j+1]=a[j];
                a[j]= temp;
                flag=1;
                
                swaps++;
            }
            if(flag==0)
            break;
        }
       


    }
     cout<<comparisons<<endl;
     cout<<swaps<<endl;
    
return a;

}

void printlist(int *a,int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<" "<<a[i];
    }
}


int main()
{
  int n =5;
  int a[5]={5,4,3,2,1};
 bubblesort(a,n);
printlist(a,n);

 return 0;
}