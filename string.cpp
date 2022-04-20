#include<bits/stdc++.h>
using namespace std;
int main(){
string s1,s2,s3,s4,s,srev;
cin>>s1;
cin>>s2;
for(int i=1;i<s1.length();i+=2){
s3.push_back(s1[i]);
}
for(int j=0;j<s2.length();j+=2){
s4.push_back(s2[j]);
}
s=s3+s4;
for(int i=s.size()-1;i>=0;i--){
srev.push_back(s[i]);
}
cout<<srev<<endl;
if(srev==s){
cout<<"palindrome";
}
else{
cout<<"not a palindrome";}
return 0;
}
