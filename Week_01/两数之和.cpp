class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        排序+双指针法
        先将数组排序好O（nlogn），再利用双指针法遍历一遍O（n）得到结果。
        为了保存下标信息另开了一个数组
        时间复杂度O（nlogn），空间复杂度O（n）
。
        */
        vector<int> ans;
        vector<int> temp;
        temp=nums;
        int n=temp.size();
       sort(temp.begin(),temp.end());
       int i=0,j=n-1;
       while(i<j){  
           if(temp[i]+temp[j]>target)j--;
          else if(temp[i]+temp[j]<target)i++;
          else break; 
       }
       if(i<j){
      for(int k=0;k<n;k++){
          if(i<n&&nums[k]==temp[i]){
              ans.push_back(k);
              i=n;
          }
         else if(j<n&&nums[k]==temp[j]){
              ans.push_back(k);
              j=n;
          }
          if(i==n&&j==n)return ans;
      }
      }
        return ans;


    }
};