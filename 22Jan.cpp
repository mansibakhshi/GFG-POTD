class Solution {
public:
    void solve(Node *root, int s, int sum, vector<int> v, vector<vector<int>>& out) {
        if (!root)
            return;
        v.push_back(root->key);
        s += root->key;
        if (s == sum)
            out.push_back(v);
        solve(root->left, s, sum, v, out);
        solve(root->right, s, sum, v, out);
    }

    vector<vector<int>> printPaths(Node *root, int sum) {
        vector<vector<int>> out;
        vector<int> v;
        solve(root, 0, sum, v, out);
        return out;
    }
};
