#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
int count =0;
for(int i=0;i<n-1;i++){
for(int j=0;j<n-1-i;j++){
if(a[j]>a[j+1]){
swap(a[j],a[j+1]);
count++;
}
}
if(count=0)
break;
}

for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}





return 0;
}
