#include<bits/stdc++.h>
using namespace std;

class avlnode{
    public:
    int data;
    avlnode* left;
    avlnode* right;
    int h;

    avlnode(int val,int h):data(val),left(NULL),right(NULL){}

};

int height(avlnode* root){
    if(!root){
        return 0;
    }
    return root->h;
}
int BF(avlnode* root){
    if(!root)return 0;
    return height(root->left)-height(root->right);
}

avlnode* leftR(avlnode* root){
    avlnode* r=root->right;
    avlnode* rl=r->left;

 // Perform rotation
    r->left=root;
    root->right=rl;

     // Update heights  

    root->h=max(height(root->left),height(root->right))+1;
    r->h=max(height(r->left),height(r->right))+1;
    // Return new root
    return r;

}

avlnode* rightR(avlnode* root){  
    avlnode *l = root->left;  
    avlnode *lr = l->right;  
  
    // Perform rotation  
    l->right = root;  
    root->left = lr;  
  
    // Update heights  
    root->h= max(height(root->left), 
                    height(root->right)) + 1;  
    l->h = max(height(l->left), 
                    height(root->right)) + 1;  
  
    // Return new root  
    return l;  
}  


avlnode* insert(avlnode* root,int val){
    if(!root){
        return new avlnode(val,1);
    }
    if(val < root->data){
        root->left=insert(root->left,val);

    }else if(val > root->data){
        root->right=insert(root->right,val);

    }else{
        return root;
    }
    root->h=max(height(root->left),height(root->right))+1;
     
     //balance factor
    int bf=BF(root);


    //right right case
    if(bf< -1 && val> root->right->data){
        return leftR(root);
    }
    //left left case
    if(bf>1 && val < root->left->data){
        return rightR(root);
    }
    //right left case
    if(bf <-1 && val <root->right->data){
        root->right=rightR(root->right);
        return leftR(root);
    }
    //left right case
    if(bf>1 && val > root->left->data){
        root->left=leftR(root->left);
        return rightR(root);
    }
    return root;

}

bool search(avlnode* root,int val){
    if(!root){
        return 0;
    }
    if(root->data == val){
        return 1;
    }if(root->data >val)return search(root->left,val);
    return search(root->right,val);
}




/* Given a non-empty binary search tree, 
return the node with minimum key value 
found in that tree. Note that the entire 
tree does not need to be searched. */
avlnode * minValueNode(avlnode* node) 
{ 
    avlnode* current = node; 
 
    /* loop down to find the leftmost leaf */
    while (current->left != NULL) 
        current = current->left; 
 
    return current; 
} 
//deletion 


avlnode* deletenode(avlnode* root,int val){
    if(!root){
        return root;
    }
    if(val < root->data){
        root->left=deletenode(root->left,val);
        }
     else if(val > root->data){
            root->right=deletenode(root->right,val);
        }
    else{

        // node with one child or no child
        if(root->left==NULL || root->right == NULL){
            avlnode* temp=root->left?root->left:root->right;

            //no child
            if(temp==NULL){
                temp=root;
                root=NULL;
            }
            else{//one child case
                *root=*temp;// copy the contents of the non-empty chils 

                free(temp);
            }
            
        }else{

            // node with two children: Get the inorder 
            // successor (smallest in the right subtree)
            avlnode* temp=minValueNode(root->right);

             // Copy the inorder successor's 
            // data to this node 
            root->data = temp->data; 
 
            // Delete the inorder successor 
            root->right = deletenode(root->right, 
                                     temp->data); 

        }
    }
      // If the tree had only one node
    // then return 
    if (root == NULL) 
    return root; 
 
    // STEP 2: UPDATE HEIGHT OF THE CURRENT NODE 
    root->h = 1 + max(height(root->left), 
                           height(root->right)); 
 
    // STEP 3: GET THE BALANCE FACTOR OF 
    // THIS NODE (to check whether this 
    // node became unbalanced) 
    int balance = BF(root); 
 
    // If this node becomes unbalanced, 
    // then there are 4 cases 
 
    // Left Left Case 
    if (balance > 1 && 
        BF(root->left) >= 0) 
        return rightR(root); 
 
    // Left Right Case 
    if (balance > 1 && 
        BF(root->left) < 0) 
    { 
        root->left = leftR(root->left); 
        return rightR(root); 
    } 
 
    // Right Right Case 
    if (balance < -1 && 
        BF(root->right) <= 0) 
        return leftR(root); 
 
    // Right Left Case 
    if (balance < -1 && 
        BF(root->right) > 0) 
    { 
        root->right = rightR(root->right); 
        return leftR(root); 
    } 
 
    return root; 

}

int main(){

    return 0;
}