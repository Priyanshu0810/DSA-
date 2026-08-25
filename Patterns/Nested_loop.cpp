#include<iostream>
using namespace std;
int main(){
    int n;                               // when n = 4 the output is
    cout<<"enter the no. \n";            // 1 1 1 1
    cin>>n;                              // 2 2 2 2
    for(int x=1;x<=n;x++){               // 3 3 3 3
        for(int i=1;i<=n;i++){           // 4 4 4 4
           cout<<x;
        } cout<<endl;}
        return 0;
}