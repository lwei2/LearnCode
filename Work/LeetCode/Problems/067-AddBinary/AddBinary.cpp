class Solution {
public:
    string addBinary(string a, string b) {
		if(a.empty())
			return a;
		if(b.empty())
			return b;
		string retStr = "";
		int index = 0;
		int i = a.size()-1;
		int j = b.size()-1;
		while(i>=0 || j >=0 )
		{
			int sum = index;
			if(i>=0)
				sum+=a[i] - '0';
			if(j>=0)
				sum+=b[j] - '0';
			retStr = to_string(sum%2) + retStr;
			index = sum/2;
			j--;
			i--;
		}
		if(index!=0)
			retStr = to_string(index)+retStr;
		return retStr;
    }
};
