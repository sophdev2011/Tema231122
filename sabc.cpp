#include <iostream>
using namespace std;


int s(int x, int y)
{
   return y*(y+1)/2 - (x-1)*x/2;
}


int main()
{
   int a, b, c;
   cin >> a >> b >> c;
   cout << s(a, b) << ' ' << s(b, c) << ' ' << s(a, c);

   return 0;
}