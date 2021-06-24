#include<iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    int i, minPos, temp;

    for(i=0;i<n;i++)
    {
        minPos = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[minPos]>a[j])
            {
                minPos = j;
            }
        }
        temp = a[i];
        a[i] = a[minPos];
        a[minPos] = temp; 
    }
    cout<<"Sorted array is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
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
    selectionSort(array, noOfEle);
}