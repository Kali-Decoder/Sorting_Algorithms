#include<bits/stdc++.h>
using namespace std;
void union_array(int a[],int b[],int n,int m)
{   int i=0,j=0;

    while(i<n && j<m)
    {
        if(i>0 && a[i]==a[i-1])
        {   i++;
            continue;
        }
        if(j>0 && b[j]==b[j-1])
        {   j++;
            continue;
        }
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        if(b[j]<a[i])
        {
            cout<<b[j]<<" ";
            j++;
        }
        if(b[j]==a[i])
        {
            cout<<b[j]<<" ";
            j++;i++;
        }
    }
    while(i<n)
    {
        if(i>0 && a[i]!=a[i-1])
        {  
            cout<<a[i]<<" ";
             i++;
            
        }
    }
    while(j<n)
    {
         if(j>0 && b[j]!=b[j-1])
        {       
            cout<<b[j]<<" ";
            j++;
            
        }
    }
}
void union_method1(int a[],int b[],int n,int m )
{
    int c[m+n];
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<m;j++)
    {
        c[n+j]=b[j];
    }
    sort(c,c+m+n);
    for(int i=0;i<m+n;i++)
    {
        if(i==0 || c[i]!=c[i-1])
        cout<<c[i]<<" ";
    }
}
int main()
{   
    int a[]={3,5,8};
    int b[]={2,8,9,10,15};
    int n=3;
    int m=5;
    union_array(a,b,n,m);
    return 0;
}