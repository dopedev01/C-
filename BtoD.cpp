#include<bits/stdc++.h>
using namespace std;

int dec(long long d){
int rem,de=0;
int i=0;
while(d!=0){
rem=d%10;
de+=rem*pow(2,i);
d/=10;
i++;
}
return de;
}
int main()
{
long long n;
printf("enter binary number:");
scanf("%lld",&n);
cout<<dec(n);
return 0;
}
