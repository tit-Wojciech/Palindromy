#include <iostream>
#include <fstream>

using namespace std;

int i=0;
string a;
fstream d;

bool sp (string s)
{
    int dl=s.size();
    for ( int i=0;i<dl/2;i++)
    if(s[i]!=s[dl-i-1]) return false;
    return true;
}

int main()
{
    d.open("dane.txt", ios::in);
    while(d.good())
    {
        d>>a;
        if(sp(a)==true)
        {
            cout<<a<<endl;
            i++;
        }
    }
    d.close();
    cout<<"Liczba palindromow: "<<i<<endl;

    return 0;
}
