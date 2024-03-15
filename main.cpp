#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    double d;
    double h;
    double angle;

    cout<<"Enter distance from the tree : "<<endl;
    cin>>d;
    cout<<"Enter the eye when peering into your angle measuring device : "<<endl;
    cin>>angle;
    cout<<"Enter the height : "<<endl;
    cin>>h;

    double height = h+d*tan(angle);
    count<<"the height is: "<<height<<endl;

    return 0;
}
