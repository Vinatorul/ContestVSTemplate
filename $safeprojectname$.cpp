#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <map>
#include <string>
#include <cstring>
#include <stack>
#include <deque>
#ifdef HOME
#include <cassert>
#pragma warning (disable: 4996)
#endif

#define ifthen(x,y,z) (x ? y : z)

using namespace std;

typedef long long ll;
typedef double db;
typedef unsigned long long ull;
typedef unsigned int uint;

long long GCD(long long a, long long b)
{
  if (0 == b)
    return a;
  return GCD(b, a%b);
}

long long LCM(long long a, long long b)
{
  return (a / GCD(a, b)) * b;
}

int main()
{
  ios_base::sync_with_stdio(0);
#ifdef HOME
  assert(freopen("input.txt", "r", stdin));
  assert(freopen("output.txt", "w", stdout)); 
#endif

  // Insert your code here

#ifdef HOME
  cout << "Time: " << (int)(clock() * 1000. / CLOCKS_PER_SEC) << " ms\n";
#endif
  return 0;
}