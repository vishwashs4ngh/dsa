#include<iostream>
using namespace std;


// int linear_search(int* a,int len)
// {
//     int i;
//     int y=0;
//    int count=0;
//    int x[len];
//    for(int i=0;i<len;i++)
//    {
//         x[len]= y+a[i];
//    }
// }


int main()
{
    int N;
    cin>>N;
    int a[N];
    int b[N];
    int y=0;
    int count=0;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    // int linear_search(a,N);

    for(int i=0;i<N;i++)
    {
        b[N]=y+a[i];
        count++;
    }

   cout<<"Elements are:"<<count;
    return 0;
    
    
    
}