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
void rightView(node *root)
{
    queue<node *> q;
    vector<int> result;
    q.push(root);
    q.push(NULL);
    node *temp, *p;
    while (1)
    {
        temp = q.front();
        q.pop();
        p = q.front();
        if (temp == NULL && p == NULL)
        {
            break;
        }
        else if (p == NULL)
        {
            result.push_back(temp->data);
        }
        else if (temp == NULL)
        {
            q.push(NULL);
            continue;
        }
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
    cout << "Right View of Tree:";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}
void solve()
{
    node *root;
    cout << "Enter root- ";
    root = create();
    rightView(root);
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
