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
    cout<<"Enter root- ";
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
void inorder(node * lst)
{   
    if(lst==NULL) return;
    inorder(lst->left);
    cout<<lst->data<<" ";
    inorder(lst->right);
}
void preorder(node * lst)
{   
    if(lst==NULL) return;
    cout<<lst->data<<" ";
    preorder(lst->left);
    preorder(lst->right);
}
void postorder(node * lst)
{   
    if(lst==NULL) return;
    preorder(lst->left);
    preorder(lst->right);
    cout<<lst->data<<" ";
}
void solve()
{
    node *root;
    root=create();
    cout<<"Inorder Traversal- ";
    inorder(root);
    cout<<"\nPreorder Traversal- ";
    preorder(root);
    cout<<"\nPostorder Traversal- ";
    postorder(root);
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