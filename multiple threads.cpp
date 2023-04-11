#include <iostream>
#include <thread>

void print_message(int id) {
  std::cout << "Hello from thread " << id << "!" << std::endl;
}

int main() {
  int num_threads = 4;
  std::thread threads[num_threads];

  for (int i = 0; i < num_threads; i++) {
    threads[i] = std::thread(print_message, i);
  }

  for (int i = 0; i < num_threads; i++) {
    threads[i].join();
  }

  return 0;
}
