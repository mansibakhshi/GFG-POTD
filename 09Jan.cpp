
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code hee.
            vector<int> indices;
        int patLen = pat.length();
        int txtLen = txt.length();

        for (int i = 0; i <= txtLen - patLen; ++i) {
            int j;
            for (j = 0; j < patLen; ++j) {
                if (txt[i + j] != pat[j]) {
                    break;
                }
            }
            if (j == patLen) {
                indices.push_back(i + 1); // Adjusting to one-based indexing
            }
        }

        return indices;
        }
     
};
