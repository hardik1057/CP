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
void sum_of_levels(node * root)
{
    if (root == NULL) return;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        int levelSum = 0;
        for (int i = 0; i < size; i++)
        {
            node *curr = q.front();
            q.pop();
            levelSum += curr->data;
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        cout << levelSum << endl;
    }
}
void solve()
{
    node *root;
    cout<<"Enter root- ";
    root=create();
    sum_of_levels(root);
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