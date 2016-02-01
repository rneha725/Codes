#include "iostream"
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
    // cout<<argv[1];
    string str=argv[1];
    int num=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            num=num+str[i]-'A';
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            num=num+str[i]-'a';
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            num=num+str[i]-'0';
        }
    }
    cout<<num;
    if(num%42==0) cout<<"\nYes";
    else cout<<"\nNo";
    return 0;
}
