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
void iterative_preorder(node*root)
{
    stack<node *>st;
    st.push(root);
    if(root==NULL) return;
    while(!st.empty())
    {
        node * node=st.top();
        cout<<node->data<<" ";
        st.pop();
        if(node->right) st.push(node->right);
        if(node->left) st.push(node->left);
    }
}
node *create()
{
    int data;
    // cout<<"Enter root- ";
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
void solve()
{
    node *root;
    vector<int> vec;
    cout << "Enter root- ";
    root = create();
    iterative_preorder(root);
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