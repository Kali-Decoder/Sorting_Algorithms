#include<bits/stdc++.h>
using namespace std;
void mergefn(int a[],int lb,int mid,int ub)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[ub-lb+1];
    while(i<=mid && j<=ub)
    {
        if(a[i]<=b[j])
        {
            
            b[k]=a[i];
            i++;
            
        }
        else{
            
            b[k]=a[j];
            j++;
            
        }
        k++;

    }
    if(i>mid)
    {
        while(j<=ub){
            b[k]=a[j];
            j++;k++;
        }
        
    }
    else{
        while(i<=mid)
        {
            b[k]=a[i];
            i++;k++;
        }
    }
    for(int m=0;m<10;m++)
    {
        a[m]=b[m];
    }
    for(int m=0;m<10;m++)
    {
        cout<<a[m]<<" ";
    }
}
void mergeSort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        mergefn(a,lb,mid,ub);
    }
}

int main()
{   
    int a[]={12,45,3,7,54,31,0,-3,56,123};
    int n=10;
    int lb=0,ub=n-1;
    mergeSort(a,lb,ub);
    return 0;
}