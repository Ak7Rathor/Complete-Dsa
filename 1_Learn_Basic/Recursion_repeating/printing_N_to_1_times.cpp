#include <iostream>
using namespace std;

void printing_1_N_times(int starting_number,int end_number){

    if(end_number==starting_number)
    {
        return;
    }

    printing_1_N_times(starting_number+1,end_number);
    cout<<starting_number<<" ";
}

int main()
{

    
    printing_1_N_times(1,10);
    return 0;
}