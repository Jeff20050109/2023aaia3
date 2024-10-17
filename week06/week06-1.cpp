#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <int> a;
    a.push_back(20);
    a.push_back(30);
    a.push_back(50);
    for(int i=0;i<3;i++){
        cout<<a[i]<<"\n";
    }
}
