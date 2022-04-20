#include<bits/stdc++.h>
using namespace std;
bool pal(int n){
int rev=0;int rem=0;
int num=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if (rev==num)
return true;
return false;
}
int main(){
int num;
cout<<"enter a number:";
cin>>num;
cout<<pal(num);
return 0;
}
