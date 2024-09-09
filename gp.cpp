#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,r,n,gn;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter r: ";
    cin>>r;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        gn=a*(pow(r,(i-1)));
        cout<<gn<<endl;
    }
}