// print the series 
#include <iostream>
#include<vector>
using namespace std; 
int main ()
{   
    vector<vector<int>>mat
        {
            {1,2,3},
            {4,5,6,7},
            {8,9,10,11,12},
            {13,14,15,16,17,18},
        };
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}