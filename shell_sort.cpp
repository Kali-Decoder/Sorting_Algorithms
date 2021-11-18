#include<bits/stdc++.h>
using namespace std;
void shellSort(int a[],int n)
{
    for(int gap=n/2;gap>=1;gap=n/2)
    {
        for(int j=gap;j<n;j++)
        {
            for(int i=j-gap;i>=0;i=i-gap)
            {
                if(a[i+gap]>a[i])
                break;
                else
                {
                    swap(a[i+gap],a[i]);
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{   
    int a[]={0,3,2,10,5,4,7,9,4,3,3,4,5};
    int n=13;
    shellSort(a,n);
    return 0;
}