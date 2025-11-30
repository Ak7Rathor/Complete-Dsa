#include <iostream>
using namespace std;

void printing_1_N_times(int starting_number,int end_number){

    if(starting_number==end_number)
    {
        return;
    }

    cout<<starting_number<<" ";
    printing_1_N_times(starting_number+1,end_number);
}

int main()
{

    
    printing_1_N_times(1,10);
    return 0;
}