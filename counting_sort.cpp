#include<bits/stdc++.h>
using namespace std;
void  countSort(int  arr[],int n)
{   
    
    int max=arr[0];
    int k;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    k=max;
    cout<<k<<endl;
    int count[k+1]={0};
    for(int i=0;i<n;i++)
    {
        ++count[arr[i]];//count frequency of number 
    }
    
    // update count array 
    for(int i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    int b[n];
    for(int i=n-1;i>=0;i--)
    {
        b[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=b[i]; //copying element in arr from b
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{   
    int a[]={0,3,2,10,5,4,7,9,4,3,3,4,5};
    int n=13;
    countSort(a,n);
    return 0;
}