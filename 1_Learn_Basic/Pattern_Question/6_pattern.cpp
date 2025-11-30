#include <iostream>
using namespace std;

int main()
{

    int x=4;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=x;j++){
            cout<<j;
        }
        x--;
        cout<<endl;
    }
    return 0;
}