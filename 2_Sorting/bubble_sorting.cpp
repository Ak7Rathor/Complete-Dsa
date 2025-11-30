#include <iostream>
using namespace std;


void bubble_sorting(int array[],int n)
{
    
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(array[j],array[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{

    // int n;
    // cin>>n;

    // int array[n];

    // for(int i=0;i<n;i++)
    // {
    //     cin>>array[i];
    // }


    int array[]={9,13,46,54,30,9};
    int n=6;
    bubble_sorting(array,n);

    return 0;
}