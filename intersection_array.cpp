#include<bits/stdc++.h>
using namespace std;
void intersect(int a[],int b[],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        if(i>0 && a[i]==a[i-1])
    {
        continue;
    }
    for(int j=0;j<n;j++)
    {
        if(a[i]==b[j])
        {
            cout<<a[j]<<" ";
            break;
        }
    }
    }
}
void method2(int a[],int b[],int m,int n)
{   int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1])
        i++;

        
            if(a[i]<b[j])
            {
                i++;continue;
            }

            if(b[j]<a[i])
            j++;

            if(a[i]==b[j])
            {   
                cout<<a[i]<<" ";
                i++;j++;
            }
        
    }
}
int main()
{   
    int a[]={1,20,20,40,60};
    int b[]={1,20,20,20};
    int m=5,n=4;
    method2(a,b,m,n);
    return 0;
}