#include<bits/stdc++.h>

using namespace std;

int main() {
string a[]={"hell","he","hello"};
int n=sizeof(a)/sizeof(a[0]);
cout<<*(a+n);
/*sort(a,a+n);
string b=a[0],ans;
string c=a[n-1];
    for(int i=0;i<c.size();i++){
    if(b[i]==c[i]){
    ans+=b[i];
    }
    }
cout<<ans;*/
    return 0;
    }
