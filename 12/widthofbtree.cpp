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
int width_of_btree(node *root, vector<node*>&vc)
{
    int width=0;
    if(root==NULL)
    {
        cout<<"Tree empty";
        return 0;
    }
    else
    {
        vc.push_back(root);
        while(root->left!=NULL&&root->right!=NULL)
        {
            width++;
            width_of_btree(root->left,vc);
            width_of_btree(root->right,vc);
        }
    }
    cout<<endl<<width<<endl;
    cout<<endl<<vc.size()<<endl;
    return width;
}
void solve()
{
    node *root;
    vector<node*>vc;
    cout<<"Enter root- ";
    root=create();
    //int width=0;
    width_of_btree(root,vc);
    //cout<<width<<endl;
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