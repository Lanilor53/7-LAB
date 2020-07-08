#include <iostream>
#include "Queue.cpp"

int main() {
  // Ints
  auto* q = new Queue<int>;
  q->push(123);
  q->push(333);
  // 123
  std::cout << q->pop() << std::endl;
  // 333
  std::cout << q->pop() << std::endl;
  // Exception
  try {
    std::cout << q->pop() << std::endl;
  }catch(std::out_of_range &e){
    std::cout << e.what() << std::endl;
  }

  // Doubles
  auto* q2 = new Queue<double>;
  q2->push(123.333);
  q2->push(333.444);
  // 123.333
  std::cout << q2->pop() << std::endl;
  // 333.444
  std::cout << q2->pop() << std::endl;
  // Exception
  try {
    std::cout << q2->pop() << std::endl;
  }catch(std::out_of_range &e){
    std::cout << e.what() << std::endl;
  }
  // Strings
  auto* q3 = new Queue<std::string>;
  q3->push("I am a string");
  q3->push("And you are not, lol");
  // I am a string
  std::cout << q3->pop() << std::endl;
  // And you are not, lol
  std::cout << q3->pop() << std::endl;
  // Exception
  try {
    std::cout << q3->pop() << std::endl;
  }catch(std::out_of_range &e){
    std::cout << e.what() << std::endl;
  }


  return 0;
}