#include <iostream>
#include<unordered_map>
#include<vector>
#include<climits>
using namespace std;

void frequency_count(vector<int>arr,int n)
{

    unordered_map<int,int>mp;

    for(int i=0;i<n;i++)
    {

        mp[arr[i]]++;
    }

    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

}

void highest_lowest(vector<int>arr, int n)
{
    unordered_map<int,int>mp;

    for(int i=0;i<n;i++)
    {

        mp[arr[i]]++;
    }
    int count =0;
    int ans1=0;

    int count2= INT_MAX;
    int ans2=0;

    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    for(auto it:mp)
    {
        if(it.second > count){
            count=it.second;
            ans1=it.first;
        }

        if(it.second < count2){
            count2=it.second;
            ans2=it.first;
        }
    }

    cout<<ans1<<endl;
    cout<<ans2<<endl;
}

int main()
{

    vector<int>arr={2,1,1,1,1,2,4,4,5};
    // frequency_count(arr,8);
    highest_lowest(arr,9);

    return 0;
}