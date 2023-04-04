/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
#define ll long long
struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
void reverselevelorder(node *root)
{
    vector<int>vc;
    node * temp;
    queue<node *> q;
    q.push(root);
    while(!q.empty())
    {
        temp=q.front();
        vc.push_back(temp->data);
        if(temp->right)
        {
            q.push(temp->right);
        }
        if(temp->left)
        {
            q.push(temp->left);
        }
        q.pop();;
    }
    reverse(vc.begin(),vc.end());
    for(int i=0;i<vc.size();i++) cout<<vc[i]<<" ";
}
typedef struct node node;
node *create()
{
    int data;
    //cout<<"Enter root- ";
    cin >> data;
    if (data == -1) return NULL;
    else
    {
        node *temp = new node(data);
        temp->data=data;
        cout<<"Left child of "<<data<<"- ";
        temp->left=create();
        cout<<"Right child of "<<data<<"- ";
        temp->right=create();
        return temp;
    }
}
void solve()
{
    node *root;
    root=create();
    reverselevelorder(root);
}
int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\input.txt", "r", stdin);
//     freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\output.txt", "w", stdout);
// #endif
    int T = 1; // multiple test cases
    // cin >> T;
    while (T--)
    {
        solve();
        if (T)
            cout << "\n";
    }
    return 0;
}