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
void LevelOrder(node *root)
{
    node* temp=NULL;
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}
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
void solve()
{
    node *root;
    root = create();
    LevelOrder(root);
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