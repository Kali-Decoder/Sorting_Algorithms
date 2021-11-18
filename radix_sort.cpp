#include<bits/stdc++.h>
using namespace std;
void counting_Sort(int a[],int n,int pass)
{
    int count[10]={0};
    for(int i=0;i<n;i++)
    {
        ++count[(a[i]/pass)%10];
    }
    for(int i=1;i<=9;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    int b[n];
    for(int i=n-1;i>=0;i--)
    {
        b[--count[(a[i]/pass)%10]]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
    
}
void radix_sort(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    for(int pass=1;max/pass>0;pass*=10)
    {
        counting_Sort(arr,n,pass);
    }
}
int main()
{   
    int a[]={123,45,32,456,56,34,9,10,900};
    int n=9;
    radix_sort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}