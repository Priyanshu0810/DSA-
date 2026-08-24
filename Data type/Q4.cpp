// Question4: Write a program to calculate the area of a circle. Input: r (radius) Output: PI * r * r (area)

#include<iostream>
using namespace std;
int main()
{
    float r,areal;
    const float PI = 3.14159;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    areal = PI * r * r;
    cout<<"The area of the circle is: "<<areal<<endl;
    return 0;
}