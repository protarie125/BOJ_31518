#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
bool ans;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  ans = true;
  for (auto i = 0; i < 3; ++i) {
    auto has_7 = false;
    for (auto j = 0; j < n; ++j) {
      ll x;
      cin >> x;
      if (7 == x) {
        has_7 = true;
      }
    }

    if (!has_7) {
      ans = false;
    }
  }

  if (ans) {
    cout << 777;
  } else {
    cout << 0;
  }

  return 0;
}