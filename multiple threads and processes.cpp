#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

void print_message(int id) {
  std::cout << "Hello from thread " << id << "!" << std::endl;
}

int main() {
  int num_threads = 4;
  int num_processes = 3;

  // create threads
  std::thread threads[num_threads];
  for (int i = 0; i < num_threads; i++) {
    threads[i] = std::thread(print_message, i);
  }

  // create processes
  for (int i = 0; i < num_processes; i++) {
    std::string command = "echo 'Hello from process " + std::to_string(i) + "!'"; 
    system(command.c_str());
  }

  // join threads
  for (int i = 0; i < num_threads; i++) {
    threads[i].join();
  }

  return 0;
}
