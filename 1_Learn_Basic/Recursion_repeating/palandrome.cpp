#include <iostream>
using namespace std;


bool palandrom(int start,string &str)
{
    
    
    if(start >= str.length()/2)
    {
        return true;
    }

    if(str[start]!=str[str.length()-start-1]){
        return false;
    }

    palandrom(start+1,str);

}

int main()
{

    string str= "ABCDCBA";
    cout<<palandrom(0,str);


    return 0;
}