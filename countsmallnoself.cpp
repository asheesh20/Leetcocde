struct Node{
    int val;
    struct Node* left;
    struct Node* right;
    int lc;
    Node(int val){
        this->val=val;
        left=NULL;
        right=NULL;
        lc=0;
    }
};
class Solution {
public:
    int insert(struct Node* node, int key){
        Node* daddy=NULL,* p=NULL;
        int count=0;
        while(node){
            daddy=node;  
            if(node->val>=key){
                node->lc++;
                node=node->left;
            }
            else{
                count+=1+node->lc;
                node=node->right;
            }
        }
        p=new Node(key);
        if(daddy->val>=key){
            daddy->left=p;
        }
        else{
            daddy->right=p;
        }
        return count;        
    }
    vector<int> countSmaller(vector<int>& v) {
        int n=v.size();        
        vector<int>ans(n,0);
        
        vector<int>c=v; 
        sort(c.begin(),c.end());
        bool increasing=true;
        for(int i=0;i<n;i++){
            if(c[i]!=v[i]){
                increasing=false;
                break;
            }
        }
        if(increasing){
            return ans;
        }
        sort(c.rbegin(),c.rend());
        bool decreasing=true;
        for(int i=0;i<n;i++){
            if(c[i]!=v[i]){
                decreasing=false;
                break;
            }
        }
        if(decreasing){
            int cnt=0;
            ans[n-1]=0;
            int j=n-2;
            while(j>=0){
                if(v[j]>v[j+1])
                    ans[j]=n-j-1;
                if(v[j]==v[j+1]) 
                    ans[j]=ans[j+1];
                j--;
            }
            return ans;
        }
        
        struct Node* root=new Node(v[n-1]);
        for(int i=n-2;i>=0;i--){
            ans[i]=insert(root,v[i]);
        }
        return ans;
    }
};