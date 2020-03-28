/*************************************************************************
    > File Name: Pro1079_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;
   
const int num_digit = 10;
const int max_bit = 20;
const int max_size = max_bit+1;
vector<vector<vector<int>> > T(8,vector<vector<int>>(num_digit,vector<int>(max_size,-1)));
   
void traverse(int t){
    int i,k;
    unsigned seed = time(0);
    srand(seed);
       
    for(int stage = 7;stage>=t;stage-- ){
        cout<<"stage"<<stage<<" testing:"<<endl;
        for(int j=0;j<5;j++){
            i = rand()%10;
            k = rand()%max_bit+1;
        }    
        cout<<endl;
    }
       
}
void preprocessing(int stage){
   
    if(stage==7){
        for(int i=0;i<=9;i++){
            for(int k=1;k<=max_bit;k++){
                if(k>i){
                    break;
                }else{
                    if(k==1) {
                        T[7][i][k]=i-k;
                    }
                    else {
                        T[7][i][k]=T[7][i][k-1]+i-k;
                    }
                }
            }
        }
    }
    if(stage==6)
	{
        for(int i=2;i<=9;i++){
            for(int k=1;k<=max_bit;k++){
                if(k==1){
                    if(i!=0){
                        T[6][i][k]=i-k;
                    }
                    continue;
                }
                int ans = -1;
                int sum = 0;
                for(int j=9;j>=i+1;j--){
                    if(k<=(9-j+1)) break;
                    sum+=j;
                    int t = T[7][9][k-(9-j+1)];
                    if(t==-1) 
						continue;
                    if(ans<sum+t)
					{
                        ans = sum+t;
                    }
                }
                if(ans<T[7][i][k]){
                    ans = T[7][i][k];
                }
                T[6][i][k] = ans;
            }
        }
   
    }
    if(stage==5){
        for(int i=0;i<=9;i++){
            for(int k=1;k<=max_bit;k++){
                int ans = -1;
                int sum = 0;
                for(int j=9;j>=i+1;j--){
                    if(k<=(9-j+1)) break;//
                    sum+=j;
                    int t = T[6][9][k-(9-j+1)];
                    if(t==-1) continue;
                    if(ans<sum+t){
                        ans = sum+t;
                    }
                }
                if(k!=1 and ans==-1) break;
                T[5][i][k] = ans;
            }
        }
    }
    if(stage==4){
        for(int i=0;i<=9;i++){
            for(int k=1;k<=max_bit;k++){
                int ans = -1;
                int sum = 0;
                for(int j=i-1;j>=0;j--){
                    if(k<=(i-j)) break;
                    sum+=j;
                    int t = T[4][j][k-(i-j)];
                    if(t==-1) continue;
                    if(ans<sum+t){
                        ans = sum+t;
                    }
                }
                if(i!=0){
                    if(T[5][i][k]!=-1 and  ans<T[5][i][k]){
                        ans = T[5][i][k];
                    }
                }
                for(int j=1;j<=9;j++){
                    if(k==1) break;
                    if(T[5][j][k-1]==-1) 
						continue;
                    if(ans<j+T[5][j][k-1])
					{
                        ans = j+T[5][j][k-1];
                    }
                }
                T[4][i][k] = ans;
            }
        }
    }
    if(stage==3)
	{
        for(int i=0;i<=9;i++){
            for(int k=1;k<=max_bit;k++){
                int ans = -1;
                int sum = 0;
                for(int j=i-1;j>=0;j--)
				{
                    if(k<(i-j+3)) 
						break;
                    sum+=j;
                    int t = T[4][j][k-(i-j)];
                    if(t==-1) 
						continue;
                    if(ans<sum+t)
					{
                        ans = sum+t;
                    }
                }
                for(int j=1;j<=9;j++)
				{
                    if(k==1) 
						break;
                    if(T[5][j][k-1]==-1) 
						continue;
                    if(ans<j+T[5][j][k-1])
					{
                        ans = j+T[5][j][k-1];
                    }
                }
                T[3][i][k] = ans;
            }
        }
    }
    if(stage==2)
	{
        for(int i=0;i<=9;i++)
		{
            for(int k=1;k<=max_bit;k++)
			{
                int ans = -1;
                int sum = 0;
                for(int j=i-1;j>=0;j--)
				{
                    if(k<(i-j+3)) 
						break; 
                    sum+=j;
                    int t = T[3][j][k-(i-j)];
                    if(t==-1) 
						continue;
                    if(ans<sum+t)
					{
                        ans = sum+t;
                    }
                }
                sum = 0;
                for(int j=9;j>=i+1;j--)
				{
                    if(k<=(9-j+1)) 
						break;
                    sum+=j;
                    int t = T[3][9][k-(9-j+1)];
                    if(t==-1) 
						continue;
                    if(ans<sum+t)
					{
                        ans = sum+T[3][9][k-(9-j+1)];
                    }
                }
                T[2][i][k] = ans;
            }
        }
    }
    if(stage==1)
	{
        for(int i=0;i<=9;i++)
		{
            for(int k=1;k<=max_bit;k++)
			{
                int ans = -1;
                int sum = 0;
                for(int j=9;j>=i+1;j--)
				{
                    if(k<=(9-j+1)) 
						break;
                    sum+=j;
                    int t = T[2][9][k-(9-j+1)];
                    if(t==-1) 
						continue;
                    if(ans<sum+t)
					{
                        ans = sum+T[2][9][k-(9-j+1)];
                    }
                }
                if(i==1 and k==5)
				{
                }
                T[1][i][k] = ans;
            }
        }
    }
       
}
   
int cal_stage(string s)
{
    int n = s.length();
    int stage = 1;
    int i = 0;
    while(i<n and s[i]=='0') i++;
    if(i==n-1) 
		return stage;
       
    if(i<n-1 and s[i]>=s[i+1]) 
		return -1;
    stage=2;
    while(i<n-1 and s[i]<s[i+1]) i++;
    if(i==n-1) 
		return stage;
    if(s[i]==s[i+1]) 
		return -1;
    int j = i;
    while(i<n-1 and s[i]>s[i+1]) 
		i++;
    if(i-j==1)
	{
        stage=3; 
        if(i==n-1) 
			return stage;
        j = i+1;
        stage = 5;
    }
	else
	{
        stage=4;
        if(i==n-1) 
			return stage;
        stage=5;
        if(s[i]=='0' or s[i]==s[i+1])
		{
            j=i+1;
        }
		else 
			j=i;
    }
    if(j==n-1) 
		return stage;
    i=j;
    if(s[i]=='0' or s[i]>=s[i+1]) 
		return -1;
    stage = 6;
       
    while(i<n-1 and s[i]<s[i+1]) 
		i++;
    if(i==n-1) 
		return stage;
    if(s[i]==s[i+1]) 
		return -1;
    stage = 7;
    while(i<n-1 and s[i]>s[i+1]) 
		i++;
    if(i==n-1) 
		return stage;
    return -1;
}
   
int score;
void count(string A,string B,int k,int prefix_value)
{
    int n = A.length();
    int i=0;
    while(i<n and A[i]=='0') 
		i++;
    string prefix = A.substr(i,(k-i)+1);
    int stage = cal_stage(prefix);
    int v = A[k]-'0';
    if(stage==-1) 
		return;
    if(T[stage][v][n-k-1]==-1);
    int now = prefix_value+T[stage][v][n-k-1];
    if(now>score)
	{
        score = now;
    }
}
   
void cal(string A,string B,int k,int prefix_score)
{
    int n = A.length();
    int i=0;
    while(i<n and i<k and (A[i]=='0' and B[i]=='0'))
	{
        k--;
        i++;
        n--;
    }
    if(i!=0)
	{
        A = A.substr(i);
        B = B.substr(i);
    }
    if(n<6) return ;
    if(A==B)
	{
        if(n>=6 and cal_stage(A)==7)
		{
            int sum = 0;
            for(auto c:A)
			{
                sum+=c-'0';
            }
            if(sum>score) 
				score = sum;
        }
        return ;
    }
    int v = A[k]-'0';
    string prefix = "";
    int stage = -1;
    if(k!=0)
	{
        prefix = A.substr(0,k);
        stage = cal_stage(prefix);
        if(stage==-1) 
		{
            return;
        }
        if(prefix_score+T[stage][A[k-1]-'0'][n-k]<=score)
		{
            return ;
        }
    }
    if(k==n-1) 
		return ; 
    if(A[k]==B[k])
	{
        cal(A,B,k+1,prefix_score+A[k]-'0');
        return ;
    }
    string na(B),nb(A);
    for(int i=k+1;i<n;i++)
	{
        na[i]='0';
        nb[i]='9';
    }
    if(B[k]-A[k]>1){
        string ma(A),mb(B);
        for(int i=k+1;i<n;i++){
            ma[i]='0';
            mb[i]='9';
        }
        for(int mk=A[k]+1;mk<=B[k]-1;mk++){
            ma[k]=mk;mb[k]=mk;
            count(ma,mb,k,prefix_score+mk-'0');
        }
    }
    cal(na,B,k+1,prefix_score+B[k]-'0');
    cal(A,nb,k+1,prefix_score+A[k]-'0');
}
   
   
int main(void)
{
    int N;
    cin>>N;
    for(int i=7;i>=1;i--)
        preprocessing(i);
    for(int i=0;i<=9;i++)
	{
        for(int k=1;k<=max_bit;k++)
		{
            for(int t=7;t>=1;t--)
			{
                T[0][i][k]=max(T[t][i][k],T[0][i][k]);
            }
        }
    }
    for(int k=1;k<=N;k++)
	{
        string A,B;
        cin>>A>>B;
        score = 0;
        int an = A.length(),bn = B.length();
        for(int i=an;i<bn;i++)
		{
			A = "0"+A;
		}
        cal(A,B,0,0);
        cout<<"Case "<<k<<": "<<score<<endl;
    }
    return 0;
}
