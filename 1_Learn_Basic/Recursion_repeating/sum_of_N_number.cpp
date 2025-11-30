#include <iostream>
using namespace std;
int ans=0;

int solve_sum(int number)
{
    if(number==0){
        return;
    }

    //1 Method
    // ans=number+ans;
    // solve_sum(number-1);

    // 2 Method
    return number + solve_sum(number-1);
}
int main()
{

    cout<<solve_sum(5);

    return 0;
}