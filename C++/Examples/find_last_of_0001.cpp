
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str="Imissyou!";
    int index = str.find_last_of('s');
    cout<<"index:"<<index<<endl;

    return 0;
}
