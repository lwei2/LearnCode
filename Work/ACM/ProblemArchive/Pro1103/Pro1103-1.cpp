/*************************************************************************
    > File Name: Pro1103-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <sstream>


using namespace std;


struct ss
{
	int H, M;
};

bool cmp(ss a, ss b)
{
	if(a.H < b.H || (a.H == b.H && a.M <= b.M))
		return true;
	else
		return false;
}

int main(void)
{
	int ans;
	int A,B,C;
	int h,m,n;
	int a,b,c;
	while(scanf("%d %d %d",&A,&B,&C) && (A+B+C))
	{
		a = b = c = ans = 0;
		ss aa[101], bb[101], cc[101];
		char s[20];
		while(scanf("%s",s) && s[0] != '#')
		{
			sscanf(s, "%d:%d",&h,&m);
			scanf("%d",&n);
			if(n <= 2)
			{
				if(A > 0)
				{
					aa[a].H = h;
					aa[a++].M = m;
					ans += n;
					A--;
				}
				else
				{
					if(h > aa[0].H || (h == aa[0].H && m >= aa[0].M))
					{
						ans += n;
						int hh = aa[0].H + (aa[0].M + 30)/60;
						int mm = (aa[0].M + 30)%60;
						if(hh > h || (hh == h && mm	>= m))
						{
							aa[0].H = hh;
							aa[0].M = mm;
						}
						else
						{
							aa[0].H = h;
							aa[0].M = m;
						}
						sort(aa,aa+a,cmp);
					}
				}
			}
			else if(n <= 4)
			{
				if(B > 0)
				{
					bb[b].H = h;
					bb[b++].M = m;
					ans += n;
					B--;
				}
				else
				{
					if(h > bb[0].H || (h == bb[0].H && m >= bb[0].M))
					{
						ans += n;
						int hh = bb[0].H + (bb[0].M + 30)/60;
						int mm = (bb[0].M + 30)%60;
						if(hh > h || (hh == h && mm >= m))
						{
							bb[0].H = hh;
							bb[0].M = mm;
						}
						else
						{
							bb[0].H = h;
							bb[0].M = m;
						}
						sort(bb, bb+b,cmp);
					}
				}
			}
			else
			{
				if(C > 0)
				{
					cc[c].H = h;
					cc[c++].M = m;
					ans += n;
					C--;
				}
				else
				{
					if(h > cc[0].H || (h == cc[0].H && m >= cc[0].M))
					{
						ans += n;
						int hh = cc[0].H + (cc[0].M + 30)/60;
						int mm= (cc[0].M + 30)%60;
						if(hh > h || (hh == h && mm >= m))
						{
							cc[0].H = hh;
							cc[0].M = mm;							
						}
						else
						{
							cc[0].H = h;
							cc[0].M = m;
						}
						sort(cc, cc + c, cmp);
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
