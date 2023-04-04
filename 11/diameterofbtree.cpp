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
int height(node *root)
{
    // if(!root) return 0;
    //  int heightofleftsubtree = height_of_btree(root->left);
    //  int heightofrightsubtree = height_of_btree(root->right);
    //  int h = max(heightofleftsubtree, heightofrightsubtree);
    //  return h+1;
    if (root)
    {
        return (max(height(root->left), height(root->right))) + 1;
    }
    return 0;
}
int diameter(node * root)
{
    if(root==NULL) return 0;
    int lH=height(root->left);
    int rH=height(root->right);
    int d= lH+rH+1;
    int rD=diameter(root->left);
    int lD=diameter(root->right);
    d=max(d,max(lD,rD));
    return d;
}
void solve()
{
    node *root;
    cout<<"Enter root- ";
    root=create();
    int dia=0;
    dia=diameter(root);
    cout << dia;
}
int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("C:\Users\h2105\OneDrive\Desktop\cp\input.txt", "r", stdin);
//     freopen("C:\Users\h2105\OneDrive\Desktop\cp\output.txt", "w", stdout);
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