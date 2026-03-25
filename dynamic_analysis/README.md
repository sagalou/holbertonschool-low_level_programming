# Dynamic Analysis - GDB Fundamentals

## Description
This project focuses on **Dynamic Analysis**, the practice of understanding a program's behavior by observing it during runtime. Instead of relying solely on source code reading, I used **GDB (GNU Debugger)** to inspect memory states, track variable transformations, and extract specific cryptographic values from a running executable.

## Learning Objectives
* Controlling program execution with `breakpoints`.
* Inspecting 32-bit unsigned integers in hexadecimal format.
* Navigating through function calls and loops (stack frames and iterations).
* Understanding the impact of runtime input (`stdin`) on algorithm output.

## Task: GDB Fundamentals
The goal was to extract three specific 32-bit values from `sample.c` using the input `123456`.

### Extracted Values
1. **TAG_ACC**: The state of the accumulator `x` in `derive_key()` immediately after the tag processing loop.
2. **KEY**: The final key value returned by `derive_key()`.
3. **ACC_AFTER_I0**: The state of the accumulator `acc` in `compute_target()` at the end of the first loop iteration (`i == 0`).

## Tools Used
* **GCC**: For compiling with debug symbols (`-g`).
* **GDB**: For runtime inspection and flow control.
* **Linux Terminal (WSL)**: For environment management and input redirection.

## How to Reproduce
1. Compile the source: `gcc -g -o sample sample.c`
2. Run GDB with input redirection: `gdb ./sample`
3. Set breakpoints at the required lines and run: `run <<< "123456"`
4. Inspect variables: `print /x <variable_name>`