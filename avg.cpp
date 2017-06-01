#include <iostream>
using namespace std;
int main()
{
int n, num, x=0;
cout<<"enter number of numbers: "<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"enter number"<<endl;
cin>>num;
x=x+num;
}
int avg=x/n;
cout<<"average= "<<avg<<endl;
return 0;
}
