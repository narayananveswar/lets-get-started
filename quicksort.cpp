#include<iostream>
using namespace std;

void quickSort(int arr[10], int low, int high)
{
    int pivert = arr[low];
    int i = low+1, j = high;
    int temp;

    while (i<j)
    {
        while(pivert > arr[i])
        {
            i++;
        }
        while(pivert < arr[j])
        {
            j--;
        }
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;   
    }
    arr[low] = arr[i];
    arr[i] = pivert;
    quickSort(arr, low, i-1);
    quickSort(arr, i+1, high);
    for(i=0;i<high;i++)
    {
        cout<<arr[i];
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
    quickSort(array, 0, noOfEle);
}