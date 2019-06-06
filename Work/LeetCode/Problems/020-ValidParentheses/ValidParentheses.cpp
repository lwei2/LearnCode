/*************************************************************************
    > File Name: ValidParentheses.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/

#ifndef __METHOD1
class Sulotion
{
	public:
	  bool isValid(string s)
	  {
			if(s.size() == 0)
  				return true;
			else
			{
				string::size_type position = s.find("()");
				if(position == s.npos)
				  position = s.find("[]");
				if(position == s.npos)
				  position = s.find("{}");
				if(position != s.npos)
				  return isValid(s.erase(position,2));
			}
			return false;			
	  }
};
#endif

