#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"�п�J�@�Ӧr��,��������Ů�: ";
    cin >> s;
    cout <<"�r��s:"<<s<<"�����׬O:"<<s.length()<<"\n";
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<"\n";
    }
}