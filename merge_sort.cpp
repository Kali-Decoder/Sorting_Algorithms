#include <bits/stdc++.h>

using namespace std;
// naive solution
void merge_sort(int a[], int b[], int n, int m)
{
    int c[m + n];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        c[n + i] = b[i];
    }
    sort(c, c + m + n);

    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }
}
// better solution
void merge_method(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] <<" ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }

    }
    while(i<n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    while(j<m)
    {
        cout<<b[j]<<" ";
        j++;
    }

    
}
int main()
{
    int a[] = {2, 3, 4, 5, 6, 7};
    int b[] = {11, 23, 34, 56, 67, 89, 90, 91};
    int n = 6, m = 8;
    merge_method(a, b, n, m);
    return 0;
}