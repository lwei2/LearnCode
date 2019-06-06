class Solution
{
    public:
        string multiply(string num1, string num2)
        {
            string result(num1.size()+num2.size(),'0');
            for(int i = num1.size() - 1; i>=0; i--)
            {
                for(int j = num2.size() - 1; j >= 0; j--)
                {
                    int prod = (num1[i] - '0')*(num2[j] - '0') +(result[i+j+1] - '0');
                    result[i+j+1] = (prod %10)+'0';
                    result[i+j] = ((prod/10)+(result[i+j]-'0'))+'0';
                }
            }
	    int it = result.find_first_not_of("0");
            return (it<0?"0":result.substr(it));
        }
};
