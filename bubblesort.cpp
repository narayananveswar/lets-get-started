#include<iostream>
using namespace std;

void bubbleSort(int arr[10], int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            
        }
    }
    cout<<"the sorted array is:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    bubbleSort(array, noOfEle);
}