#include <iostream>
using namespace std;
int main()
{
 int n;
 cout<<"enter the size of an array \n";
 cin>>n;
 int arr[n];
 cout<<"enter the array No:\n";
 for(int i=0;i<n;i++)
 cin>>arr[i];
 cout<<"the array is :\n";
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 return 0;
}
