class Solution {
public:
    int trap(vector<int>& height) {
        /*int res = 0;
        int cur=0;
        stack<int> st;
        for(int i = 0; i < height.size(); i++) {
            
            while (!st.empty() && height[st.top()] < height[i]) {
                cur = st.top();
                st.pop();
            
                while (!st.empty() && height[cur] == height[st.top()]) {   
                    st.pop();
                    //cur = st.top();
                }
            
                if(!st.empty()) {
                int left = st.top();
                    int minheight;
                    minheight = height[left] < height[i] ? height[left] : height[i];
                    cout << height[left] << endl;
                    res += (minheight - height[cur]) * (i - left - 1);
                }
            }
            st.push(i);

        }
        return res;*/

        /*左右开工*/
        /*int res = 0;
        int N = height.size();
        vector<int> left(N,0);
        if (N < 3) return 0;
        int h = 0;
        for (int i = 0; i < N; i++){
            h = max(h, height[i]);
            left[i] = h;
        }
        h = 0;
        for(int i = N-1; i>0;i--) {
            h = max(h,height[i]);
            res+= min(h,left[i]) - height[i];
        }
        return res;
        */

        /*双指针法*/
        int res = 0;
        int lmax = 0;
        int rmax = 0;
        int l,r;
        l = 0; r = height.size()-1;
        while(l < r) {
            if(height[l] < height[r]) {
                lmax < height[l] ? (lmax = height[l]) : res += lmax - height[l];
                l++;
            } else {
                rmax < height[r] ? (rmax = height[r]) : res += rmax - height[r];
                r--;
            }
        }
        return res;
    }
};