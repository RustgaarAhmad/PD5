#include<iostream>
#include<iomanip>
using namespace std;
float pyramidvolume(string);

int length, width, height;
int main()
{
    float x = 160;
    cout<< fixed << setprecision(6) << x;
    string unit;
   cout<< "Enter the length of pyramid(in meters):";
   cin>> length;
   cout<< "Enter the width of the pyramid(in meters):";
   cin>> width;
   cout<< "Enter the height of the pyramid(in meters):";
   cin>> height;
   cout<< "Enter the desired output unit(millimeters, centimeters, meters, kilometers):";
   cin>>  unit;
   cout<< "The volume of pyramid is:";

   cout<<pyramidvolume(unit);
   cout<<" cubic" << unit;
   return 0;
   
}

float pyramidvolume(string unit)
{
    float volume;
    if(unit=="milimeters")
    {
        volume=(length*width*height)/3*100^3;
        return volume;
    }
    if(unit=="centimeters")
    {
        volume=(length*width*height)/3*100^3;
        return volume;
    }
    if(unit=="meters")
    {
        volume=(length*width*height)/3;
        return volume;
    }
    if(unit=="kilometers")
    {
        volume=(length*width*height)/3;
        return volume;
    }
}