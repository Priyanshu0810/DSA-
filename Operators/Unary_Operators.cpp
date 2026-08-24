// Unary Arithmetic Operators

#include<iostream>
using namespace std;
int main(){
    int a=10, b=5;
    cout<<"a++ = "<<a++<<endl;  //...10 (post-increment)
    cout<<"a = "<<a<<endl;      //...11 (after post-increment)
    
    cout<<"++b = "<<++b<<endl;  //...6 (pre-increment)
    cout<<"b = "<<b<<endl;      //...6 (after pre-increment

    cout<<"a-- = "<<a--<<endl;  //...11 (post-decrement)
    cout<<"a = "<<a<<endl;      //...10 (after post-decrement

    cout<<"--b = "<<--b<<endl;  //...5 (pre-decrement)
    cout<<"b = "<<b<<endl;      //...5 (after pre-decrement)

    
    return 0;

}