#include<bits/stdc++.h>
using namespace std;
void sorting(int a[],int low,int mid,int high)
{
    int n1=mid-low+1,n2=high-mid ;
    int left[n1],right[n2];

    for(int i=low;i<n1;i++)
    {
        left[i]=a[i+low];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=a[i+ n1];
    }
    int i=0,j=0,k=0; 
    while(i<n1 && j<n2 )
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];
            i++;
            k++;
        }

        else
        {
            a[k]=right[j];
            j++;
            k++;
        }

    }
    while(i<n1)
    {
        a[k]=left[i];
            i++;
            k++;
    }
    while(j<n2)
    {
        a[k]=right[j];
            j++;
            k++;
    }

    for(int i=0;i<n1+n2;i++)
    {
        cout<<a[i]<<" ";
    }
    

}

int main()
{   int arr[]={10,20,30,20,40};
    int n=5;
    sorting(arr,0,2,n-1);
    return 0;
}