#include <iostream>
#include <map>
#include <string>

std::map<int, std::string> number_text{{1, "one"},   {2, "two"},   {3, "three"},
                                       {4, "four"},  {5, "five"},  {6, "six"},
                                       {7, "seven"}, {8, "eight"}, {9, "nine"}};

const char *odd_or_even(int &num) { return (num % 2) == 0 ? "even" : "odd"; }

int main(int argc, char *argv[]) {
  int a{}, b{};
  std::cin >> a;
  std::cin >> b;
  system("clear");
  for (int i = a; i <= b; ++i) {
    if (i <= 9) {
      std::cout << number_text[i] << std::endl;
    } else {

      std::cout << odd_or_even(i) << std::endl;
    }
  }
  return 0;
}
