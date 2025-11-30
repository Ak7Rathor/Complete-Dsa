#include <iostream>
using namespace std;

void pass_by_reference_pointer(int *x)
{
    cout<<"After Modication"<<endl;
    *x=200;
    cout<<*x<<endl;
    cout<<&x<<endl;  // this will print x address
    cout<<&(*x)<<endl;  //this will print n address how :- (*x) = 10 which is n only then &(n) = n address 
    x=nullptr;
}

int main()
{
    int n=10;
    int *p=&n;

    cout<<"Before Modication"<<endl;
    pass_by_reference_pointer(&n);
    cout<<&n<<endl;
    cout<<n<<endl;

    return 0;
}