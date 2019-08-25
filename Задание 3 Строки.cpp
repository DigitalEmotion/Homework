#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
int k;
vector<std::string> A;
string a, b;
cout << "enter message text:" << endl;
getline(cin, a);
a = a + ' ';
for (int i = 0; i < a.length(); i++)
{
if (isalpha(a[i])) b += a[i];
if ((!(isalpha(a[i]))) && (b != ""))
{
A.push_back(b);
b = "";
}
}
cout << "unique words:" << endl;
for (int i = 0; i < A.size(); i++)
{
k = 0;
for (int j = 0; j < A.size(); j++)
{
if (A[i] == A[j]) k++;
}
if (k == 1)
{
cout << A[i] << endl;
}
}
return 0;
}
