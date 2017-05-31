#include <iostream>
#include <cmath>
using namespace std;
int main() {
int a,b,c; int x=0;
cout << "enter constants" <<endl;
cout<<"first constant"<<endl;
cin>>a;
cout<<"2nd constant"<<endl;
cin>>b;
cout<<"3rd constant"<<endl;
cin>>c;
if(b*b-4*a*c>0)
cout<<"roots are real and distinct"<<endl;
if(b*b-4*a*c==0)
cout<<"roots are real and equal/l";
if(b*b-4*a*c<0)
cout<<"roots are not real/l";
x=((-b)+sqrt(b*b-4*a*c))/(2*a);
cout<<"Root= "<<x<<endl;
x=((-b)-sqrt(b*b-4*a*c))/(2*a);
cout<<"root= "<<x<<endl;
return 0;
}

