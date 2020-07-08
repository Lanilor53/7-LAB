//
// Created by Lenovo on 08.07.2020.
//

#include "Queue.h"

/**
Add an element to the queue
**/
template<typename QueueType>
void Queue<QueueType>::push(QueueType element) {
  this->queueList.push_front(element);
}

/**
Take an element from the queue
@return First element
**/
template<typename QueueType>
QueueType Queue<QueueType>::pop() {
  if(this->queueList.size()>0) {
    QueueType result = this->queueList.back();
    this->queueList.pop_back();
    return result;
  }else{
    throw std::out_of_range("Tried to pop from an empty queue");
  }
}