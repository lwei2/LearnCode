class Solution
{
    public:
        int trap(vector<int>& height)
        {
            int size = height.size();
            int water = 0;
            vector<vector<int> >valleys(size, vector<int>(2,0));
            int maxLeft = 0, maxRight = 0;
            for(int left = 0, right = size - 1; left!=size;++left,--right)
            {
                valleys[left][0] = maxLeft;
                valleys[right][1] = maxRight;
                if(height[left]>maxLeft)
                    maxLeft = height[left];
                if(height[right] > maxRight)
                    maxRight = height[right];
            }
            for(int i = 0; i!=size;++i)
            {
                if(valleys[i][0]<=valleys[i][1]&&valleys[i][0]>height[i])
                    water += (valleys[i][0]-height[i]);
                else if(valleys[i][1]<valleys[i][0]&&valleys[i][1]>height[i])
                    water += (valleys[i][1]-height[i]);
            }
            return water;
        }
};
