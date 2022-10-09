#include <iostream>
#include <cstring>

using namespace std;

class String
{
    string str;
public:
    String(string s)
    {
        str=s;
    }
    void operator ==(String &st)
    {
        strcmp(str,st.str);
    }
};
int main()
{
    String S1("ABC"),S2("BC");
    S1==S2;
    return 0;
}
