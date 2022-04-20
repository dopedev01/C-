#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
for(int i=2;i<n;i++)
if(n%i==0)
return false;
return true;
}
int main(){
cout<<"enter a number:";
int num;
cin>>num;
int j,i;
for(int i=2;i<=num;i++)
if(isPrime(i))
cout<<i<<"\n";
//j=i;
//cout<<j<<"\n";
return 0;
}

