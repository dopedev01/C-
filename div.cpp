#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a[10],target;
cout<<"Enter n:";
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"enter k:";
cin>>target;
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
//cout<<i<<j<<"\n";
if((a[i]+a[j])%k==0){
cout<<a[i]<<" "<<a[j]<<"\n";
}
return 0;
}
