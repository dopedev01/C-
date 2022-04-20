#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[20],n,s[10];
int sum=0;
cin>>n;
for(int i=0;i<n;i++){
cin>>a[i];
}



for(int i=0;i<n;i++){
sum+=a[i];
}
cout<<sum<<"\n";

for(int i=0;i<n;i++){
s[i]=sum-a[i];
cout<<s[i]<<"\n";
}
cout<<*min_element(s,s+n)<<"\n";
cout<<*max_element(s,s+n);


return 0;

}
