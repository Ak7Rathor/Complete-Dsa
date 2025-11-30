#include <iostream>
using namespace std;

int ans=1;
int factorial(int number)
{
    if(number==0){
        return ans;
    }

    ans = ans*number;
    factorial(number-1);


    // return number * factorial(number-1);

}

int main()
{

    cout<<factorial(5);

    return 0;
}