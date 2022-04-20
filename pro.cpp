#include<bits/stdc++.h>
using namespace std;
int main(){
int a[20][20];
int maxsum=0,r,c,csum=0,rsum=0,bsum,isum;
cin>>r;
cin>>c;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
cin>>a[i][j];
}
}
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
maxsum+=a[i][j];
}
}
cout<<maxsum<<"\n";

for(int j=0;j<c;j++){
rsum+=a[0][j]+a[r-1][j];
}
//cout<<rsum<<"\n";
for(int i=1;i<r-1;i++){
csum+=a[i][0]+a[i][c-1];
}
//cout<<csum<<"\n";
bsum=rsum+csum;
cout<<bsum<<"\n";
//isum=maxsum-bsum;
//cout<<bsum<<"\n";
isum=maxsum-bsum;
cout<<isum<<"\n";
cout<<bsum*isum<<"\n";

return 0;

}
