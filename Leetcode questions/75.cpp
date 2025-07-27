// O(n)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zero++;
            }
            else if(nums[i]==1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }
        for(int i=0;i<zero;i++)
        {
            nums[i]=0;
        }
        for(int i=zero;i<zero+one;i++)
        {
            nums[i]=1;
        }
        for(int i=zero+one;i<zero+one+two;i++)
        {
            nums[i]=2;
        }
    }
};

// O(n^2)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            int key=nums[i];
            int j=i-1;
            while(j>=0 && nums[j]<key)
            {
                nums[j+1]=nums[j];
            }
            nums[j+1]=key;
        }
    }
};