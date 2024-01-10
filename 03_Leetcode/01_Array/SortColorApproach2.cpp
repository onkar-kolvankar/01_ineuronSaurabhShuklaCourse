#include <iostream>
#include<vector>


using namespace std;

class Solution {
public: 
     //Ex : 0 = 3 , 1 = 4 , 2 = 2
    // 0,1,2,3,4,5,6,7,8 
    //[0,0,0,1,1,1,1,2,2]
    void sortColors(vector<int>& nums) {
        // Approach 2 - 
        int count[3] = {0,0,0};
        for(int i = 0 ; i < nums.size() ; i++)
        {
            count[nums[i]] ++;
        }

        // now iterate via loop and assign that many nos. in the vector
        for(int i = 0 ; i < count[0] ; i++)
        {
            nums[i] = 0;
        }
        for(int i = count[0] ; i < count[0] + count[1]; i++)
        {
            nums[i] = 1;
        }
        for(int i = count[0] + count[1] ; i < count[0] + count[1] + count[2] ; i++)
        {
            nums[i] = 2;
        }
    }

};

int main()
{
    Solution s;
    vector<int> v = {2,0,2,1,0,2};

    s.sortColors(v);

    vector<int> :: iterator iv1;
    for(iv1 = v.begin() ; iv1 != v.end() ; iv1++)
    {
        cout << *iv1 << " ";
    }

    return 0;
}