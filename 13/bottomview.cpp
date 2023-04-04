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
void bottomView(node *root)
{
    queue<pair<int, node *>> q;
    map<int, int> m;
    q.push({0, root});
    while (!q.empty())
    {
        auto temp = q.front();
        q.pop();
        int lineno = temp.first;
        node *p = temp.second;
        m[lineno] = p->data;
        if (p->left)
        {
            q.push({lineno - 1, p->left});
        }
        if (p->right)
        {
            q.push({lineno + 1, p->right});
        }
    }
    for (auto it : m)
    {
        cout << it.second << " ";
    }
    cout << endl;
}
void solve()
{
    node *root;
    cout << "Enter root- ";
    root = create();
    bottomView(root);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\input.txt", "r", stdin);
    freopen("C:\\Users\\h2105\\OneDrive\\Desktop\\cp\\output.txt", "w", stdout);
#endif
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
