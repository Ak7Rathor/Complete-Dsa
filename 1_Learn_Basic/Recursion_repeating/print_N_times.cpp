#include <iostream>
using namespace std;
int count=1;

void print_N()
{
    if(count==4)
    {
        return;
    }

    cout<<count<<" ";
    count++;
    print_N();
}

int main()
{

    print_N();


    return 0;
}