#include "queue.h"

Queue::Queue() {
    frontIndex = 0;
    count = 0;
}

Person Queue::front() {
    return arr[frontIndex];
}

bool Queue::isEmpty() {
    return count == 0;
}