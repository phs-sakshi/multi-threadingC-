## Implement multi threading in C++

We tried out different ways to implement multi threading and multi processing in C++ using async functions, std::thread library for multi threading and synchronization mechanisms such as mutexes.
1. std:: thread: The C++ standard introduced the std::thread library which provides a simple way to create and manage threads.
2. std::mutex: To protect shared data between threads, we used std::mutex library. It provides a way to lock and unlock a resource to ensure that only one thread can access it at a time.
3. std::async: The std::async library provides a way to execute a function asynchronously and returns a std::future object that can be used to retrieve the result of the function.
4. Finally, we tried implementing multiple threads and processes in the same function. 

