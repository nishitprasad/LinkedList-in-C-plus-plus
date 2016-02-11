# LinkedList-in-C-
Linked List Implementation in C++ programming language via challenge scenario

###Challenge
The following two methods are implemented in LinkedList class:

**add(index, item)** - Add an item to a specific location in the list.
**remove(index)** - Remove an item from a specific location in the List.

Implementing the size method and a private helper method **getNode(int index)** to return the Node at a specific index.

####Input and Output

The input will consist of the number __t__ followed by __t__ lines with 1 pair of numbers on each line.

**add(num)** represented by -9 n in input. Adding n to the end of the LinkedList when a -9 appears.

**get(index)** represented by -6 n in input. Getting and printing the number located at index n whenever a -6 appears.

**add(index, item)** represented by 2 numbers a b in the input. The first number a will be a positive integer that represents the index where you should insert the second number b.

**remove(index)** represented by -1 in the input. Removing a number from index n in the list and print its (integer) value.
(Printing each number on its own line.)

####Sample Input
```
10
-9 3
-9 5
1 11
2 13
-6 1
-6 3
-1 2
-1 0
-1 1
-6 0
```

####Sample Output
```
11
5
13
3
5
11
```
