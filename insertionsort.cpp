#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Max size?";
    cin>>n;
    int array[n];
    cout<<"enter the elements in array";
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    /*sorting starts from here and we start from 1 instead of 0 since we consider the first element to be already sorted*/
    for(int i=1; i<n; i++)
    {
        int current= array[i];  /*current is used to store the present array element which is to be used  later.*/
        int j=i-1;             //j will be the elent in the new array where insertion takes place
        
        while(array[j]>current && j>=0) /*j must not be equal to zero since we need to do j--*/
        {
            array[j+1]=array[j]; /*here the greater no. is shifting onr place ahead making space for the smaller no. to enter in 
                                  between*/
            j--;
        }
       array[j+1]=current;
    }

    /*printing final array*/
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<endl;
    }

    return 0;
}