#include<iostream>
using namespace std;

int main()
{
    int array[7]={4,9,6,1,8,3,2}, i, count;

    for(int j=0; j<7; j++) // this loop is for going through the array
    {
        for(i=0; i<7; i++)  // this loop is for swaping
        {   
             if(array[i]>array[i+1])
                 {
                     count=array[i]; //storing the value of array[i] in count so that we can shift to next.
                     array[i]=array[i+1];// here the i value is shifted to the next.
                    array[i+1]=count;
                 }

        }
    }
    cout<<"required sorted array is: "<<endl;
    for(i=0; i<7; i++)
    cout<<array[i]<<" "<<endl;

    return 0;
}