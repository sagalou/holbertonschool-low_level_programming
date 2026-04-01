# Hash Tables

## Description

This project is an implementation of hash tables in C.
A hash table is a data structure that maps keys to values using a hash function.
It allows fast insertion, lookup, and deletion of key-value pairs.

This project is part of the Holberton School low-level programming curriculum.

---

## How it works

A hash table uses a **hash function** to convert a key (string) into an index.
That index points to a slot in an array where the value is stored.

```
key "betty" → hash function → index 63 → array[63] → value "cool"
```

When two keys produce the same index (collision), we use **chaining**:
each slot contains a linked list of nodes.

---

## Data Structures

```c
/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string (unique in the hash table)
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the list
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell is a pointer to the first node of a linked list
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
```

---

## Files

| File | Description |
|---|---|
| `hash_tables.h` | Header file with struct definitions and function prototypes |
| `0-hash_table_create.c` | Creates a hash table |
| `1-djb2.c` | Implements the djb2 hash function |
| `2-key_index.c` | Returns the index of a key in the array |
| `3-hash_table_set.c` | Adds or updates a key-value pair in the hash table |
| `4-hash_table_get.c` | Retrieves a value associated with a key |
| `5-hash_table_print.c` | Prints the hash table |
| `6-hash_table_delete.c` | Deletes the hash table |

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
- All prototypes must be included in `hash_tables.h`
- Header file must be include guarded

---

## Example

```c
hash_table_t *ht;

ht = hash_table_create(1024);
hash_table_set(ht, "betty", "cool");
hash_table_set(ht, "holberton", "school");

printf("%s\n", hash_table_get(ht, "betty"));
/* Output: cool */

hash_table_print(ht);
hash_table_delete(ht);
```

---

## Collision handling

This implementation uses **chaining** to handle collisions:
when two keys hash to the same index, they are stored as a linked list
at that index. New nodes are added at the beginning of the list.

---

## Author

Sagalou — Holberton School
