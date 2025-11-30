#include <iostream>
using namespace std;

int fun1(int first){
    first--;
    cout<<&first<<endl;
}

int main()
{

    int n=10;
    fun1(n);
    cout<<&n<<endl;

    return 0;
}