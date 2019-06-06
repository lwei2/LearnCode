/*************************************************************************
    > File Name: Pro1053.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <string>
 
using namespace std;
 
typedef struct Node{
    int value , depth; // value 表示出现的次数 ， depth 表示此结点位于第几层，也就是深度
    struct Node *left, *right;
 
}Node;
 
// 用于 qsort() 函数
int cmp( const void *a, const void *b ) {
    return (*(Node*)a).value - (*(Node*)b).value;
}
 
// 定义一个结点数组来保存一棵树.因为最多可能有27个字符，所以27×27的大小比较保险
const int MAXN = 27*27;
Node node[ MAXN ];
 
int ans;
void getEn( Node* t );
 
// 建立huffuman树
Node* buildTree( string in ) {
    int i, length = in.length();
 
    // 初始化，没有这一步会影响答案
    for( i=0; i<length*length && i<MAXN; i++ ) {
        node[i].value = node[i].depth = 0;
        node[i].left = node[i].right = NULL;
    }
 
    int hash[27] = { 0 };
    for( i=0; i<length; i++ ) {
        if( in[i] == '_' ) {
            hash[ 26 ] ++;
        } else {
            hash[ in[i]-'A' ] ++;
        }
    }
 
    int total = 0;
    for( i=0; i<27; i++ ) {
        if( hash[i] != 0 ) {
            node[ total ].value = hash[i];
            total ++;
        }
    }
 
    // 如果整个字符串只有一种字符，则直接返回节点
    if( total == 1 ) {
        ans = node[0].value; // = in.length
        return &node[0];
    }
 
    // 建立huffman树的关键步骤
    int pos = 0;
    while( pos != total-1 ) {
        qsort( node+pos, total-pos, sizeof( Node ), cmp );
        node[total].value = node[pos].value + node[pos+1].value;
        node[total].left = &node[pos];
        node[total].right = &node[pos+1];
        pos += 2;
        total ++;
    }
 
    // 将用于表示答案的变量初始化，这步决不能忘记
    ans = 0;
    return &node[pos];
}
 
 
// dfs 得出值
void getEn( Node* t ) {
    if( t->left == NULL && t->right == NULL ) {
        ans = ans + t->depth * t->value;
        return ;
    }
 
    if( t->left != NULL ) {
        t->left->depth = t->depth + 1;
        getEn( t->left );
    }
 
    if( t->right != NULL ) {
        t->right->depth = t->depth + 1;
        getEn( t->right );
    }
 
}
 
int main()
{
    string in;
    while( cin >> in ) {
        // 判断输入是否已经结束
        if( in.length()==3 ) {
            if( in[0]=='E' && in[1]=='N' && in[2]=='D' ) {
                break;
            }
        }
 
        ans = 0 ;
        Node *t = buildTree( in );
        getEn( t );
        printf( "%d %d %.1lf\n", in.length()*8 ,ans , ( in.length()*8.0) / ans*1.0 );
    }
    return 0;
}
