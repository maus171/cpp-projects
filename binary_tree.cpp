#include<iostream>
#include<vector>
using namespace std;

class Node{
    int data;
    Node* left;
    Node* right;

    Node(){
        this->data=data;
        left=NULL;
        right=NULL;
    }

};

static int idx;
Node* build_tree(vector<int> nodes)
{
    idx++;
    if(nodes[idx]==-1)
    {
        return NULL;
    }

    Node* currnode= new node Node(nodes[idx]);
    currnode->left=build_tree();
    currnode->right=build_tree();

    return currnode;
}







int main()
{
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1}
    return;
}