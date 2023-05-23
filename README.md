# C - Sorting algorithms & Big O

## Introduction
This repository is about our fourth major project after three months learning C programming language at Holberton School.
The project aims to understand the functioning of Big O notation by using different sorting algorithms on doubly linked lists.
We have done this project in teams of two people in five days.

## Instructions
***Understand the functioning of Big O notation by using different sorting algorithms.***

## Requirements
### General
* Allowed editors:```vi```, ```vim```, ```emacs```
* All your files will be compiled on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
* All your files should end with a new line
* A ```README.md``` file, at the root of the folder of the project is mandatory
* Your code should use the ```Betty``` style. It will be checked using```betty-style.pl``` and ```betty-doc.pl```
* You are not allowed to use global variables
* No more than 5 functions per file
* Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called ```sort.h```
* Don’t forget to push your header file
* All your header files should be include guarded
* A list/array does not need to be sorted if its size is less than 2.

## Tasks and Prototype
### Tasks 0 to 3

#### The Bubble sort

Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm


* Prototype: void bubble_sort(int *array, size_t size);
* You’re expected to print the array after each time you swap two elements (See example below)

#### The Insertion sort

Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm


* Prototype: void insertion_sort_list(listint_t **list);
* You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
* You’re expected to print the list after each time you swap two elements (See example below)

#### The Selection sort

Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

* Prototype: void selection_sort(int *array, size_t size);
* You’re expected to print the array after each time you swap two elements (See example below)

#### The Quick sort

Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

* Prototype: void quick_sort(int *array, size_t size);
* You must implement the Lomuto partition scheme.
* The pivot should always be the last element of the partition being sorted.
* You’re expected to print the array after each time you swap two elements (See example below)
```
root@103eae5f6fe8:~/holbertonschool-sorting_algorithms# cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
  *
   * Return: Always 0
    */
    int main(void)
    {
        int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
        printf("\n");
	    bubble_sort(array, n);
	        printf("\n");
		    print_array(array, n);
		        return (0);
			}
root@103eae5f6fe8:~/holbertonschool-sorting_algorithms# gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
root@103eae5f6fe8:~/holbertonschool-sorting_algorithms#: ./bubble
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 73, 96, 86, 7, 99
19, 48, 13, 52, 71, 73, 86, 96, 7, 99
19, 48, 13, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
root@103eae5f6fe8:~/holbertonschool-sorting_algorithms#:
```

#### All Prototypes:

* ```void print_array(const int *array, size_t size);```
* ```void print_list(const listint_t *list);```
* ```void bubble_sort(int *array, size_t size);```
* ```void insertion_sort_list(listint_t **list);```
* ```void selection_sort(int *array, size_t size);```
* ```void quick_sort(int *array, size_t size);```

## Authors
This project was realized by Arnaud Tily (@Albaryys) - Christophe Ngan (@Sirothpech)