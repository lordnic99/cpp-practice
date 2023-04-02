#include <iostream>
#include <cmath>

void update(int *a, int *b) {
  int sum = *a + *b;
  int sub = abs(*a - *b);
  *a = sum;
  *b = sub;
}
int main(int argc, char *argv[]) {
  int a{}, b{};
  std::cin >> a;
  std::cin >> b;
  update(&a, &b);
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  return 0;
}
