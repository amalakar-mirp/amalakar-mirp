#include <iostream>
using namespace std;
int main() {
int A, B, C, marks;
cout << "grade A CUTOFF";
cin >> A;
cout << "grade B cutoff";
cin >> B;
cout << "grade C cutoff";
cin >> C;
cout << "enter marks";
cin >> marks;
if (marks>=C)
cout << "grade C"<<endl;
else if (marks>=B)
cout << "grade B"<<endl;
else if (marks>=A)
cout << "grade A"<<endl;
return 0;
}

