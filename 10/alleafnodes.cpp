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
typedef struct node node;
node *create()
{
    int data;
    //cout << "Enter root- ";
    cin >> data;
    if (data == -1)
        return NULL;
    else
    {
        node *temp = new node(data);
        temp->data = data;
        cout << "Left child of " << data << "- ";
        temp->left = create();
        cout << "Right child of " << data << "- ";
        temp->right = create();
        return temp;
    }
}
void pathleafnode(node * node, vector<int>vc)
{
    if(node==NULL) return;
    vc.push_back(node->data);
    if(node->left==NULL && node->right==NULL)
    {
        for(int i=0;i<vc.size();i++)
        {
            cout<<vc[i]<<" ";
        }
        cout<<endl;
    }
    pathleafnode(node->left,vc);
    pathleafnode(node->right,vc);
}
void solve()
{
    node *root;
    vector<int>vec;
    cout<<"Enter root- ";
    root = create();
    pathleafnode(root, vec);
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