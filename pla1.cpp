#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
int x;
float y;
cin >> x >> y;
if (x % 5 != 0 || x > y)
{
cout << fixed << setprecision(2) << y;
// printf("%.2f", y);
}
else
{
y = y - x - 0.5;
cout << fixed << setprecision(2) << y;
// printf("%.2f", y);
}
return 0;
}