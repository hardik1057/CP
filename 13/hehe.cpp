#include <iostream>
#include <cstdlib>
#include <queue>
#include <list>
#include <map>
using namespace std;
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
void LOT(node *root)
{
    queue<node *> q;
    vector<int> result;
    q.push(root);
    node *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        result.push_back(temp->data);
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
    cout << "Level Order Traversal:";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}
void LV(node *root)
{
    queue<node *> q;
    vector<int> result;
    q.push(root);
    q.push(NULL);
    result.push_back(root->data);
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
        else if (temp == NULL)
        {
            result.push_back(p->data);
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
    cout << "Left View of Tree:";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}
void RV(node *root)
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
void TV(node *root)
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
        if (m.count(lineno) == 0)
        {
            m[lineno] = p->data;
        }
        if (p->left)
        {
            q.push({lineno - 1, p->left});
        }
        if (p->right)
        {
            q.push({lineno + 1, p->right});
        }
    }
    cout << "Top view of the Tree:";
    for (auto it : m)
    {
        cout << it.second << " ";
    }
    cout << endl;
}
void BV(node *root)
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
    cout << "Bottom view of the Tree:";
    for (auto it : m)
    {
        cout << it.second << " ";
    }
    cout << endl;
}
void create(node **root)
{
    int n;
    cout << "How many inputs you want to take:";
    cin >> n;
    int d;
    cout << "Enter the values:";
    if ((*root) == NULL)
    {
        cin >> d;
        (*root) = new node(d);
    }
    n--;
    while (n != 0)
    {
        cin >> d;
        node *ne = new node(d);
        node *temp = (*root), *p;
        while (temp != NULL)
        {
            if (temp->data > d)
            {
                p = temp;
                temp = temp->left;
            }
            else if (temp->data < d)
            {
                p = temp;
                temp = temp->right;
            }
        }
        if (p->data > d)
        {
            p->left = ne;
        }
        else
        {
            p->right = ne;
        }
        n--;
    }
}
int main()
{
    node *root = NULL;
    create(&root);
    LOT(root);
    LV(root);
    RV(root);
    TV(root);
    BV(root);
    return 0;
}
