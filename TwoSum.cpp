#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a[10],target;
cout<<"Enter n:";
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"enter target:";
cin>>target;
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
//cout<<i<<j<<"\n";
if(a[i]+a[j]==target){
cout<<i<<" "<<j<<"\n";
}
cout<<"no value found";
return 0;
}
