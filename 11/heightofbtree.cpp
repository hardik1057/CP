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
int height_of_btree(node * root)
{
    //if(!root) return 0;
    // int heightofleftsubtree = height_of_btree(root->left);
    // int heightofrightsubtree = height_of_btree(root->right);
    // int h = max(heightofleftsubtree, heightofrightsubtree);
    // return h+1;
     if (root)
     {   
        return (max(height_of_btree(root->left), height_of_btree(root->right))) + 1;
     }
     return 0;
}
void solve()
{
    node *root;
    root = create();
    int height=0;
    height=height_of_btree(root);
    cout<<height<<endl;
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