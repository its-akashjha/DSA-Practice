/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
        queue<Node*>st;
        st.push(root);
        while(!st.empty()){
            int n = st.size();
            for(int i=0;i<n;i++){
                
                Node* node = st.front();
                st.pop();
                node->next=st.front();
                if(node->left){
                    st.push(node->left);
                }
                if(node->right){
                    st.push(node->right);
                }
                
                if(i==n-1){
                    node->next=NULL;
                }
                
            }
        }
        return root;
        
    }
};