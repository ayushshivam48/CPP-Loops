#include<iostream>
using namespace std;
int main(){
    int a,d,n,an;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter d: ";
    cin>>d;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        an=a+(i-1)*d;
        cout<<an<<endl;
    }
}