#include<iostream>
using namespace std;

int *bubblesort(int *a , int len)
{
    for(int i=0;i<len-1;i++)
    {
        int flag =0;
        for(int j=0;j<len-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j+1];
                a[j+1]=a[j];
                a[j]= temp;
                flag=1;
            }
            if(flag==0)
            break;
        }
       


    }
     
    
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