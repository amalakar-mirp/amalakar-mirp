#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cout << "enter co ordinates of point 1"<<endl;
int x1; int y1;
cin >> x1 >>y1;
cout<< "enter co ordinates of point 2"<<endl;
int x2; int y2;
cin>>x2>>y2;
cout<< "co ordinates of point 3"<<endl;
int x3;  int y3;
cin>>x3>>y3;
if(((x1==x2)&&(y1=y2))||((x2==x3)&&(y2==y3))||((x3==x1)&&(y3==y1)))
cout << "no triangle " <<endl;
else
{
int d1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
int d2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
int d3=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
cout << "the sides of the triangle: " <<d1<<" "<<d2<<" "<<d3<<endl;
if((d1==d2)&&(d2==d3))
cout<<"The triangle is EQUILATERAL. " <<endl;
if((d1==d2)||(d2==d3)||(d3==d1))
cout<<"The triangle is ISOCELES. " <<endl;
if((d1!=d2)&&(d2!=d3)&&(d3!=d1))
cout<<"The triangle is SCALENE. " <<endl;
}
return 0;
}


