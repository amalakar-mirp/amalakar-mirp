#include <iostream>
using namespace std;
int main() {
int l=0, sl=0;
cout << "enter four values";
int n1;
cin >> n1;
int n2;
cin >> n2;
int n3;
cin >> n3;
int n4;
cin >> n4;
if (((n1>n2)&&(n1>n3))&&(n1>n4))
  l=n1;
else if (((n2>n3)&&(n2>n4))&&(n2>n1))
  l=n2;
else if (((n3>n4)&&(n3>n2))&&(n3>n1))
  l=n3;
else if (((n4>n3)&&(n4>n2))&&(n4>n1))
  l=n4;
cout << "the largest number is: " << l <<endl;
if (l==n1)
n1=n4;
if (l==n2)
n2=n4;
if (l==n3)
n3=n4;
if (((n1>n2)&&(n1>n3))&&(n1>n4))
  sl=n1;
else if (((n2>n3)&&(n2>n4))&&(n2>n1))
  sl=n2;
else if (((n3>n4)&&(n3>n2))&&(n3>n1))
  sl=n3;
cout << "second largest number" << sl << endl;
return 0;
}



