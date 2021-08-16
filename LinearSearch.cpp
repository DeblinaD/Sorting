#include<bits/stdc++.h>
using namespace std;

int lsearch(int arr[], int key)
{
    for(int i=0; i<sizeof(arr); i++)
    {
        if(arr[i] == key)
        return i;
    }
    return -1; /*inspite of ending the for loop if we don't find the key within the array then returns -1*/
}

int main()
{
    int array[5]={5,6,7,2,9}, key;
    cin>>key;
    cout<<lsearch(array, key);
    return 0;
}