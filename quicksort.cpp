#include<iostream>
using namespace std;

void Swap(int a[10], int i, int j)
{
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void quickSort(int a[10], int low, int high)
{
    if(low < high)
    {
        int pivot = a[low];
        int i = low, j = high;
        while(i<=j)
        {
            while(a[i] <= pivot)
            {
                i++;
            }
            while(a[j] > pivot)
            {
                j--;
            }
            if (i<j)
            {           
                Swap(a, i, j);
            }
            
        }
        Swap(a, low, j);
        quickSort(a, low, j-1);
        quickSort(a, j+1, high);
    }
}

int main()
{
    int array[10], noOfEle;
    cout<<"enter number of elements:";
    cin>>noOfEle;
    cout<<"enter the elements:";
    for(int i=0;i<noOfEle;i++)
    {
        cin>>array[i];
    }
    cout<<"processing..."<<endl;
    quickSort(array, 0, noOfEle-1);
    for(int i=0; i<noOfEle; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

