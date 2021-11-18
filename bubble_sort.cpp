// all sorting algorithm 
// bubble sort comes unders the category
//  of stable sort because it does not change past array alignment 
// Bubble sort 

#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n)
{
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

// method 2
// reduce time 
void bubbleSort(int arr[],int n)
{
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-j-1;i++)
        {
            if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
// method 3 

void method3(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
}
int main()
{   
    int arr[]{2,5,6,3,42,45,67,89};
    int n=8;
    bubbleSort(arr,n);
    return 0;
}