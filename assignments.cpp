#include <iostream>
using namespace std;
#define lol long long int
int main()
{
  int num;
  int result = 0;
  cin >> num;
  for (int i = 1; i <= num; i++)
  {
    if (num >= 1)
    {
      result += i;
    }
  }
  cout << result;

  return 0;
}

// shawrma
// #include <iostream>
// using namespace std;
// int main()
// {
// #define int long long
//   int order, price;
//   cin >> order;
//   cin >> price;
//   if (order < 2000 && price < 2000 && order > 0 && price > 0)
//   {
//     cout << order * price * 3;
//   }
//   return 0;
// }