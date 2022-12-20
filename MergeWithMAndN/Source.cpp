#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

void merge(vector<int>& vect1, int vect1Max, vector<int>& vect2, int n) {
        vector<int> resVect(vect1Max+n);
        int i = 0, j = 0;
        bool vect1Completed = false, vect2Completed = false;
        for (int m = 0; m < vect1Max+n; m++)
        {
            if (i == vect1Max)
            {
                vect1Completed = true;
            }
            else if (j == n)
            {
                vect2Completed = true;
            }
            if (vect2Completed || (!vect1Completed && vect1[i] <= vect2[j]))
            {
                resVect[m] = vect1[i++];
            }
            else
            {
                resVect[m] = vect2[j++];
            }
        }
        vect1.clear();
        vect1=resVect;
    }



int main()
{
/**solved in leetcode- 88. Merge Sorted Array
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
 */

}