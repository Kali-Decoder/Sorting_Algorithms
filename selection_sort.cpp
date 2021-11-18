#include<bits/stdc++.h>
using namespace std;
// method1 
// void selection_sort(int a[],int n)
// {
//     int temp[n];
//     int min_idx=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=1;j<n;j++)
//         {
//             if(a[j]<a[min_idx])
//             {
//                 min_idx=j;
               
//             }

//         }
//         temp[i]=a[min_idx];
//         a[min_idx]=INFINITY;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<endl;
//     }

// }
// method 2

void method2(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_idx])
            min_idx=j;           
        }
        swap(a[i],a[min_idx]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{   
    int arr[]{2,5,6,3,42,45,67,89};
    int n=8;
    method2(arr,n);
    return 0;
}