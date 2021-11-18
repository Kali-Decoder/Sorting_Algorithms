#include<iostream>
using namespace std;

int getPivot(int a[],int l,int h)
{
   int start=l-1;
//    int end=h-1;
   int pivot =a[h];

for(int j=l;j<h;j++)
{
    if(a[j]<=pivot)
    {
        start++;
        swap(a[start],a[j]);
    }
}
swap(a[start+1],pivot);
return start+1;

}
void qSort(int a[],int l,int h)
{
    if(l<h)
    {
        int p=getPivot( a, l, h);
        qSort(a,l,p-1);
        qSort(a,p+1,h);

    }
}
int main()
{   
    int a[] = {8, 7, 6, 1, 0, 9, 2};
  int n = sizeof(a) / sizeof(a[0]);
    qSort(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}