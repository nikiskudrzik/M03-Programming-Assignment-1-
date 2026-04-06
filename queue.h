#ifndef QUEUE_H
#define QUEUE_H

#include <string>
using namespace std;

struct Person {
    string name;
    int number;
};

class Queue {
public:
    Person arr[10];
    int frontIndex;
    int count;

    Queue();
    Person front();
    bool isEmpty();
};

#endif