#include<bits/stdc++.h>
using namespace std;
// best case theta n and worst case theta n square 
// bigo n^2 
void insertion_sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{   
    int arr[]{2,5,6,3,42,45,67,89};
    int n=8;
    insertion_sort(arr,n);
    return 0;
}