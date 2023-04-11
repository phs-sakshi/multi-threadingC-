#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void print_message(int id) {
  mtx.lock();
  std::cout << "Hello from thread " << id << "!" << std::endl;
  mtx.unlock();
}

int main() {
  std::thread t1(print_message, 1);
  std::thread t2(print_message, 2);
  t1.join();
  t2.join();
  return 0;
}
