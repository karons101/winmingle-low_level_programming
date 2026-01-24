# 0x13. C - More singly linked lists

## Description
This project continues the exploration of singly linked lists in C. It covers advanced concepts such as memory management (freeing lists), node manipulation (insertion/deletion at specific indices), and detecting/handling loops within a list.

## Files
All the following files are scripts and programs written in C:

| Filename | Description |
| -------- | ----------- |
| `0-print_listint.c` | Prints all the elements of a `listint_t` list. |
| `1-listint_len.c` | Returns the number of elements in a linked `listint_t` list. |
| `2-add_nodeint.c` | Adds a new node at the beginning of a `listint_t` list. |
| `3-add_nodeint_end.c` | Adds a new node at the end of a `listint_t` list. |
| `4-free_listint.c` | Frees a `listint_t` list. |
| `5-free_listint2.c` | Frees a `listint_t` list and sets the head to `NULL`. |
| `6-pop_listint.c` | Deletes the head node of a `listint_t` linked list and returns the data. |
| `7-get_nodeint_at_index.c` | Returns the nth node of a `listint_t` linked list. |
| `8-sum_listint.c` | Returns the sum of all the data (n) of a `listint_t` linked list. |
| `9-insert_nodeint_at_index.c` | Inserts a new node at a given position. |
| `10-delete_nodeint_at_index.c` | Deletes the node at index of a `listint_t` linked list. |
| `100-reverse_listint.c` | Reverses a `listint_t` linked list. |
| `101-print_listint_safe.c` | Prints a `listint_t` linked list safely (handles loops). |
| `102-free_listint_safe.c` | Frees a `listint_t` list safely (handles loops). |
| `103-find_loop.c` | Finds the loop in a linked list. |

## Requirements
* Compiled on Ubuntu 20.04 LTS using `gcc`
* Language: C
* Style: Betty

## Data Structure
```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
