#include <iostream>
#include <map>
#include <string>
#include <algorithm>

int max_of_four(int a, int b, int c, int d) {
  return std::max({a,b,c,d});
}
int main(int argc, char *argv[]) {
  int a{},b{},c{},d{};
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  std::cin >> d;
  std::cout << max_of_four(a,b, c, d) << std::endl;
  return 0;
}
