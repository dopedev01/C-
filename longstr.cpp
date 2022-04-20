#include<bits/stdc++.h>
using namespace std;
int main(){
int n;

cin>>n;
string a[n],lon="";
int b[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
int m=a[0].size();
for(int i=0;i<n;i++){
if(a[i].size()>m){
m=a[i].size();
lon=a[i];
}

}
cout<<lon;
}











