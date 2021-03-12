/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */

 int height (node* r)
    {
        if(r== nullptr)
            return -1;
        else
        {
            return r->ht;
        }
    }


    int getBalanceFactor(node*n)
    {
        if (n== nullptr)
            return 0;
        else
            return (height(n->left) - height(n->right));
    }
node* rightRotation(node *y)
    {
        node* x = y->left;
        node* T2  = x->right;
        //perform rotaton
        x->right = y;
        y->left = T2;
    
        y->ht = 1 + max(height(y->left), height(y->right));
        x->ht = 1 + max(height(x->left),height(x->right));
        return x;
    }

    node* leftRotation(node *y)
    {
        node* x = y->right;
        node* T2 = x->left;
        //perform rotation
        x->left = y;
        y->right = T2;
        
        y->ht = 1 + max(height(y->left), height(y->right));
        x->ht = 1 + max(height(x->left),height(x->right));
        
        return x;
    }

node * insert(node * r,int val)
{
	if(r== nullptr)
        {  
        node* new_node = new node();
        new_node->val = val;
        new_node->right = nullptr;
        new_node->left = nullptr;
        new_node->ht=0;
        return new_node;
        }
        if(val < r->val)
            r->left = insert(r->left,val);
        else if (val > r->val)
            r->right = insert(r->right,val);
        else
        {
            return r;
        }
    
        r->ht  = 1 + max(height(r->left),height(r->right));
        int bf = getBalanceFactor(r);

        if(bf > 1 && val < r->left->val)
            return rightRotation(r);
        if(bf < -1 && val > r->right->val)
            return leftRotation(r);
        if (bf > 1 && val > r->left->val)
        {
            r->left = leftRotation(r->left);
            return rightRotation(r);
        }
        if(bf < -1 && val < r->right->val)
        {
            r->right = rightRotation(r->right);
            return leftRotation(r);
        }

    return r;
}
