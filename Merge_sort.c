#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],na,j,i, nb, b[100], c[100] ,k;

    printf("Enter number of elements in first array: ");
    scanf("%d",&na);

    printf("Enter  array elements : ");
    for(i=0;i<na;i++)
        scanf("%d",&a[i]);


    printf("Enter number of elements in second array: ");
    scanf("%d",&nb);

    printf("Enter  array elements : ");
    for(j=0;j<nb;j++)
        scanf("%d",&b[j]);
        
    i=0; //here i and j are initialized to 0, since indeces of the small arrays start from zero.
    j=0;
    
    for(k=0;k<na+nb;k++) //this is big for loop for inserting in final array
    {
        if(i==na || j==nb) //if any of the array exhausts then the comparison will npt take place
            break;

        else if(a[i]<b[j])
        {
            c[k]=a[i]; 
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }

    if(i==na)   //if array a exhausts then only b elements will be inserted.
    {
        for(j=j;j<nb;j++)
            c[k++]=b[j];
    }
    else if(j==nb)  //if array b elemnts exhaust then elements of a will be inserted.
    {
        for(i=i;i<na;i++)
            c[k++]=a[i];
    }

    printf("New array is ");
    for(k=0;k<na+nb;k++)
            printf("%d ",c[k]);

}
