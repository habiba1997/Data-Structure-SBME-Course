# Midterm Rivision

This repository is made to push the implementations of important data structures we have learned so far.

Clone to your machine:

```bash
git clone https://github.com/sbme-tutorials/sbe201-revision-demo.git
```

## Implemented Data Structures

The following table contains the implemented data structures and the corresponding header and test files (i.e source files with `main` function), updated when necessary:

| Data Structure | Implementation | Test |
|----------------|----------------|------|
| **Singly Linked List** | [int_linkedlist.hpp](https://github.com/sbme-tutorials/sbe201-revision-demo/blob/master/int_linkedlist.hpp) | [test_int_linkedlist.cpp](https://github.com/sbme-tutorials/sbe201-revision-demo/blob/master/test_int_linkedlist.cpp)|
| **Queue using Linked List** | [int_q_linkedlist.hpp](https://github.com/sbme-tutorials/sbe201-revision-demo/blob/master/int_q_linkedlist.hpp) | [test_int_q_linkedlist.cpp](https://github.com/sbme-tutorials/sbe201-revision-demo/blob/master/test_int_q_linkedlist.cpp) |
| **Queue using Array (Circular)** | [int_q_array.hpp](https://github.com/sbme-tutorials/sbe201-revision-demo/blob/master/int_q_array.hpp) | [test_int_q_array.cpp](https://github.com/sbme-tutorials/sbe201-revision-demo/blob/master/test_int_q_array.cpp) |
| **Doubly Linked List** (thanks to [Mostafa](https://github.com/mostafa444))| [int_dlinkedlist.hpp](https://github.com/sbme-tutorials/sbe201-revision-demo/blob/master/int_dlinkedlist.hpp) | [test_int_dlinkedlist.cpp](https://github.com/sbme-tutorials/sbe201-revision-demo/blob/master/test_int_dlinkedlist.cpp) |

## Compile and Run the Test

Just compile the `.cpp` files with `-std=c++11` flag. For example:

```bash
$ g++ -std=c++11 test_int_linkedlist.cpp -o test_linkedlist
$ ./test_linkedlist
nil
9->nil
9->12->nil
9->12->33->44->nil
9->12->33->nil
12->33->nil
```

## Questions

If you have any question regarding any data structure you just **create a new issue** in the repository.

![](issue.png)

It is a healthy environment to ask all your questions as **issues**. Also, feel free (much encouraged) to help your classmates in these issues.