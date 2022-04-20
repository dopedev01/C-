#include<bits/stdc++.h>
using namespace std;
int a[10],i;

int isTriangle(){
if((a[0]<a[1]+a[2])&&(a[1]<a[0]+a[2])&&(a[2]<a[1]+a[0]))
return 1;
return 0;
}
void TType(){
if(a[0]==a[1]==a[2])
cout<<"equilateral";
else if(a[0]!=a[1]!=a[2])
cout<<"scalene";
else
cout<<"isoceles";
}

int main(){

for(int i=0;i<3;i++)
cin>>a[i];
for(int i=0;i<3;i++){
if(a[i]>10 || a[i]<=0)
cout<<char(97+i)<<" not in range\n";
}
if((a[0]<=10 && a[0]>0)&&(a[1]<=10 && a[1]>0)&&(a[2]<=10 && a[2]>0))
if(isTriangle())
TType();
else
cout<<"triangle will not form";
}
