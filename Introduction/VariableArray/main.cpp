#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::vector<int>> two;
  int n{}, q{};
  std::cin >> n;
  std::cin >> q;
  two.resize(n);
  for (auto &i : two) {
    int size{};
    std::cin >> size;
    i.resize(size);
    for (auto &j : i) {
      int value{};
      std::cin >> value;
      j = value;
    }
  }
  int k;
  for (int i = 0; i < q; ++i) {
    std::cin >> n;
    std::cin >> k;
    std::cout << two[n][k] << std::endl;
  }
  return 0;
}
