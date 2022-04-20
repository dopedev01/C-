#include<bits/stdc++.h>
using namespace std;
int rev(int n){
int rev=0;int rem=0;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
return rev;
}
int main(){
int num;
cout<<"enter a number:";
cin>>num;
cout<<rev(num);
return 0;
}
