#include <iostream>
using namespace std;

void pass_by_reference_const(const int &n)
{
    // n++:  You cannot modify because of const
    cout<<"After Modication"<<endl;
    cout<<n<<endl;
    cout<<&n<<endl;
}

int main()
{

    int n=10;
    pass_by_reference_const(n);
    cout<<"Before Modication"<<endl;
    cout<<n<<endl;
    cout<<&n<<endl;

    return 0;
}