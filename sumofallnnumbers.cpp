#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no: ";
    cin>>n;
    int sum=0;
    for( int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
}