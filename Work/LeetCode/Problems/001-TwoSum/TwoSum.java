/*************************************************************************
    > File Name: TwoSum.cpp
    > Author: lwei
 ************************************************************************/
/*********************
 * Given an array of integers, find two numbers such that they add up to a specific target number.
 * The function twoSum should return indices of the two numbers such that they add up to the target,
 * where index1 must be less than index2.
 * Please note that your returned answers (both index1 and index2) are not zero-based.
 * You may assume that each input would have exactly one solution.
 * Input: numbers=[2,7,11,15] target=9
 * Output: index1=1, index2=2
 * ********************/
class Solution {
     public int[] twoSum(int[] nums, int target) {
	        int totalSoFar = 0;
	        int resultArray[] = new int[2];
	        Set<ElementNamePositon> setOfElements = new HashSet<>();
	        if(nums!=null && nums.length>0) {
	            for(int i=0;i<nums.length;i++) {
	                int complement = target-nums[i];
	                if(containsWithValue(setOfElements,complement)!=null) {
	                    resultArray[0] = containsWithValue(setOfElements,complement).getPositon();
	                    resultArray[1] = i;
	                    return resultArray;
	                } else {
	                    setOfElements.add(new ElementNamePositon(i,nums[i]));
	                }
	            }
	        }
	        return resultArray;
	    }
	    
	    private ElementNamePositon containsWithValue(Set<ElementNamePositon> setOfElements, 
                                                     int complement) {
	        for(ElementNamePositon element : setOfElements) {
	            if(element.getValue()==complement) {
	                return element;
	            }
	        }
	        return null;
	    }
}




class ElementNamePositon {
		public ElementNamePositon(int positon) {
			this.positon = positon;
		}
		public ElementNamePositon(int positon,int value) {
			this.positon = positon;
			this.value = value;
		}
		int value;
		public int getValue() {
			return value;
		}
		public void setValue(int value) {
			this.value = value;
		}
		public int getPositon() {
			return positon;
		}
		public void setPositon(int positon) {
			this.positon = positon;
		}
		int positon;
	}
