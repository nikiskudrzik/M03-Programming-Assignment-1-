# M03-Programming-Assignment-1

## Program Description

This program simulates a queue line of people using a C++ struct. Each person has a name and a number representing their position in line. The program processes each person in "FIFO" order and prints a SpongeBob themed pirate greeting. When all people have been processed, the program prints a closing message.


## Inputs

This program does not require user input.

The queue is preloaded with the following five names:

* SpongeBob
* Patrick
* Sandy
* Squidward
* Mr.Krabs

Each person is assigned a number based on their position in line.


## Outputs

The program prints a greeting for each person in order, followed by a closing message.

Example output:

```
Hello matey! SpongeBob, you are 1st in line!
Hello matey! Patrick, you are 2nd in line!
Hello matey! Sandy, you are 3rd in line!
Hello matey! Squidward, you are 4th in line!
Hello matey! Mr.Krabs, you are 5th in line!
We are now closed, thanks for coming!
```

## How the Program Works

* A struct named `Person` stores:

  * name
  * number in line

* A Queue class contains:

  * an array of Person objects
  * a frontIndex to track the front of the queue
  * a count to track the number of people

* People are manually added to the queue array.

* The program processes the queue by:

  * accessing the front person
  * printing their greeting
  * moving the front index forward
  * decreasing the count


## Compile and Run Instructions

### Compile:

```
g++ main.cpp queue.cpp -o program
```

### Run:

```
./program
```


## Source Files Included

* `main.cpp`
* `queue.cpp`
* `queue.h`


## Program Testing

I have included 3 screenshots showing:

1. First two people being greeted
2. Middle of the queue
3. Final person and closing message
