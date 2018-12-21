#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
int f[n];
int i;
f[0]=0,f[1]=1;
for(int i=2;i<=n;i++)
    f[i]=f[i-1]+f[i-2];
return f[n];
}
int main()
{
int x;
cout<<"Enter a number to find series up to: ";
cin>>x;
for(int j=0;j<=x;j++)
cout<<fib(j)<<" ";
}
