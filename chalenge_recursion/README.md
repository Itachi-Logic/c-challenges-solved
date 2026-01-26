<div align="center">

# 🔄 Challenge Recursion

### *Master the Art of Recursive Problem Solving*

[![Exercises](https://img.shields.io/badge/Exercises-16-success?style=for-the-badge&logo=c&logoColor=white)](.)
[![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](.)
[![Norminette](https://img.shields.io/badge/Norminette-Passing-success?style=for-the-badge)](.)

<img src="https://img.shields.io/badge/Linear_Drills-5_exercises-2196F3?style=flat-square" alt="Linear Drills"/>
<img src="https://img.shields.io/badge/Decision_Matrix-11_exercises-ff6b6b?style=flat-square" alt="Decision Matrix"/>

---

</div>

## 📑 Quick Navigation

<table>
<tr>
<td width="50%" valign="top">

### 📘 Linear Drills
| # | Exercise | Pattern |
|:-:|:---------|:--------|
| 1 | [put_alpha](#1-put_alpha) | Tail Recursion |
| 2 | [put_rev_alpha](#2-put_rev_alpha) | Head Recursion |
| 3 | [put_n_number](#3-put_n_number) | Head Recursion |
| 4 | [put_revn_number](#4-put_revn_number) | Tail Recursion |
| 5 | [sort_string_recursive](#5-sort_string_recursive) | Recursive Bubble |

</td>
<td width="50%" valign="top">

### 🎯 Decision Matrix
| # | Exercise | Pattern |
|:-:|:---------|:--------|
| 1 | [ft_factorial](#1-ft_factorial) | Linear |
| 2 | [ft_fibonacci](#2-ft_fibonacci) | Tree (2-way) |
| 3 | [ft_power](#3-ft_power) | Linear |
| 4 | [ft_sum_array](#4-ft_sum_array) | Linear |
| 5 | [ft_print_subsets](#5-ft_print_subsets) | Binary Choice |
| 6 | [ft_power_sum_count](#6-ft_power_sum_count) | Binary + Prune |
| 7 | [ft_combinations](#7-ft_combinations) | k-way Choice |
| 8 | [ft_print_permutations](#8-ft_print_permutations) | n-way Choice |
| 9 | [ft_identity](#9-ft_identity) | Digit Exploration |
| 10 | [ft_n_queens_puzzle](#10-ft_n_queens_puzzle) | Constraint |
| 11 | [ft_solve_maze](#11-ft_solve_maze) | Backtracking |

</td>
</tr>
</table>

---

## 📁 Repository Structure

```
chalenge_recursion/
├── 📂 Linear_Drills/
│   ├── put_alpha.c
│   ├── put_rev_alpha.c
│   ├── put_n_number.c
│   ├── put_revn_number.c
│   └── sort_string_recursive.c
│
├── 📂 Decision_Matrix/
│   ├── ft_factorial.c
│   ├── ft_fibonacci.c
│   ├── ft_power.c
│   ├── ft_sum_array.c
│   ├── ft_print_subsets.c
│   ├── ft_power_sum_count.c
│   ├── ft_combinations.c
│   ├── ft_print_permutations.c
│   ├── ft_identity.c
│   ├── ft_n_queens_puzzle.c
│   └── ft_solve_maze.c
│
└── README.md
```

---

## 🚀 Quick Start

```bash
# Clone
git clone <repository-url>
cd chalenge_recursion

# Compile any exercise
gcc -Wall -Wextra -Werror <file>.c -o <output>

# Compile all
for f in */*.c; do gcc -Wall -Wextra -Werror "$f" -o "${f%.c}" 2>/dev/null; done
```

---

<div align="center">

# 📘 Linear Drills

**Foundation: Basic Recursive Patterns**

[↑ Back to Navigation](#-quick-navigation)

</div>

---

### 1. `put_alpha`

> 🔤 Print alphabet from 'a' to 'z' (or 'A' to 'Z')

```c
void put_alpha(char c);
```

| Allowed Functions | Pattern |
|:------------------|:--------|
| `printf` | Tail Recursion |

<details>
<summary>📖 Examples</summary>

```bash
$> ./put_alpha a
a > b > c > d > e > f > g > h > i > j > k > l > m > n > o > p > q > r > s > t > u > v > w > x > y > z
$> ./put_alpha A
A > B > C > D > E > F > G > H > I > J > K > L > M > N > O > P > Q > R > S > T > U > V > W > X > Y > Z
$> ./put_alpha b
Please enter a for lowercase alpha or A for uppercase alpha
```
</details>

**Requirements:**
- ✅ Accept only `'a'` for lowercase or `'A'` for uppercase
- ✅ Print characters separated by ` > `
- ✅ Stop at `'z'` or `'Z'`
- ✅ Error message for invalid input

[↑ Back to top](#-quick-navigation)

---

### 2. `put_rev_alpha`

> 🔠 Print alphabet from 'z' to 'a' (reverse order)

```c
void put_rev_alpha(char c);
```

| Allowed Functions | Pattern |
|:------------------|:--------|
| `printf` | Head Recursion |

<details>
<summary>📖 Examples</summary>

```bash
$> ./put_rev_alpha a
z > y > x > w > v > u > t > s > r > q > p > o > n > m > l > k > j > i > h > g > f > e > d > c > b > a
$> ./put_rev_alpha A
Z > Y > X > W > V > U > T > S > R > Q > P > O > N > M > L > K > J > I > H > G > F > E > D > C > B > A
$> ./put_rev_alpha x
Please enter a for lowercase alpha or A for uppercase alpha
```
</details>

**Requirements:**
- ✅ Accept only `'a'` for lowercase or `'A'` for uppercase
- ✅ Print in **reverse** order (z to a)
- ✅ Use head recursion pattern (recurse first, print after)
- ✅ Error message for invalid input

[↑ Back to top](#-quick-navigation)

---

### 3. `put_n_number`

> 🔢 Print numbers from 0 to n

```c
void recrtion(int n);
```

| Allowed Functions | Pattern |
|:------------------|:--------|
| `printf`, `atoi` | Head Recursion |

<details>
<summary>📖 Examples</summary>

```bash
$> ./put_n_number 5
0 > 1 > 2 > 3 > 4 > 5
$> ./put_n_number 10
0 > 1 > 2 > 3 > 4 > 5 > 6 > 7 > 8 > 9 > 10
$> ./put_n_number 0
0
```
</details>

**Requirements:**
- ✅ Print from **0 to n**
- ✅ Numbers separated by ` > `
- ✅ Handle n = 0 case (prints just "0")
- ✅ Uses head recursion (recurse first, print after)

[↑ Back to top](#-quick-navigation)

---

### 4. `put_revn_number`

> 🔙 Print numbers from n to 0

```c
void put_revn_number(int n);
```

| Allowed Functions | Pattern |
|:------------------|:--------|
| `printf`, `atoi` | Tail Recursion |

<details>
<summary>📖 Examples</summary>

```bash
$> ./put_revn_number 5
5 > 4 > 3 > 2 > 1 > 0
$> ./put_revn_number 10
10 > 9 > 8 > 7 > 6 > 5 > 4 > 3 > 2 > 1 > 0
$> ./put_revn_number 0
0
```
</details>

**Requirements:**
- ✅ Print from **n to 0**
- ✅ Numbers separated by ` > `
- ✅ Newline at the end (after 0)
- ✅ Uses tail recursion (print first, recurse after)

[↑ Back to top](#-quick-navigation)

---

### 5. `sort_string_recursive`

> 📊 Sort a string using recursive bubble sort

```c
void sort_string(char *str);
void solve_helper(char *str, int start, int len);
```

| Allowed Functions | Pattern |
|:------------------|:--------|
| `printf` | Recursive Bubble Sort |

<details>
<summary>📖 Examples</summary>

```bash
$> ./sort_string_recursive
Before Recursive: 25143
After Recursive: 12345
```
</details>

**Requirements:**
- ✅ Sort characters in **ascending order**
- ✅ Use **recursive approach** for outer loop
- ✅ Modify string **in-place**
- ✅ No command line arguments (hardcoded example)

**Helper Functions:**
```c
int  ft_strcmp(char c1, char c2);  // Compare two characters
void ft_swap(char *c1, char *c2);  // Swap two characters
```

[↑ Back to top](#-quick-navigation)

---

<div align="center">

# 🎯 Decision Matrix

**Advanced: Decision Making & Backtracking**

[↑ Back to Navigation](#-quick-navigation)

</div>

---

### 1. `ft_factorial`

> 🔢 Calculate factorial using recursion

```c
int ft_factorial(int n);
```

| Allowed Functions | Formula |
|:------------------|:--------|
| `printf`, `atoi` | n! = n × (n-1)!, 0! = 1 |

<details>
<summary>📖 Examples</summary>

```bash
$> ./ft_factorial 5
factorial 5 is: 120
$> ./ft_factorial 0
factorial 0 is: 1
$> ./ft_factorial 10
factorial 10 is: 3628800
```
</details>

**Requirements:**
- ✅ Take exactly **one argument**
- ✅ Handle **n ≤ 0** (return 1)
- ✅ Output format: `factorial N is: RESULT`

[↑ Back to top](#-quick-navigation)

---

### 2. `ft_fibonacci`

> 🌀 Calculate the nth Fibonacci number

```c
int ft_fib(int n);
```

| Allowed Functions | Formula |
|:------------------|:--------|
| `printf`, `atoi` | F(n) = F(n-1) + F(n-2) |

<details>
<summary>📖 Examples</summary>

```bash
$> ./ft_fibonacci 0
fibo(0) = 0
$> ./ft_fibonacci 5
fibo(5) = 5
$> ./ft_fibonacci 10
fibo(10) = 55
```
</details>

**Requirements:**
- ✅ Take exactly **one argument**
- ✅ Return **n** for n ≤ 1
- ✅ Output format: `fibo(N) = RESULT`

⚠️ **Warning:** O(2ⁿ) complexity - exponentially slow for large n!

[↑ Back to top](#-quick-navigation)

---

### 3. `ft_power`

> ⚡ Calculate base raised to exponent

```c
long ft_power(int base, int exp);
```

| Allowed Functions | Formula |
|:------------------|:--------|
| `printf`, `atoi` | base^exp = base × base^(exp-1) |

<details>
<summary>📖 Examples</summary>

```bash
$> ./ft_power 2 5
2 power 5 is: 32
$> ./ft_power 10 0
10 power 0 is: 1
$> ./ft_power 3 4
3 power 4 is: 81
```
</details>

**Requirements:**
- ✅ Two arguments: **base** and **exp**
- ✅ Return **1** for exp ≤ 0
- ✅ Use **long return type** for larger results
- ✅ Output format: `BASE power EXP is: RESULT`

[↑ Back to top](#-quick-navigation)

---

### 4. `ft_sum_array`

> 📊 Sum all array elements recursively

```c
int ft_sum_array(int *arr, int size);
```

| Allowed Functions |
|:------------------|
| `printf`, `atoi`, `malloc`, `free` |

<details>
<summary>📖 Examples</summary>

```bash
$> ./ft_sum_array 1 2 3 4 5
Array is: [1, 2, 3, 4, 5]
Sum of array is: 15
$> ./ft_sum_array 10 20 30
Array is: [10, 20, 30]
Sum of array is: 60
$> ./ft_sum_array
Usage: ./a.out <num1> <num2> ...
```
</details>

**Requirements:**
- ✅ Accept numbers as command line arguments
- ✅ **Dynamic memory allocation** for array
- ✅ Process from **end backwards** (size - 1)
- ✅ **Free allocated memory**
- ✅ Display usage message if no arguments

[↑ Back to top](#-quick-navigation)

---

### 5. `ft_print_subsets`

> 🎲 Generate all possible subsets (power set)

```c
void ft_print_subsets(char *str);
```

| Allowed Functions | Output Count |
|:------------------|:-------------|
| `printf`, `malloc`, `free`, `strlen` | 2ⁿ subsets |

<details>
<summary>📖 Examples</summary>

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
</details>

**Requirements:**
- ✅ Print **empty subset** first (empty line)
- ✅ Total subsets = **2ⁿ** (including empty)
- ✅ Free allocated memory
- ✅ Decision: For each character → **Exclude** first, then **Include**

[↑ Back to top](#-quick-navigation)

---

### 6. `ft_power_sum_count`

> 🎯 Count ways to express X as sum of unique Nth powers

```c
int ft_power_sum_count(int x, int n);
```

| Allowed Functions |
|:------------------|
| `printf`, `atoi` |

**Example:** X=10, N=2 → only 1² + 3² = 10 → count = 1

<details>
<summary>📖 Examples</summary>

```bash
$> ./ft_power_sum_count 10 2
count is: 1
$> ./ft_power_sum_count 100 2
count is: 3
$> ./ft_power_sum_count 100 3
count is: 1
```

**Explanation for 100, 2 (3 ways):**
- 10² = 100
- 6² + 8² = 36 + 64 = 100
- 1² + 3² + 4² + 5² + 7² = 1 + 9 + 16 + 25 + 49 = 100
</details>

**Requirements:**
- ✅ Two arguments: **X** (target sum) and **N** (power)
- ✅ Each number used **at most once**
- ✅ **Pruning**: stop when power exceeds remaining sum
- ✅ Binary choice: include or skip each number

[↑ Back to top](#-quick-navigation)

---

### 7. `ft_combinations`

> 🔀 Generate all k-length combinations from a string

```c
void ft_print_combinations(char *str, int k);
```

| Allowed Functions | Output Count |
|:------------------|:-------------|
| `printf`, `malloc`, `free` | C(n,k) combinations |

<details>
<summary>📖 Examples</summary>

```bash
$> ./ft_combinations "abcd" 2
ab
ac
ad
bc
bd
cd
$> ./ft_combinations "abca" 2
ab
ac
aa
bc
ba
ca
```
</details>

**Requirements:**
- ✅ Select **k characters** from string (by position)
- ✅ Maintain **order** of selection (left to right)
- ✅ Dynamic memory allocation for buffer
- ✅ Free allocated memory

**Note:** This selects by position, not unique characters. Same character at different positions can both be selected.

[↑ Back to top](#-quick-navigation)

---

### 8. `ft_print_permutations`

> 🔄 Generate all permutations of a string

```c
void ft_print_permutations(char *str);
```

| Allowed Functions | Output Count |
|:------------------|:-------------|
| `write`, `malloc`, `free` | n! permutations |

<details>
<summary>📖 Examples</summary>

```bash
$> ./ft_print_permutations "abc"
abc
acb
bac
bca
cab
cba
$> ./ft_print_permutations "12"
12
21
```
</details>

**Requirements:**
- ✅ Generate **all orderings** (n! permutations)
- ✅ Use **used array** to track which positions are taken
- ✅ Uses `write` instead of `printf`
- ✅ Free all allocated memory (buffer and used array)

[↑ Back to top](#-quick-navigation)

---

### 9. `ft_identity`

> 🔐 Find all self-describing sequences relative to a digit map

```c
void ft_identity(char *str);
```

| Allowed Functions | Max Length |
|:------------------|:-----------|
| `write` | 10 characters |

**How it works:**
- Input: a string of digits (e.g., `"0123"` or `"122"`)
- Output: all sequences where digit at position `i` = count of `str[i]` in the output

**Example with `"0123"`:**
```
Output: "1210"
  Position 0 → str[0]='0' → How many '0's in "1210"? → 1 ✓
  Position 1 → str[1]='1' → How many '1's in "1210"? → 2 ✓
  Position 2 → str[2]='2' → How many '2's in "1210"? → 1 ✓
  Position 3 → str[3]='3' → How many '3's in "1210"? → 0 ✓
```

<details>
<summary>📖 Examples</summary>

```bash
$> ./ft_identity "0123" | cat -e
1210$
2020$
$> ./ft_identity "3210" | cat -e
0121$
$> ./ft_identity "1230" | cat -e
2101$
0202$
$> ./ft_identity "0123456789"
6210001000
$> ./ft_identity "9876543210"
0001000126
$> ./ft_identity "122" | cat -e
000$
022$
100$
122$
211$
```
</details>

**Requirements:**
- ✅ String length **≤ 10** characters
- ✅ Multiple solutions sorted by **ASCII order**
- ✅ Each solution followed by **newline**
- ✅ Only `write` function allowed
- ✅ **Pruning**: stop if digit sum exceeds length

[↑ Back to top](#-quick-navigation)

---

### 10. `ft_n_queens_puzzle`

> ♛ Solve the classic N-Queens problem

```c
int ft_n_queens_puzzle(int n);
```

| Allowed Functions |
|:------------------|
| `printf`, `malloc`, `free`, `atoi`, `abs` |

**Problem:** Place N queens on N×N board so no two queens attack each other.

**Output Format:** Each solution is a string where digit at position i = column of queen in row i.

<details>
<summary>📖 Examples</summary>

```bash
$> ./ft_n_queens_puzzle 4
1302
2031
this is total possible place: 2
$> ./ft_n_queens_puzzle 8
04752613
05726314
... (92 solutions total)
this is total possible place: 92
```

**Solution "1302" visualized:**
```
Row 0: . Q . .  (Queen at column 1)
Row 1: . . . Q  (Queen at column 3)
Row 2: Q . . .  (Queen at column 0)
Row 3: . . Q .  (Queen at column 2)
```
</details>

**Requirements:**
- ✅ Print **all solutions**
- ✅ Return and display **total count**
- ✅ Use backtracking algorithm
- ✅ Check row, column, and **both diagonals**

| N | Solutions |
|:-:|:---------:|
| 1 | 1 |
| 4 | 2 |
| 8 | 92 |
| 10 | 724 |

[↑ Back to top](#-quick-navigation)

---

### 11. `ft_solve_maze`

> 🗺️ Find a path through a maze using backtracking

```c
int ft_solve_maze(char **map, int rows, int cols);
```

| Allowed Functions |
|:------------------|
| `printf`, `malloc`, `free` |

**Maze Representation:**
| In Code | Display | Meaning |
|:-------:|:-------:|:--------|
| `'0'` | `=` | Walkable path |
| `'1'` | `#` | Wall |
| `'x'` | `o` | Solution path |

<details>
<summary>📖 Examples</summary>

```bash
$> ./ft_solve_maze
>> = You can walk on it
>> # you cannot walk on it
>> o is the path we found
Result:
ooo#============
##o#=####=######
=oo==#====#=====
=o#########=####
=ooooo=#=====#==
=#=##o###=##=#==
=#=#=oooooooo#==
=#=#=###=###o#==
=#=#======ooo#==
=###=#####o#=#==
=====#===#o#=#==
=#=###=###o#=#==
ooooooooooo##===
o###########=###
oooo#ooooo#ooooo
=##ooo###ooo##=o
```
</details>

**Requirements:**
- ✅ Start at **(0, 0)**, end at **(rows-1, cols-1)**
- ✅ **Four-directional exploration**: Right → Down → Left → Up
- ✅ Mark visited cells with `'x'`
- ✅ **Backtracking**: restore original value if path fails
- ✅ Return **1** if path found, **0** otherwise

**Algorithm:**
```
1. Check if current position is valid
2. If reached destination → return success
3. Mark current cell as visited ('x')
4. Try: Right → Down → Left → Up
5. If any direction succeeds → return success
6. Restore cell (backtrack) → return failure
```

[↑ Back to top](#-quick-navigation)

---

## 📊 Complexity Summary

<table>
<tr>
<td valign="top">

### Linear Drills
| Exercise | Time | Space |
|:---------|:----:|:-----:|
| `put_alpha` | O(26) | O(26) |
| `put_rev_alpha` | O(26) | O(26) |
| `put_n_number` | O(n) | O(n) |
| `put_revn_number` | O(n) | O(n) |
| `sort_string` | O(n²) | O(n) |

</td>
<td valign="top">

### Decision Matrix
| Exercise | Time | Space |
|:---------|:----:|:-----:|
| `ft_factorial` | O(n) | O(n) |
| `ft_fibonacci` | O(2ⁿ) | O(n) |
| `ft_power` | O(exp) | O(exp) |
| `ft_sum_array` | O(n) | O(n) |
| `ft_print_subsets` | O(2ⁿ) | O(n) |
| `ft_power_sum_count` | O(√x·2^√x) | O(√x) |
| `ft_combinations` | O(C(n,k)) | O(k) |
| `ft_permutations` | O(n!) | O(n) |
| `ft_identity` | O((n+1)ⁿ) | O(n) |
| `ft_n_queens` | O(n!) | O(n) |
| `ft_solve_maze` | O(4^(r×c)) | O(r×c) |

</td>
</tr>
</table>

---

## 🧪 Testing

```bash
# Linear Drills
./Linear_Drills/put_alpha a
./Linear_Drills/put_rev_alpha A
./Linear_Drills/put_n_number 5
./Linear_Drills/put_revn_number 10

# Decision Matrix - Basic
./Decision_Matrix/ft_factorial 5
./Decision_Matrix/ft_fibonacci 10
./Decision_Matrix/ft_power 2 10
./Decision_Matrix/ft_sum_array 1 2 3 4 5

# Decision Matrix - Advanced
./Decision_Matrix/ft_print_subsets "abc"
./Decision_Matrix/ft_power_sum_count 100 2
./Decision_Matrix/ft_print_permutations "abc"
./Decision_Matrix/ft_identity "0123"
./Decision_Matrix/ft_identity "122"
./Decision_Matrix/ft_n_queens_puzzle 4
./Decision_Matrix/ft_solve_maze

# Memory leak detection
valgrind --leak-check=full ./Decision_Matrix/ft_print_subsets "abc"
valgrind --leak-check=full ./Decision_Matrix/ft_print_permutations "abc"
valgrind --leak-check=full ./Decision_Matrix/ft_n_queens_puzzle 8
```

---

<div align="center">

## 🏆 Progress Tracker

| Phase | Exercises | Status |
|:------|:----------|:------:|
| **Linear Drills** | put_alpha, put_rev_alpha, put_n_number, put_revn_number, sort_string | ⬜ |
| **Mathematical** | factorial, fibonacci, power, sum_array | ⬜ |
| **Binary Choice** | print_subsets, power_sum_count | ⬜ |
| **Combinatorial** | combinations, permutations | ⬜ |
| **Advanced** | identity, n_queens, solve_maze | ⬜ |

---

**Made with ❤️ for mastering recursive programming**

[![Linear Drills](https://img.shields.io/badge/📘_Linear_Drills-2196F3?style=for-the-badge)](#-linear-drills)
[![Decision Matrix](https://img.shields.io/badge/🎯_Decision_Matrix-ff6b6b?style=for-the-badge)](#-decision-matrix)

</div>
