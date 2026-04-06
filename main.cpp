#include <iostream>
#include "queue.h"

using namespace std;

// Makes sure that each number has correct suffix
string getSuffix(int number) {
    if (number == 1) return "st";
    if (number == 2) return "nd";
    if (number == 3) return "rd";
    return "th";
}

int main() {
    Queue line;

    // Manually add 5 people to the queue
    line.arr[0].name = "SpongeBob";
    line.arr[0].number = 1;

    line.arr[1].name = "Patrick";
    line.arr[1].number = 2;

    line.arr[2].name = "Sandy";
    line.arr[2].number = 3;

    line.arr[3].name = "Squidward";
    line.arr[3].number = 4;

    line.arr[4].name = "Mr.Krabs";
    line.arr[4].number = 5;

    line.count = 5;

    // Process the queue
    while (!line.isEmpty()) {
        Person p = line.front();

        cout << "Hello matey! " << p.name
             << ", you are " << p.number << getSuffix(p.number)
             << " in line!" << endl;

        line.frontIndex++;
        line.count--;
    }

    cout << "We are now closed, thanks for coming!" << endl;

    return 0;
}