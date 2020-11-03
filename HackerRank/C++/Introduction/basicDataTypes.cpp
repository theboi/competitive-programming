#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Supposedly makes cout/cin as fast as printf/scanf
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a; long b; char c; float d; double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout<<fixed<<setprecision(3)<<d<<"\n";
    cout<<fixed<<setprecision(9)<<e<<"\n";
    return 0;
}