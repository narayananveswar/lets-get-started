#include<iostream>
using namespace std;

void merge(int a[10], int low, int mid, int high)
{
    int b[10], i, j, k;
    i = k = low;
    j = mid;
    while(i<mid && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while(j<=high)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    while(i<mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    for(i=0;i<high; i++)
    {
        a[i] = b[i];
    }
}

int main()
{
    int a[] = {1,3,5,2,4,6}, noOfEle = 6;
    int mid = (0+5)/2;

    merge(a, 0, mid+1, 5);
    for(int i=0;i<noOfEle;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}