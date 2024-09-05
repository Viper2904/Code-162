class Solution {
private:
    vector<int> nextsmall(vector<int> &arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--)
        {
            int temp=arr[i];
            while(s.top()!=-1 && arr[s.top()]>=temp)
            {
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> prevsmall(vector<int> &arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            int temp=arr[i];
            while(s.top()!=-1 && arr[s.top()]>=temp)
            {
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int s=heights.size();
        vector<int>n(s);
        vector<int>p(s);
        n=nextsmall(heights,s);
        p=prevsmall(heights,s);
        int a=INT_MIN;
        for(int i=0;i<s;i++)
        {
            int l=heights[i];

            //exceptional case
            if(n[i]==-1)
            {
                n[i]=s;
            }
            int b=n[i]-p[i]-1;
            int area=l*b;
            a=max(a,area);
        }
        return a;
    }
};