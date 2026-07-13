class Solution {
public:
    int strStr(string haystack, string needle) {
        int hs = haystack.size();
        int ns = needle.size();
        for (int i = 0; i < hs; i++) {
            if (haystack[i] == needle[0]) {
                int j = 0;
                int k = i;
                while (k < hs && j < ns && haystack[k] == needle[j]) {
                    k++;
                    j++;
                }
                if (j == needle.size()) {
                    return i;
                }
            }
        }
        return -1;
    }
};
