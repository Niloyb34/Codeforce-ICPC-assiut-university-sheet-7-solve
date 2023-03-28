#include<bits/stdc++.h>
using namespace std;
void print(int t)
{
    if(t>0)
    {
        cout<<"I love Recursion"<<endl;
        t--;
        print(t);
    }
}
int main()
{
    int t;
    cin>>t;
    print(t);
    return 0;
}
