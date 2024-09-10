#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no: ";
    cin>>n;
    int f=1;
    for(int i=1;i<n;i++){
        if (n%i==0) f=i;
    }
        cout<<f<<endl;
}