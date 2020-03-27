/*************************************************************************
    > File Name: Pro1075_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<vector>
#include<string>
#include<iostream>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
 
int solve(vector<int> a, vector<int> b){
    vector<int> res(a.size() + b.size(), 0);
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); j++){
            int tmp = a[i] * b[j], Itmp = i + j, jw = 0;
            while(tmp > 0 or jw > 0){
                int sum = res[Itmp] + tmp % 10 + jw;
                if(sum > 9){
                    jw = sum / 10;
                }
                else{
                    jw = 0;
                }
                res[Itmp]= sum % 10;
                tmp = tmp / 10;
                Itmp++;
            }
        }
    }
    int k = res.size() - 1;
    while(res[k] == 0){
        k--;
    }
    for(int ki = k; ki >= 0; ki--){
        cout << res[ki];
    }
    return 0;
}
 
int main(){
    vector<int> a, b;
    string line;
    getline(cin, line);
    for(int i = line.size() - 1; i >= 0; i--){
//        cout << line[i] << endl;
        int tmp = line[i] - '0';
        if( tmp < 10 and tmp >= 0){
            a.push_back(line[i] - '0');
        }
        else{
            exit(-1);
        }
    }
 
    getline(cin, line);
    for(int i = line.size() - 1; i >= 0; i--){
        int tmp = line[i] - '0';
        if( tmp < 10 and tmp >= 0){
            b.push_back(tmp);
        }
        else{
            exit(-1);
        }
    }
    solve(a, b);
    return 0;
}
