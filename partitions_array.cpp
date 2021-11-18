// three types of partitions lumoto ,naive ,hoare partions 
#include<bits/stdc++.h>
using namespace std;
// first Naive partiton 

void naive_solution(int arr[],int l,int h)
{
    int pivot=arr[l];
    int start=l;
    int end=h;
    int temp[end-start+1];int k=0;
    for(int i=start;i<=end;i++)
    {
        if(arr[i]<=pivot)
        {
            temp[k]=arr[i];
            k++;
        }
    }
    for(int i=start;i<=end;i++)
    {
        if(arr[i]>pivot)
        {
            temp[k]=arr[i];
            k++;
        }
    }
    for(int i=start;i<=end;i++)
    {
        arr[i]=temp[i-l];
    }
}
// in lumoto partition we choose last elementt as pivot element 

int lumoto_partition(int a[],int l,int h)
{
    int pivot=a[h];
    int i=l-1;
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

// in hoare partition we choose first element as pivot element 
int hoare_partition(int a[],int l,int h)
{
    int pivot=a[l];
    int i=l-1;
    int j=h+1;
    while(true)
    {
        do{
            i++;
        }while(a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i>=j)return j;

        swap(a[i],a[j]);
    }
}
int main()
{
    return 0;
}