#include <bits/stdc++.h>// input pre order me 
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
typedef struct node node;
node * create(vector<int> &vc,int n)
{
    static int i=0;
    if(vc[i]==-1){
        i++;
        return NULL;
    }
    node *root=new node(vc[i]);
    i++;
    root->left = create(vc,n);
    root->right = create(vc,n);
    return root;
}
void inorder(node * lst)
{   
    if(lst==NULL) return;
    inorder(lst->left);
    cout<<lst->data<<" ";
    inorder(lst->right);
}
int main()
{
    node *root;
    int n;
    cout << "Enter number of elements- ";
    cin >> n;
    vector<int> vc;
    vc.resize(2*n+1);
    cout << "Enter elements- ";
    for (int i = 0; i <2*n+1; i++)
    {
        int temp;
        cin >> temp;
        vc[i] = temp;
    }
    root = create(vc,2*n+1);
    cout << "Inorder Traversal- ";
    inorder(root);
}