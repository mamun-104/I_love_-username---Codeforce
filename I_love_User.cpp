#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,result=0;
    cin>>n;
    int i,maxx=0,minn=0;

    for(i=0;i<n;i++)
    {
        cin>>m;
        if(i==0){maxx=m; minn=m;}
        else
        {
            if(m>maxx){result++; maxx=m;}
            if(m<minn) {result++; minn=m;}
        }
    }
    cout<<result;


    return 0;
}


