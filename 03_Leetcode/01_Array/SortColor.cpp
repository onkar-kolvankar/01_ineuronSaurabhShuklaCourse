#include <iostream>
#include<vector>


using namespace std;

class Solution {
public:
    
    int partition(vector<int> &nums , int start , int end){
        int pivot = nums[start] ; // make leftmost elmt as pivot.

        // use 2 pointers i = start + 1 and j  = end
        // 1. shift i to right untile emlt is > pivot.
        // 2. shilt j to left until elmt is < pivot
        // 3. swap the nums[i] and nums[j] if num[i] > nums[j] && i < j
        // 4. if the i >= j => i and j crossed each other then swap the pivot elmt with the nums[j] as nums[j] will
        // lesser than pivot. 
        // This means that the pivot elmt is now on its correct positon and all smaller elmts are on LHS and 
        // larger elemts are on RHS.
        // so return j

        int i = start + 1 , j = end;
        
        while(1)
        {    while(i < end){
                if(nums[i] >= pivot)
                    break;
                i++;
            }
            while(j > start)
            {
                if(nums[j] < pivot)
                    break;
                j--;
            }

            if(i < j )
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            else{
                // swap pivot to the position of j => pivot's correct position
                int temp = pivot;
                nums[start] = nums[j];
                nums[j] = pivot;
                return j;
            }
        }

    }
    void quickSort(vector<int>&nums , int start , int end){
        if(start >= end)
            return ;

        int pivot = partition(nums,start,end);
        quickSort(nums , start , pivot-1);
        quickSort(nums,pivot + 1 , end);

    }
    
    void sortColors(vector<int>& nums) {
        // Approach 2 - using Quick sort

        quickSort(nums,0,nums.size() - 1);

        
    }

};

int main()
{
    Solution s;
    vector<int> v = {7,6,5,4,3};

    s.sortColors(v);

    vector<int> :: iterator iv1;
    for(iv1 = v.begin() ; iv1 != v.end() ; iv1++)
    {
        cout << *iv1 << " ";
    }

    return 0;
}