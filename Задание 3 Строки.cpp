#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
int k;
vector<std::string> A;
string a, b;
cout << "¬ведите текст сообщени€:" << endl;
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
cout << "”никальные слова:" << endl;
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
system("pause");
return 0;
}
