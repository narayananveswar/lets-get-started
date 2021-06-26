#include<iostream>
using namespace std;

void merge(int a[10], int low, int mid, int high)
{
    int b[10], i, j, k;
    i = k = low;
    j = mid + 1;
    while(i<=mid && j<=high)
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
        k++;
        j++;
    }
    while(i<=mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    for(i=low;i<=high; i++)
    {
        a[i] = b[i];
    }
}
void mergeSort(int a[10], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

int main()
{
    int a[] = {38, 27, 43, 3, 9, 82, 10}, noOfEle = 7;
    mergeSort(a, 0, 6);
    for(int i=0;i<noOfEle;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}