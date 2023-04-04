#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> mat{3,3,3,3,3};
    mat.insert(mat.begin(), {10,10,10,10,10,10,10});
    for(int i=0;i<12;i++)
    {
        cout<<mat[i]<<" ";
    }
    return 0;
}