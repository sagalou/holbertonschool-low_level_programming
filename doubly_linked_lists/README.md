# Doubly Linked Lists

## Description

This project is an implementation of doubly linked lists in C.
A doubly linked list is a data structure where each node contains a value
and two pointers: one to the next node and one to the previous node.
This allows traversal in both directions.

This project is part of the Holberton School low-level programming curriculum.

---

## Structure

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer stored in the node
 * @prev: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

---

## Files

| File | Description |
|---|---|
| `lists.h` | Header file with struct definition and function prototypes |
| `0-print_dlistint.c` | Prints all elements of a doubly linked list |
| `1-dlistint_len.c` | Returns the number of elements in a doubly linked list |
| `2-add_dnodeint.c` | Adds a new node at the beginning of a doubly linked list |
| `3-add_dnodeint_end.c` | Adds a new node at the end of a doubly linked list |
| `4-free_dlistint.c` | Frees a doubly linked list |
| `5-get_dnodeint.c` | Returns the nth node of a doubly linked list |
| `6-sum_dlistint.c` | Returns the sum of all the data of a doubly linked list |
| `7-insert_dnodeint.c` | Inserts a new node at a given position |
| `8-delete_dnodeint.c` | Deletes the node at a given index of a doubly linked list |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
```

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on Ubuntu 20.04 LTS using `gcc`
- All files should end with a new line
- Code must follow Betty style
- No global variables allowed
- No more than 5 functions per file
- Only allowed C standard library functions: `malloc`, `free`, `printf`, `exit`
- All prototypes must be included in `lists.h`
- Header file must be include guarded

---

## Example

```c
dlistint_t *head;
dlistint_t *new;
dlistint_t hello = {8, NULL, NULL};

head = &hello;
new = malloc(sizeof(dlistint_t));
new->n = 9;
head->prev = new;
new->next = head;
new->prev = NULL;
head = new;

print_dlistint(head);
/* Output:
   9
   8
   -> 2 elements
*/
```

---

## Author

Sagalou — Holberton School
