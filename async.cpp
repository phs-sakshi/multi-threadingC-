#include <iostream>
#include <future>

int add(int x, int y) {
  return x + y;
}

int main() {
  std::future<int> result = std::async(add, 1, 2);
  std::cout << "The result is: " << result.get() << std::endl;
  return 0;
}
