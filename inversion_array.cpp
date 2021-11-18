// count inversion in array means i<j && a[i]>a[j] 
#include<bits/stdc++.h>
using namespace std;
int count_inversion1(int a[],int n)
{   int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                res++;
            }
        }

    }
    return res;
}
// by using merge sort function 
int count_merge(int a[],int l,int mid ,int h)
{
    int n1=mid-l+1;
    int n2=h-mid;
    int left[n1], right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=a[i+l];
    }
    for(int i=0;i<n1;i++)
    {
        right[i]=a[i+mid+1];
    }
    int res=0,k=l,i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {   
            a[k]=left[i];
            i++;

        }
        else
        {   
            a[k]=right[j];
            j++;
            res+=(n1-i);

        }
        k++;
    }
    while(i<n1)
    {
        a[k]=left[i];
        i++;k++;
    }
    while(j<n2)
    {
        a[k]=right[j];
        j++;k++;
    }
    return res;
}
int countInv(int a[],int l,int h)
{
    int res=0;
    if(l<h)
    {   int mid=(l+h)/2;
        res+=countInv(a,l,mid);
        res+=countInv(a,mid+1,h);
        res+=count_merge(a,l,mid,h);
    }
    return res;
}
int main()
{   
    int a[]={2,4,3,1,5};
    int n=5;
    cout<<count_inversion1(a,n);
    return 0;
}
