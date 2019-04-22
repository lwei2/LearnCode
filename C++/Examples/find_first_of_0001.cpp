
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str = "MissYou";
    int index1 = str.find_first_of('s',0);
    cout<<"index1:"<<index1<<endl;

    int index2 = str.find_first_of('s',4);
    cout<<"index2:"<<index2<<endl;

    int index3 = str.find_first_of('s', 7);
    cout<<"index3:"<<index3<<endl;

    return 0;
}
