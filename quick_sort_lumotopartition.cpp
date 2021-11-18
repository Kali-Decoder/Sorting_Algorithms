#include<iostream>
using namespace std;
int lumotoPartition(int a[],int l,int h)
{
    int i=l-1;
   
    int pivot=a[h];
    for(int j=l;j<=h-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);

        }
    }
    swap(a[i+1],pivot);
    return i+1;
}
void qSort(int a[],int l,int h)
{
    if(l<h)
    {
        int pivot=lumotoPartition(a,l,h);
        qSort(a,l,pivot-1);
        qSort(a,pivot+1,h);
    }
}
int main()
{   
    int a[]={2,12,3,-98,45,345};
    int n=6;
    qSort(a,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}