//
// Created by Lenovo on 08.07.2020.
//

#ifndef INC_7_LAB_QUEUE_H
#define INC_7_LAB_QUEUE_H
#include <iostream>
#include <list>

template <typename QueueType>
class Queue {
private:
  std::list<QueueType> queueList;
public:
  void push(QueueType element);
  QueueType pop();
};




#endif //INC_7_LAB_QUEUE_H
