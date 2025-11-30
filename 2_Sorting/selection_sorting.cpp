#include <iostream>
using namespace std;


void selection_sorting(int array[],int n)
{
    for(int i=0;i<=n-2;i++)
    {

        int min=i;

        for(int j=i;j<=n-1;j++)
        {
            if(array[j]<array[min])
            {
                min=j;
            }
        }
        swap(array[min],array[i]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{

    int n;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    selection_sorting(array,n);

    return 0;
}