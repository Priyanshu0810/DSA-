// Enter cost of 3 items from the user (using float datatype) - a pencil, a pen and an eraser. You have to output the total cost of the items back to the user as their bill. (Addon: You can also try adding 18% GST tax to the items in the bill as an advanced problem)
#include<iostream>
using namespace std;
int main (){
    float pencil, pen , eraser;
    cout<<"Enter the cost of pencil: ";
    cin>>pencil;
    cout<<"Enter the cost of pen: ";
    cin>>pen;
    cout<<"Enter the cost of eraser: ";
    cin>>eraser;
    float total_cost = pencil + pen + eraser;
    cout<<"Total cost of the items: "<<total_cost<<endl;

    float gst = total_cost *18/100;
    cout<<"GST (18%): "<<gst<<endl;
    float total_cost_with_gst = total_cost + gst;
    cout<<"Total cost of the items with 18% GST: "<<total_cost_with_gst<<endl;
    return 0;
}