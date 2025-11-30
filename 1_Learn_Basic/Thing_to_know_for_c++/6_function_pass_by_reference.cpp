#include <iostream>
using namespace std;

int fun2(int &first)
{

    first--;
    cout<<&first<<endl;
}

int main()
{
    int pointer=1;
    fun2(pointer);
    cout<<&pointer<<endl;

    return 0;
}