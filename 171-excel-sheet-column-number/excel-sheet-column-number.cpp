class Solution {
public:
    int titleToNumber(string columnTitle)
     {
        int anw=0;
        for (int i=0;i<columnTitle.length();i++)
        {
            anw=anw*26+(columnTitle[i]-'A'+1);
        }
        return anw;
    }
};