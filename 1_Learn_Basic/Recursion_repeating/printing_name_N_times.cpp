#include <iostream>
using namespace std;

void func(int starting_number,int last_number)
{

    if(starting_number==last_number)
    {
        return;
    }

    cout<<"Ayush"<<" ";
    func(starting_number+1,last_number);

}

int main()
{
    int n = 4;
    func(1,n);
  
    return 0;
}