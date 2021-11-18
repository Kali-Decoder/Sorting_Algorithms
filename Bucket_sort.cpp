#include<bits/stdc++.h>
using namespace std;
void bucket_sort(int arr[],int n,int k)
{
    int max_ele=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max_ele<arr[i])
        max_ele=arr[i];
    }
    max_ele++;
    vector<int> bkt[k];
    // dividing array in buckets 
    for(int i=0;i<n;i++)
    {
        int bi=(arr[i]*k)/max_ele;
        bkt[bi].push_back(arr[i]);
    }
    // sorting each bucket individually 
    for(int i=0;i<k;i++)
    {
        sort(bkt[i].begin(),bkt[i].end());
    }
    // now merge all buckets 
    int idx=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<bkt[i].size();j++)
        {
            arr[idx++]=bkt[i][j];
        }
    }
}
int main()
{   
    int arr[]={30,40,5,10,80,12,70};
    int n= 7;
    int k=4;
    bucket_sort(arr,n,k);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}