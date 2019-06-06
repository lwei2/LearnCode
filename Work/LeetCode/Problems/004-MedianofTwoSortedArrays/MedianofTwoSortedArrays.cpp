
class Solution
{
	public:
		double findMedianSortedArrary(vector<int> &nums1,vector<int> &nums2)
		{
			if(nums1.size() == 0)
        	{
	            return (nums2[nums2.size()/2]+nums2[nums2.size()/2-!(nums2.size()%2)])/2.0;
        	}
	        if(nums2.size() == 0)
	        {
	            return (nums1[nums1.size()/2]+nums1[nums1.size()/2- !(nums1.size()%2)])/2.0;
	        }  
	        vector<int> num3;
	        int size = (nums1.size()+nums2.size());
	        // int mid = ;
	        int flag = !(size%2);
	        int i,m1,m2,cur;
	        double a,b;
	        for(i = m1 = m2 = 0;i < size;i++)
	        {   
	            a = m1 < nums1.size()?nums1[m1]:INT_MAX;
	            b = m2 < nums2.size()?nums2[m2]:INT_MAX;
	            if(a < b)
	            {
	                num3.push_back(nums1[m1]);
	                m1++;
	            }
	            else
	            {
	                num3.push_back(nums2[m2]);
	                m2++;
	            }
	            if(i == size/2)
	                break;
	        }
	        return (num3[size/2]+num3[size/2-flag])/2.0;
		}
};

