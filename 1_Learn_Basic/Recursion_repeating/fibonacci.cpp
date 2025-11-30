#include <iostream>
using namespace std;

int count=0;
// int prev;
void fibonacci(int first,int second)
{
    if(count==10)
    {
        return;
    }
    if(first==0)
    {
        cout<<0<<" ";
    }

    int prev=first+second;
    cout<<prev<<" ";
    count++;
    fibonacci(prev,first);
}

int main()
{
    fibonacci(0,1);

    return 0;
}