#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    vector<string>cities{"Delhi", "Mumbai", "Ahmedabad", "Kerala", "Dhanbad"};
    for(int i=0;i<5;i++)
    {
        cout<<cities[i]<<" ";
    } 
    return 0;
}