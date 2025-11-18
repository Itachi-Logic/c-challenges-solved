<div align="center">

# 🔄 Return Recursions

### *Advanced Recursive Problem Solving*

[![Exercises](https://img.shields.io/badge/Exercises-7-success?style=for-the-badge&logo=c&logoColor=white)](.)
[![Difficulty](https://img.shields.io/badge/Difficulty-Intermediate_to_Advanced-ff6b6b?style=for-the-badge)](.)
[![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](.)
[![Norminette](https://img.shields.io/badge/Norminette-Passing-success?style=for-the-badge)](.)

---

**A collection of challenging recursive algorithms that return values**  
*Part of [c-challenges-solved](../../) repository*

[Overview](#-overview) • [Exercises](#-exercises) • [Compilation](#%EF%B8%8F-compilation) • [Testing](#-testing)

</div>

---

## 📋 Overview

This module focuses on **return-type recursive functions** that solve mathematical and algorithmic problems. Each exercise demonstrates different recursion patterns from simple linear recursion to complex backtracking algorithms.

### 🎯 What You'll Learn

```mermaid
graph LR
    A[Linear Recursion] --> B[Tree Recursion]
    B --> C[Backtracking]
    C --> D[Constraint Satisfaction]
    style A fill:#4CAF50
    style B fill:#2196F3
    style C fill:#FF9800
    style D fill:#f44336
```

| Concept | Exercises | Difficulty |
|:--------|:----------|:----------:|
| **Linear Recursion** | factorial, power, sum_array | ⭐⭐ |
| **Tree Recursion** | fibonacci | ⭐⭐⭐ |
| **Backtracking** | subsets, power_sum | ⭐⭐⭐⭐ |
| **CSP** | n_queens | ⭐⭐⭐⭐⭐ |

---

## 📚 Exercises

### 🔢 Exercise 1: `ft_factorial`

> Calculate factorial using recursion

```c
int ft_factorial(int n);
```

**Mathematical Definition:**
```
n! = n × (n-1)!
0! = 1
```

<details>
<summary>📖 View Examples</summary>

```bash
$> ./ft_factorial 5
factorial 5 is: 120
$>
$> ./ft_factorial 0
factorial 0 is: 1
$>
$> ./ft_factorial 10
factorial 10 is: 3628800
$>
```
</details>

**Requirements:**
- ✅ Take exactly **one argument**
- ✅ Handle **n ≤ 0** (return 1)
- ✅ Use **recursion only**
- ✅ Output format: `factorial N is: RESULT\n`

---

### 🌀 Exercise 2: `ft_fibonacci`

> Calculate the nth Fibonacci number

```c
int ft_fib(int n);
```

**Mathematical Definition:**
```
F(0) = 0, F(1) = 1
F(n) = F(n-1) + F(n-2)
```

<details>
<summary>📖 View Examples</summary>

```bash
$> ./ft_fibonacci 0
fibo(0) = 0
$>
$> ./ft_fibonacci 5
fibo(5) = 5
$>
$> ./ft_fibonacci 10
fibo(10) = 55
$>
```
</details>

**Requirements:**
- ✅ Take exactly **one argument**
- ✅ Return **n** for n ≤ 1
- ✅ Use **recursion only**
- ✅ Output format: `fibo(N) = RESULT\n`

⚠️ **Warning:** Exponential time complexity O(2ⁿ) - slow for large n!

---

### ⚡ Exercise 3: `ft_power`

> Calculate base raised to exponent

```c
long ft_power(int base, int exp);
```

**Mathematical Definition:**
```
base⁰ = 1
base^exp = base × base^(exp-1)
```

<details>
<summary>📖 View Examples</summary>

```bash
$> ./ft_power 2 5
2 power 5 is: 32
$>
$> ./ft_power 10 0
10 power 0 is: 1
$>
$> ./ft_power -2 3
-2 power 3 is: -8
$>
```
</details>

**Requirements:**
- ✅ Take exactly **two arguments** (base, exp)
- ✅ Return **1** for exp ≤ 0
- ✅ Use **long return type**
- ✅ Output format: `BASE power EXP is: RESULT\n`

---

### 📊 Exercise 4: `ft_sum_array`

> Sum all array elements recursively

```c
int ft_sum_array(int *arr, int size);
```

<details>
<summary>📖 View Examples</summary>

```bash
$> ./ft_sum_array 1 2 3 4 5
Array is: [1, 2, 3, 4, 5]
Sum of array is: 15
$>
$> ./ft_sum_array 5
Array is: [5]
Sum of array is: 5
$>
$> ./ft_sum_array
Usage: ./a.out <num1> <num2> ...
$>
```
</details>

**Requirements:**
- ✅ **Dynamic memory allocation**
- ✅ Process from **end backwards** (size-1)
- ✅ **Free allocated memory**
- ✅ Handle malloc failure

---

### 🎲 Exercise 5: `ft_print_subsets`

> Generate all possible subsets (power set)

```c
void ft_print_subsets(char *str);
```

**Concept:** For each character, make two choices:
1. Exclude it
2. Include it

<details>
<summary>📖 View Examples</summary>

```bash
$> ./ft_print_subsets "abc"

c
b
bc
a
ac
ab
abc
$>
$> ./ft_print_subsets "12"

2
1
12
$>
```
</details>

**Requirements:**
- ✅ Print **empty subset** (first line)
- ✅ Total subsets = **2ⁿ**
- ✅ Dynamic memory for buffer
- ✅ Free allocated memory

---

### 🎯 Exercise 6: `ft_power_sum_count`

> Count ways to express X as sum of unique Nth powers

```c
int ft_power_sum_count(int x, int n);
```

**Problem:** How many ways can we write X = a₁ⁿ + a₂ⁿ + ... where all aᵢ are unique?

**Example:**
```
X=10, N=2: only 1² + 3² = 10  →  count = 1
X=100, N=2: three ways  →  count = 3
  • 10²
  • 6² + 8²
  • 1² + 3² + 4² + 5² + 7²
```

<details>
<summary>📖 View Examples</summary>

```bash
$> ./ft_power_sum_count 10 2
count is: 1
$>
$> ./ft_power_sum_count 100 2
count is: 3
$>
```
</details>

**Requirements:**
- ✅ Two arguments: **X** (target) and **N** (power)
- ✅ Each number used **at most once**
- ✅ Return **count** of valid combinations

---

### ♛ Exercise 7: `ft_n_queens_puzzle`

> Solve the classic N-Queens problem

```c
int ft_n_queens_puzzle(int n);
```

**Problem:** Place N queens on N×N board so no two queens attack each other.

**Constraints:**
- ❌ No two queens in same row
- ❌ No two queens in same column  
- ❌ No two queens on same diagonal

**Output Format:** Each solution is a string where digit at position i = column position of queen in row i.

<details>
<summary>📖 View Examples</summary>

```bash
$> ./ft_n_queens_puzzle 4
1302
2031
this is total possible place: 2
$>
$> ./ft_n_queens_puzzle 1
0
this is total possible place: 1
$>
```

**Solution "1302" means:**
```
Row 0: Queen at column 1
Row 1: Queen at column 3
Row 2: Queen at column 0
Row 3: Queen at column 2
```
</details>

**Requirements:**
- ✅ Print **all solutions**
- ✅ Return **total count**
- ✅ Dynamic memory allocation
- ✅ Backtracking algorithm

**Fun Facts:**
- 4-Queens: **2** solutions
- 8-Queens: **92** solutions  
- 10-Queens: **724** solutions

---

## 🛠️ Compilation

### Individual Exercise
```bash
gcc -Wall -Wextra -Werror <exercise>.c -o <exercise>
```

### All Exercises
```bash
# Quick compile script
for f in ft_*.c; do
    gcc -Wall -Wextra -Werror "$f" -o "${f%.c}"
done
```

### With Debug Symbols
```bash
gcc -Wall -Wextra -Werror -g <exercise>.c -o <exercise>
```

---

## 🧪 Testing

### Basic Tests
```bash
# Factorial
./ft_factorial 0
./ft_factorial 5
./ft_factorial 10

# Fibonacci
./ft_fibonacci 0
./ft_fibonacci 1
./ft_fibonacci 10

# Power
./ft_power 2 5
./ft_power 10 0
./ft_power -2 3

# Sum Array
./ft_sum_array 1 2 3 4 5
./ft_sum_array

# Subsets
./ft_print_subsets "abc"
./ft_print_subsets ""

# Power Sum
./ft_power_sum_count 10 2
./ft_power_sum_count 100 2

# N-Queens
./ft_n_queens_puzzle 4
./ft_n_queens_puzzle 8
```

### Memory Leak Detection
```bash
valgrind --leak-check=full ./ft_sum_array 1 2 3
valgrind --leak-check=full ./ft_print_subsets "abc"
valgrind --leak-check=full ./ft_n_queens_puzzle 4
```

### Advanced Testing
```bash
# Test with edge cases
./ft_factorial -5        # Should handle negative
./ft_fibonacci 40        # Will be slow!
./ft_power 2 31          # Check overflow
```

---

## 📊 Complexity Analysis

| Exercise | Time | Space | Depth | Notes |
|:---------|:----:|:-----:|:-----:|:------|
| `ft_factorial` | O(n) | O(n) | n | Stack grows linearly |
| `ft_fibonacci` | O(2ⁿ) | O(n) | n | **Very slow!** |
| `ft_power` | O(exp) | O(exp) | exp | Linear in exponent |
| `ft_sum_array` | O(n) | O(n) | n | Processes backward |
| `ft_print_subsets` | O(2ⁿ) | O(n) | n | Exponential subsets |
| `ft_power_sum_count` | O(√x·2^√x) | O(√x) | √x | Bounded search |
| `ft_n_queens_puzzle` | O(n!) | O(n) | n | Classic backtracking |

---

## ⚠️ Common Pitfalls

### 🔴 Stack Overflow
```c
// Deep recursion can exhaust stack
ft_fibonacci(50);  // Too deep!
```

### 🔴 Integer Overflow
```c
// Factorials grow VERY fast
13! = 6,227,020,800  // Exceeds INT_MAX
```

### 🔴 Memory Leaks
```c
// Always free allocated memory
char *buffer = malloc(size);
// ... use buffer ...
free(buffer);  // Don't forget!
```

### 🔴 Missing Base Case
```c
// Infinite recursion!
int bad_factorial(int n) {
    return n * bad_factorial(n - 1);  // No base case!
}
```

---

## 💡 Pro Tips

### ✨ Optimization Hints
- Use **memoization** for fibonacci (not required here)
- **Prune early** in backtracking (power_sum, n_queens)
- Consider **iterative** solutions for very large inputs

### 🐛 Debugging
```bash
# Use GDB
gdb ./ft_fibonacci
(gdb) break ft_fib
(gdb) run 5
(gdb) step

# Add trace prints
printf("→ Entering: n=%d\n", n);
printf("← Returning: %d\n", result);
```

### 📝 Good Practices
- Always **check malloc** return value
- **Free memory** in all paths
- Handle **edge cases** (0, negative, empty)
- Use **meaningful variable names**

---

## 📈 Progression Path

```
Start Here          Basic             Intermediate         Advanced
    ↓                  ↓                    ↓                  ↓
factorial  →  power  →  fibonacci  →  subsets  →  power_sum  →  n_queens
    ↓                  ↓                    ↓                  ↓
 Linear         Linear            Tree             Backtracking
Recursion      Recursion       Recursion           + Pruning
```

**Recommended Order:**
1. ✅ `ft_factorial` - Learn basic recursion
2. ✅ `ft_power` - Practice with parameters
3. ✅ `ft_sum_array` - Combine recursion + malloc
4. ✅ `ft_fibonacci` - Understand tree recursion
5. ✅ `ft_print_subsets` - Introduction to backtracking
6. ✅ `ft_power_sum_count` - Backtracking with pruning
7. ✅ `ft_n_queens_puzzle` - Master constraint satisfaction

---

## 🔗 Related Topics

### In This Repository
- [Void Recursions](../void_recrtions/) - Recursive functions that print output
- [42 Piscine Practice](../../42-piscine-practice/) - Fundamental C exercises
- [Level 0](../../42-piscine-practice/level_0/) - Basic C programs
- [Level 1](../../42-piscine-practice/level_1/) - String manipulation
- [Level 2](../../42-piscine-practice/level_2/) - Advanced string operations

### External Resources
- [Recursion - GeeksforGeeks](https://www.geeksforgeeks.org/recursion/)
- [Backtracking - Wikipedia](https://en.wikipedia.org/wiki/Backtracking)
- [N-Queens Problem](https://en.wikipedia.org/wiki/Eight_queens_puzzle)

---

<div align="center">

### 🎓 Learning Outcomes

After mastering these exercises, you will understand:

**Core Concepts** | **Advanced Techniques** | **Best Practices**
:---: | :---: | :---:
Recursive thinking | Backtracking algorithms | Memory management
Base cases | Constraint satisfaction | Error handling
Call stack mechanics | Pruning strategies | Complexity analysis

---

### 📫 Need Help?

If you find any issues or have suggestions:
- 🐛 [Report a bug](../../issues)
- 💡 [Request a feature](../../issues)
- ⭐ [Star this repo](../../)

---

**Made with ❤️ for learning recursion**

*Part of the [c-challenges-solved](../../) collection*

[![Back to Main](https://img.shields.io/badge/←_Back_to_Main-4CAF50?style=for-the-badge)](../../)
[![View Void Recursions](https://img.shields.io/badge/View_Void_Recursions_→-2196F3?style=for-the-badge)](../void_recrtions/)

</div>
