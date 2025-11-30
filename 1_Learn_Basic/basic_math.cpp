#include <iostream>
#include<vector>
#include <math.h>
using namespace std;

void count_digit(int number)
{
    int n=number;
    int count=0;

    while(n)
    {
        n=n/10;
        count++;
    }
    cout<<count;
}

void reverse_number(int number)
{
    int ans=0;
    int n=number;

    while (n)
    {
        int extra=n%10;
        ans=(ans*10) + extra;
        n=n/10;
    }

    cout<<ans;
    
}
void palandrom(int number)
{
    int temp=number;
    int ans=0;

    while(temp)
    {
        int reminder=temp % 10;
        ans = ans*10+reminder;
        temp=temp / 10;
    }
    if(ans==number){
        cout<<"Yes it palandrom";
    }
    else {
        cout<<"No sorry";
    }
}

void armstrong(int number)
{
    int temp=number;
    int ans=0;

    while(temp)
    {
        int reminder= temp % 10;
        ans+=reminder * reminder * reminder;
        temp= temp/10;
    }
}

void dividor(int n)
{
    vector<int>arr;

    for(int i=1;i<=n;i++)
    {
        if((n % i) == 0){
            arr.push_back(i);
        } 

        if(i!=(n/i)){
            arr.push_back(n/i);
        }
    }


    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}

void dividor1(int n)
{
    vector<int>arr;

    for(int i=1;i<=sqrt(n);i++)
    {
        if((n % i) == 0){
            arr.push_back(i);
        } 

        if(i!=(n/i)){
            arr.push_back(n/i);
        }
    }


    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}

void prime(int n)
{

    int count = 0;
    int square_root = sqrt(n);
    for(int i=1;i<=square_root;i++){
        if(n % i == 0)
        {
            count++;
        }


        if(n / i != i)
        {
            count++;
        }
    }

    if(count>2){
        cout<<"not a prime";
    }
     else {
        cout<<"Yes is prime";
     }
}

int main()
{

    // palandrom(45545);
    // armstrong(153);
    // dividor1(12);
    // prime(10);
    // count_digit(1);
    reverse_number(12345);



    return 0;
}