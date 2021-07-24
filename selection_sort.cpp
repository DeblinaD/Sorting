#include<iostream>
using namespace std;

int main()
{
    int array[]={9,7,56,6,8,6,4}, i, j;

    for(i=0; i<(sizeof(array)/sizeof(array[0]))-1; i++)
    /*this loop runs upto max array size-1 times since while moving in the loop we keep on swaping so a 
    time comes when the last element is automatically the greatest*/
    {
        for(j=i+1; j<(sizeof(array)/sizeof(array[0])); j++)
        /*this loop is for swapping*/
        {
            if(array[j]<array[i])
            {
                int temp= array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }    
    }

     for(i=0; i<(sizeof(array)/sizeof(array[0])); i++)
    cout<<array[i]<<" "<<endl;
    return 0;
}