#include <iostream>
#include <utility>
using namespace std;

int start_number=0;

void reverse_array(int n,int array[])
{
    
    if(start_number > n-1)
    {
        return;
    }

    swap(array[start_number],array[n-1]);
    start_number++;
    reverse_array(n-1,array);
}


int main()
{

    int array[5]={1,2,3,4,5};
    reverse_array(5,array);

    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}