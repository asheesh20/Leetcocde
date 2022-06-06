class Solution
{
public:
    vector<int> vec;
    void prehelp(Node *root)
    {
        if (!root)
        {
            return;
        }
        vec.push_back(root->val);
        for (auto rot : root->children)
        {
            prehelp(rot);
        }
    }

    vector<int> preorder(Node *root)
    {
        prehelp(root);
        return vec;
    }
};