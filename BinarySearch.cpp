#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key) 
{
    int start = 0, end =n; /*initially start and points towards the beginning and end of the array*/
    while(start<=end) /*this means sorted array since binary search cant be performed over unsorted arrays*/
    {
        int mid= (start+end)/2;

        if(arr[mid]==key)
        return mid;

        else if(arr[mid]>key) 
        {
            end=(mid-1); /*since the key is smaller than the middle element therefore end is shifted to the first half*/
        }

        else
        {
            start= mid+1; 
        }
    for(int i=start; i<=end; i++)
    {
        if(arr[i]==key)
        return (i+1);
    }
    }
    return -1;  /*this means while loop ended but key not found*/
}

int main()
{
    int n, element;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    
    cout<<"Enter the elements in the array: ";
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    
    cout<<"Enter the element to be searched: ";
    cin>>element;
    cout<<binarysearch(array, n, element);
    return 0; 
}
