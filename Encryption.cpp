#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k; string str,m[10];
cout<<"Enter_message:";
getline(cin,str);
cout<<"Enter_key:";
cin>>k;
n=str.size();
int e[n];

for(int i=0;i<n;i++){
e[i]=int(str[i]);
m[i]=e[i]-k;
cout<<string(m[i]);
}


}
