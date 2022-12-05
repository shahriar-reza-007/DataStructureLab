#include<iostream>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode* left;
    TreeNode *right;

    TreeNode()
    {
        data = 0;
        left  = NULL;
        right = NULL;
    }

    TreeNode(int d)
    {
        data = d;
        left = NULL;
        right  = NULL;
    }
};

class BinarySearchTree
{
public:
    TreeNode* root;
    BinarySearchTree()
    {
        root = NULL;
    }
    bool isEmpty()
    {
        if(root = NULL)
            return true;
        else
            return false;
    }

    void insertNode(TreeNode* new_Node)
    {
        if(root == NULL)
        {
            root = new_Node;
            cout<<"Value inserted as Root Node"<<endl;
        }
        else
        {
            TreeNode* temp = root;
            while(temp != NULL)
            {
                if(new_Node -> data == temp->data)
                {
                    cout<<"Value already exist"<<endl;
                }
                else if((new_Node -> data < temp -> data) && (temp -> left == NULL))
                {
                    temp->left = new_Node;
                    cout<<"Value inserted to the left"<<endl;
                    break;
                }
                else if(new_Node->data < temp->data)
                {
                    temp = temp->left;
                }
                else if((new_Node->data > temp->data) && (temp->right == NULL))
                {
                    temp->right = new_Node;
                    cout<<"Value inserted to the right"<<endl;
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }

    void preOrder(TreeNode* r)
    {
        if(r == NULL)
            return;
        cout<<r->data<<" ";
        preOrder(r->left);
        preOrder(r->right);
    }
};


int main()
{
    int Array[8]={36,30,21,58,44,80};
    BinarySearchTree BST;
    TreeNode* new_Node = new TreeNode();
    TreeNode* new_Node1 = new TreeNode();
    TreeNode* new_Node2 = new TreeNode();
    TreeNode* new_Node3 = new TreeNode();
    TreeNode* new_Node4 = new TreeNode();
    TreeNode* new_Node5 = new TreeNode();


    new_Node->data = Array[0];
    new_Node1->data = Array[1];
    new_Node2->data = Array[2];
    new_Node3->data = Array[3];
    new_Node4->data = Array[4];
    new_Node5->data = Array[5];


    BST.insertNode(new_Node);
    BST.insertNode(new_Node1);
    BST.insertNode(new_Node2);
    BST.insertNode(new_Node3);
    BST.insertNode(new_Node4);
    BST.insertNode(new_Node5);

    cout<<"PRE_ORDER: ";
    BST.preOrder(new_Node);
    cout<<endl;

}
