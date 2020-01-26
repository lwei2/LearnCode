/*************************************************************************
    > File Name: Pro0052_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int n;cin>>n;
    vector<pair<int, int>> vp(n*2);
    int val1,val2,val3;
    for(int i = 0;i<n;i++){
        scanf("%d %d %d",&val1,&val2,&val3);
        vp[i*2].first = val1;
        vp[i*2].second = -val3;
        vp[i*2+1].first = val2;
        vp[i*2+1].second = val3;
    }
    sort(vp.begin(), vp.end());
    multiset<int> st;
    int pre = 0;
    int pre_point = -1;
    for(auto& p : vp){
        if(p.second>0){
            if(st.find(-p.second)!=st.end()) st.erase(st.find(-p.second));
        }else{
            st.insert(p.second);
        }
        int cur = st.empty()?0:*st.begin();
        if(pre!=cur){
            if(pre_point!=-1 && pre!=0){
                printf("%d %d %d\n",pre_point,p.first,-pre);
            }
            pre =cur;
            pre_point=p.first;
        }
    }
}
