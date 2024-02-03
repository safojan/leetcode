/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        int m = nums2.size();
        int tl = n + m;
        vector<int> merged(tl);

        int i, j, k;
        i = j = k = 0;
        while (i < n && j < m)
        {
            if (nums1[i] < nums2[j])
            {
                merged[k++] = nums1[i++];
            }
            else
            {
                merged[k++] = nums2[j++];
            }
        }

        double median;
        if (tl % 2 != 0)
        {
            return median = merged[tl / 2];
        }
        else
        {
            return median = merged[tl / 2] + merged[tl / 2 + 1];
        }
    }
};
// @lc code=end
