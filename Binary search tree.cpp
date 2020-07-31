#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* root = NULL;
void insert(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    if(root==NULL){
        root = newNode;
    }
    else{
        struct Node* temp = root;
        while(1){
            if(newNode->data <=temp->data){
                if(temp->left==NULL){
                    temp->left = newNode;
                    break;
                }
                else
                    temp = temp->left;
            }
            else{
                if(temp->right==NULL){
                    temp->right = newNode;
                    break;
                }
                else
                    temp = temp->right;
            }
        }
    }
}
int main()
{
    insert(10);
    return 0;
}
