#include <iostream>
using namespace std;

void printing_name_n_time(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << "Ayush" << endl;
    printing_name_n_time(n - 1);
}

int first_n_sum(int n, int sum)
{
    if (n == 0)
    {
        return sum;
    }
    sum += n;
    first_n_sum(n - 1, sum);
}

void array_swap(int arr[], int start, int end)
{
    if (start >= end)
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        return;
    }

    swap(arr[start], arr[end]);
    array_swap(arr, start + 1, end - 1);
}

bool palandrome_check(string &name, int start)
{
    if(start >= (name.length()/2)){
        return true;
    }

    if(name[start] != name[name.length()-start-1]){
        return false;
    }

    palandrome_check(name, start + 1);
}


int factorial_number(int n, int sum)
{
    if (n == 0)
    {
        return sum;
    }

    factorial_number(n - 1, sum* n);
}

int fibaniccai(int n)
{
    if(n <= 1)
    {
        return n;
    }

    int last = fibaniccai(n-1);
    int slast = fibaniccai(n-2);


    return last+slast;
}


int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    // string name = "abcbw";
    cout<<fibaniccai(6);
    return 0;
}