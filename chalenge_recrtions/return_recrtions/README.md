# Advanced Recursion Exercises

*Master Recursive Problem Solving Techniques*

[![Exercises](https://img.shields.io/badge/Exercises-7-blue?style=flat-square)]()
[![Difficulty](https://img.shields.io/badge/Difficulty-Intermediate%20to%20Advanced-orange?style=flat-square)]()

---

## 📚 Exercise Subjects

### Exercise 1: `ft_factorial`

**Objective:** Calculate the factorial of a number using recursion

**Description:**
Write a program that takes a positive integer as argument and calculates its factorial using recursion. The factorial of a number n (written as n!) is the product of all positive integers less than or equal to n.

**Prototype:**
```c
int ft_factorial(int n);
```

**Mathematical Definition:**
```
n! = n × (n-1) × (n-2) × ... × 2 × 1
0! = 1
```

**Examples:**
```bash
$> ./ft_factorial 5
factorial 5 is: 120

$> ./ft_factorial 0
factorial 0 is: 1

$> ./ft_factorial 10
factorial 10 is: 3628800
```

---

### Exercise 2: `ft_power`

**Objective:** Calculate base raised to the power of exponent using recursion

**Description:**
Write a program that takes two integers as arguments (base and exponent) and calculates base^exponent using recursion.

**Prototype:**
```c
long ft_power(int base, int exp);
```

**Mathematical Definition:**
```
base^exp = base × base^(exp-1)
base^0 = 1
```

**Examples:**
```bash
$> ./ft_power 2 5
2 power 5 is: 32

$> ./ft_power 5 3
5 power 3 is: 125

$> ./ft_power -2 3
-2 power 3 is: -8
```

---

### Exercise 3: `ft_sum_array`

**Objective:** Calculate the sum of all elements in an array using recursion

**Description:**
Write a program that takes multiple integers as command-line arguments, stores them in a dynamically allocated array, and calculates the sum of all elements using recursion.

**Prototype:**
```c
int ft_sum_array(int *arr, int size);
```

**Algorithm:**
```
sum_array(arr, size) = arr[size-1] + sum_array(arr, size-1)
sum_array(arr, 0) = 0  (base case)
```

**Examples:**
```bash
$> ./ft_sum_array 1 2 3 4 5
Array is: [1, 2, 3, 4, 5]
Sum of array is: 15

$> ./ft_sum_array -5 10 -3 8
Array is: [-5, 10, -3, 8]
Sum of array is: 10
```

---

### Exercise 4: `ft_fibonacci`

**Objective:** Calculate the nth Fibonacci number using recursion

**Description:**
Write a program that takes an integer n as argument and calculates the nth Fibonacci number using recursion. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the previous two.

**Prototype:**
```c
int ft_fib(int n);
```

**Mathematical Definition:**
```
fib(0) = 0
fib(1) = 1
fib(n) = fib(n-1) + fib(n-2)  for n > 1
```

**Fibonacci Sequence:**
```
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
```

**Examples:**
```bash
$> ./ft_fibonacci 0
fibo(0) = 0

$> ./ft_fibonacci 1
fibo(1) = 1

$> ./ft_fibonacci 6
fibo(6) = 8

$> ./ft_fibonacci 10
fibo(10) = 55
```

**Note:** The recursive Fibonacci is exponentially slow for large n. This is a classic example to demonstrate recursion but not the most efficient implementation.

---

### Exercise 5: `ft_print_subsets`

**Objective:** Print all possible subsets of a string using recursion

**Description:**
Write a program that takes a string as argument and prints all possible subsets (power set) of that string, including the empty subset. Use recursion to explore both choices at each character: include it or exclude it.

**Prototype:**
```c
void ft_print_subsets(char *str);
```

**Algorithm:**
```
For each character:
  1. Exclude it (move to next character)
  2. Include it (add to buffer, move to next character)
Base case: reached end of string, print buffer
```

**Examples:**
```bash
$> ./ft_print_subsets "abc"

c
b
bc
a
ac
ab
abc

$> ./ft_print_subsets "12"

2
1
12
```

**Note:** The output includes the empty string (first line). Total subsets = 2^n where n is the string length.

---

### Exercise 6: `ft_power_sum_count`

**Objective:** Count the number of ways to express X as sum of unique Nth powers

**Description:**
Write a program that takes two integers X and N, and finds the number of ways to express X as the sum of unique positive integers raised to the power N.

**Prototype:**
```c
int ft_power_sum_count(int x, int n);
```

**Algorithm:**
```
For each number i starting from 1:
  if i^n > remaining sum: return 0
  count ways excluding i
  count ways including i^n
  return sum of both counts
```

**Examples:**
```bash
$> ./ft_power_sum_count 10 2
count is: 1
# 10 = 1^2 + 3^2 = 1 + 9

$> ./ft_power_sum_count 100 2
count is: 3
# 100 = 10^2
# 100 = 6^2 + 8^2
# 100 = 1^2 + 3^2 + 4^2 + 5^2 + 7^2

$> ./ft_power_sum_count 100 3
count is: 1
# 100 = 1^3 + 2^3 + 3^3 + 4^3
```

**Note:** This is a backtracking problem that explores all combinations of unique powers.

---

### Exercise 7: `ft_n_queens_puzzle`

**Objective:** Solve the N-Queens puzzle and return the number of solutions

**Description:**
Write a program that solves the N-Queens puzzle: place N queens on an N×N chessboard so that no two queens threaten each other. Print all valid solutions and return the total count.

**Prototype:**
```c
int ft_n_queens_puzzle(int n);
```

**Rules:**
- No two queens can be in the same row
- No two queens can be in the same column
- No two queens can be on the same diagonal

**Board Representation:**
Each solution is printed as a string where the digit at position i represents the row where the queen is placed in column i.

**Examples:**
```bash
$> ./ft_n_queens_puzzle 4
1302
2031
this is total possible place: 2

$> ./ft_n_queens_puzzle 8
04752613
05726314
...
(92 solutions total)
this is total possible place: 92
```

**Validation Function:**
```c
int is_valid(int *board, int row, int col)
{
    // Check no queen in same row
    // Check no queen on same diagonal
}
```

**Note:** The classic 8-Queens puzzle has 92 solutions. For 10-Queens, there are 724 solutions.

---

## 🎯 Learning Objectives

| Category | Skills Learned |
|:---------|:---------------|
| **Mathematical Recursion** | Factorial, Power, Fibonacci |
| **Backtracking** | Subsets, Power Sum, N-Queens |
| **Decision Trees** | Include/Exclude patterns |
| **Optimization** | Pruning invalid paths early |
| **Constraint Satisfaction** | N-Queens validation rules |

---

## 📊 Complexity Analysis

| Exercise | Time Complexity | Space Complexity | Notes |
|:---------|:---------------:|:----------------:|:------|
| ft_factorial | O(n) | O(n) | Linear recursion depth |
| ft_power | O(exp) | O(exp) | exp recursive calls |
| ft_sum_array | O(n) | O(n) | n is array size |
| ft_fibonacci | O(2^n) | O(n) | Exponentially slow! |
| ft_print_subsets | O(2^n) | O(n) | 2^n subsets |
| ft_power_sum_count | O(√x) | O(√x) | Bounded by √x |
| ft_n_queens_puzzle | O(n!) | O(n) | Classic backtracking |

---

## 💡 Key Concepts

### Recursion Patterns

**1. Linear Recursion** (Factorial, Power, Sum)
```
process(n) = operation + process(n-1)
```

**2. Tree Recursion** (Fibonacci)
```
process(n) = process(n-1) + process(n-2)
```

**3. Backtracking** (Subsets, Power Sum, N-Queens)
```
For each choice:
    Make choice
    Recursively explore
    Unmake choice (backtrack)
```

### Backtracking Template

```c
void solve(state, choices)
{
    if (is_solution(state))
    {
        record_solution(state);
        return;
    }
    
    for each choice in choices:
        if (is_valid(choice))
        {
            make_choice(choice);
            solve(new_state, remaining_choices);
            unmake_choice(choice);  // Backtrack
        }
}
```

---

## 🛠️ Compilation

```bash
gcc -Wall -Wextra -Werror exercise.c -o exercise
```

---

## 📝 Testing Tips

### Mathematical Functions
- **Factorial:** Test 0, 1, small numbers, watch for overflow
- **Power:** Test exp=0, exp=1, negative bases
- **Fibonacci:** Test 0, 1, 10 (slow beyond 40)

### Backtracking Problems
- **Subsets:** Test empty string, single char, "abc"
- **Power Sum:** Test small X and N, verify count manually
- **N-Queens:** Test n=4 (2 solutions), n=8 (92 solutions)

### Memory Management
```bash
# Check for leaks
valgrind ./ft_sum_array 1 2 3 4 5
valgrind ./ft_print_subsets "abc"
valgrind ./ft_n_queens_puzzle 8
```

---

## ⚠️ Common Pitfalls

### Performance Issues
1. **Fibonacci** - O(2^n) is very slow
   - fib(40) takes seconds
   - fib(50) takes minutes
   - Solution: Use memoization (not covered here)

2. **N-Queens** - Gets slow for large N
   - n=10 is reasonable
   - n=15 takes significant time

### Memory Issues
1. **Stack Overflow** - Deep recursion
2. **Memory Leaks** - Always free malloc'd memory
3. **Buffer Size** - Allocate enough for subsets

### Logic Errors
1. **Missing Base Case** - Infinite recursion
2. **Wrong Validation** - N-Queens diagonal check
3. **Off-by-One** - Array indexing errors

---

## 🔍 Debugging Tips

```bash
# Add debug prints
printf("Entering: n=%d\n", n);
printf("Returning: result=%d\n", result);

# Use gdb
gdb ./ft_fibonacci
break ft_fib
run 5
step

# Check memory
valgrind --leak-check=full ./program
```

---

## 📚 Additional Resources

| Topic | Link |
|:------|:-----|
| Recursion Basics | [GeeksforGeeks](https://www.geeksforgeeks.org/recursion/) |
| Backtracking | [Wikipedia](https://en.wikipedia.org/wiki/Backtracking) |
| N-Queens | [Wikipedia](https://en.wikipedia.org/wiki/Eight_queens_puzzle) |
| Fibonacci | [Wikipedia](https://en.wikipedia.org/wiki/Fibonacci_number) |
| Dynamic Programming | [GeeksforGeeks](https://www.geeksforgeeks.org/dynamic-programming/) |

---

<div align="center">

**Master these recursion patterns - they form the foundation for advanced algorithms!**

*Practice, Debug, Optimize, Repeat* 🚀

</div>
