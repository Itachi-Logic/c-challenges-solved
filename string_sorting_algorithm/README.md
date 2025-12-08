```markdown
<div align="center">

# 🧮 String Sorting Algorithms

### *Multiple Approaches to Sort Character Arrays*

[![Exercises](https://img.shields.io/badge/Exercises-5-success?style=for-the-badge&logo=c&logoColor=white)](.)
[![Difficulty](https://img.shields.io/badge/Difficulty-Intermediate-FF9800?style=for-the-badge)](.)
[![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](.)
[![Norminette](https://img.shields.io/badge/Norminette-Passing-success?style=for-the-badge)](.)

---

**A collection of string sorting implementations with varying optimization levels**  
*Part of [c-challenges-solved](../../) repository*

[Overview](#-overview) • [Implementations](#-implementations) • [Compilation](#%EF%B8%8F-compilation) • [Testing](#-testing)

</div>

---

## 📋 Overview

This module explores **different approaches to sorting character arrays** (strings) in C. Each implementation demonstrates a unique strategy, from basic bubble sort to optimized variants, helping you understand algorithm optimization and string manipulation in C.

### 🎯 What You'll Learn

```mermaid
graph LR
    A[Bubble Sort] --> B[Classic Nested Loops]
    B --> C[Optimized Bubble Sort]
    C --> D[Utility Functions]
    style A fill:#4CAF50
    style B fill:#2196F3
    style C fill:#FF9800
    style D fill:#9C27B0
```

| Concept | Files | Pattern |
|:--------|:----------|:--------|
| **Basic Sorting** | sort_string.c | Early exit optimization |
| **Classic Approach** | sort_string_classic.c | Standard nested loops |
| **Optimized Version** | sort_string_optimized.c | Reduced iterations |
| **Utility Functions** | ft_strcmp.c, ft_sort_string_tab.c | String comparison |

---

## 📚 Implementations

### 🔢 Implementation 1: `sort_string.c`

> Sort a string using bubble sort with early exit optimization

```c
void sort_string(char *str);
```

**Algorithm:** Bubble sort with flag-based optimization
```
"421337" → Sort iterations:
Pass 1: "213347"
Pass 2: "123347"
Pass 3: No swaps → Early exit
```

<details>
<summary>📖 View Code</summary>

```c
void sort_string(char *str)
{
    int i;
    int flag;
    
    if (!str || !str[0])
        return;
    
    flag = 0;
    while (flag == 0)
    {
        i = 0;
        flag = 1;
        while (str[i + 1])
        {
            if (ft_strcmp(str[i], str[i + 1]) > 0)
            {
                ft_swap((str + i), (str + i + 1));
                flag = 0;
            }
            i++;
        }
    }
}
```
</details>

**Features:**
- ✅ Early exit when no swaps occur
- ✅ In-place sorting (modifies original string)
- ✅ Handles edge cases (NULL, empty string)
- ✅ Uses custom comparison and swap functions

**Key Learning:** Optimization through early exit detection in bubble sort.

---

### 🔄 Implementation 2: `sort_string_classic.c`

> Classic bubble sort implementation with predictable iteration count

```c
void sort_string_classic(char *str);
```

**Algorithm:** Standard bubble sort with O(n²) complexity
```
"421337" → Always performs (n-1) passes:
Pass 1: "213347"
Pass 2: "123347"
Pass 3: "123347" (unnecessary but guaranteed)
```

<details>
<summary>📖 View Code</summary>

```c
void sort_string_classic(char *str)
{
    int i;
    int j;
    int len;
    
    len = ft_strlen(str);
    j = 0;
    while (j <= len - 1)
    {
        i = 0;
        while (str[i + 1])
        {
            if (ft_strcmp(str[i], str[i + 1]) > 0)
            {
                ft_swap((str + i), (str + i + 1));
            }
            i++;
        }
        j++;
    }
}
```
</details>

**Features:**
- ✅ Simple, predictable execution
- ✅ Always completes (n-1) passes
- ✅ Easy to understand and debug
- ✅ Includes string length utility

**Key Learning:** The basic pattern of nested loop sorting algorithms.

---

### 🔤 Implementation 3: `sort_string_optimized.c`

> Optimized bubble sort reducing unnecessary comparisons

```c
void sort_string_optimized(char *str);
```

**Algorithm:** Bubble sort with shrinking comparison window
```
"421337" → Iterations with decreasing range:
Pass 1: Compare all 6 elements
Pass 2: Compare first 5 elements
Pass 3: Compare first 4 elements
```

<details>
<summary>📖 View Code</summary>

```c
void sort_string_optimized(char *str)
{
    int i;
    int j;
    int len;
    
    len = ft_strlen(str);
    j = 0;
    while (j < len - 1)
    {
        i = 0;
        while (i < (len - 1 - j))
        {
            if (ft_strcmp(str[i], str[i + 1]) > 0)
            {
                ft_swap((str + i), (str + i + 1));
            }
            i++;
        }
        j++;
    }
}
```
</details>

**Features:**
- ✅ Reduces unnecessary comparisons
- ✅ Adapts inner loop boundary
- ✅ More efficient than classic version
- ✅ Maintains readability

**Key Learning:** Algorithm optimization through boundary adjustment.

---

### ⚙️ Utility 1: `ft_strcmp.c`

> Custom string comparison function

```c
int ft_strcmp(char *s1, char *s2);
```

**Purpose:** Compare two strings lexicographically

<details>
<summary>📖 View Code</summary>

```c
int ft_strcmp(char *s1, char *s2)
{
    while (*s1 == *s2 && *s1 != '\0')
    {
        s1++;
        s2++;
    }
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
```
</details>

**Features:**
- ✅ Handles unsigned character comparison
- ✅ Returns difference, not just -1/0/1
- ✅ Proper null termination check
- ✅ Used by all sorting implementations

---

### 🗂️ Utility 2: `ft_sort_string_tab.c`

> Placeholder for array-of-strings sorting (template)

```c
void ft_sort_string_tab(char **tab);
```

**Purpose:** Template for sorting string arrays (to be implemented)

**Note:** Currently contains only file headers - serves as a starting point for more advanced sorting challenges.

---

## 🛠️ Compilation

### Individual Implementation
```bash
gcc -Wall -Wextra -Werror sort_string.c ft_strcmp.c -o sort_string
gcc -Wall -Wextra -Werror sort_string_classic.c -o sort_string_classic
gcc -Wall -Wextra -Werror sort_string_optimized.c -o sort_string_optimized
```

### All Implementations
```bash
# Compile all main files
for file in sort_string sort_string_classic sort_string_optimized; do
    gcc -Wall -Wextra -Werror ${file}.c ft_strcmp.c -o $file
done
```

### With Debug Symbols
```bash
gcc -Wall -Wextra -Werror -g sort_string.c ft_strcmp.c -o sort_string_debug
```

---

## 🧪 Testing

### Basic Tests
```bash
# Test basic sorting
./sort_string
./sort_string_classic  
./sort_string_optimized

# Expected output for all: "123347"
```

### Custom Test Cases
```bash
# Modify main() in each file to test different strings:
char test1[] = "cba";      # → "abc"
char test2[] = "zyxw";     # → "wxyz"
char test3[] = "a";        # → "a"
char test4[] = "";         # → ""
```

### Performance Comparison
```bash
# Compare execution times (requires time command)
time ./sort_string
time ./sort_string_classic
time ./sort_string_optimized
```

---

## 📊 Algorithm Comparison

### ⏱️ Performance Characteristics

| Implementation | Best Case | Average Case | Worst Case | Space |
|:---------------|:---------:|:------------:|:----------:|:-----:|
| `sort_string` | O(n) | O(n²) | O(n²) | O(1) |
| `sort_string_classic` | O(n²) | O(n²) | O(n²) | O(1) |
| `sort_string_optimized` | O(n) | O(n²) | O(n²) | O(1) |

### 🔍 Key Differences

| Feature | Basic | Classic | Optimized |
|:--------|:------|:--------|:----------|
| Early Exit | ✅ | ❌ | ❌ |
| Predictable Passes | ❌ | ✅ | ❌ |
| Shrinking Window | ❌ | ❌ | ✅ |
| Code Complexity | Medium | Low | Medium |

---

## ⚠️ Common Pitfalls

### 🔴 Missing Edge Cases
```c
// Forgetting to check for empty string
void unsafe_sort(char *str) {
    // ❌ Crashes if str is NULL or empty
    int len = ft_strlen(str);
    // ...
}
```

### 🔴 Incorrect Comparison
```c
// Signed vs unsigned comparison
int bad_strcmp(char c1, char c2) {
    return c1 - c2;  // ❌ Negative chars cause issues
}
```

### 🔴 Infinite Loops
```c
// Missing termination condition
void infinite_sort(char *str) {
    int i = 0;
    while (1) {  // ❌ Never ends
        // ...
    }
}
```

### 🔴 Buffer Issues
```c
// Modifying read-only strings
char *str = "hello";  // ❌ String literal
sort_string(str);     // ❌ Attempts to modify read-only memory
```

---

## 💡 Pro Tips

### ✨ Choosing the Right Algorithm

| Scenario | Recommended Implementation |
|:---------|:---------------------------|
| Small strings (<10 chars) | `sort_string_classic` (simplicity) |
| Partially sorted data | `sort_string` (early exit benefit) |
| Large strings | `sort_string_optimized` (fewer comparisons) |
| Learning purposes | Try all three to understand differences |

### 🎯 Optimization Insights

```c
// The optimization in sort_string_optimized.c:
while (i < (len - 1 - j)) {
    // Each pass compares one fewer element
    // Last j elements are already sorted
}
```

### 📝 Best Practices
- ✅ Always validate input (NULL, empty string)
- ✅ Use `unsigned char` for character comparison
- ✅ Include early exits where possible
- ✅ Document algorithm complexity
- ✅ Test with edge cases (empty, single char, sorted input)

---

## 📈 Learning Progression

```
Start Here          Understand Basics      Optimize
    ↓                      ↓                  ↓
sort_string_classic → sort_string → sort_string_optimized
    ↓                      ↓                  ↓
Simple Nested Loops   Early Exit        Boundary Reduction
```

**Recommended Study Order:**
1. ✅ `sort_string_classic.c` - Understand basic bubble sort
2. ✅ `sort_string.c` - Learn early exit optimization
3. ✅ `sort_string_optimized.c` - Study boundary optimization
4. ✅ `ft_strcmp.c` - Master string comparison
5. ✅ `ft_sort_string_tab.c` - Extend to array sorting (challenge)

---

## 🔗 Related Topics

### In This Repository
- [Linear Drills](../linear_drills/) - Recursive printing exercises
- [Array Algorithms](../array_algorithms/) - Sorting numerical arrays
- [String Manipulation](../string_manipulation/) - Other string operations
- [Algorithm Analysis](../../algorithm_analysis/) - Complexity theory

### Beyond This Module
| Current Focus | Next Steps |
|:--------------|:-----------|
| Character sorting | String array sorting |
| Bubble sort variants | Quick sort, Merge sort |
| In-place algorithms | External sorting |
| C string functions | Unicode/UTF-8 handling |

---

## 🎓 Visualization Guide

### Bubble Sort Visualization

```
Initial: 4 2 1 3 3 7
         ↓
Pass 1:  2 4 1 3 3 7
            ↓
         2 1 4 3 3 7
              ↓
         2 1 3 4 3 7
                ↓
         2 1 3 3 4 7  ← 4 and 7 already in order
         
Pass 2:  1 2 3 3 4 7  ← Sorted!
```

### Algorithm Flow Comparison

```
sort_string (with flag):
    ↓
Check swaps → If none → Exit early
    ↓
Continue until sorted

sort_string_classic:
    ↓
Always complete (n-1) passes
    ↓
Guaranteed but potentially wasteful

sort_string_optimized:
    ↓
Reduce inner loop each pass
    ↓
Fewer comparisons over time
```

---

<div align="center">

### 🎓 Learning Outcomes

After mastering these implementations, you will understand:

**Algorithm Design** | **Optimization** | **C Programming**
:---: | :---: | :---:
Bubble sort variants | Early exit patterns | String manipulation
Time/space complexity | Boundary optimization | Pointer arithmetic
In-place sorting | Performance trade-offs | Memory management

---

### 📫 Need Help?

If you find any issues or have suggestions:
- 🐛 [Report a bug](../../issues)
- 💡 [Request a feature](../../issues)
- ⭐ [Star this repo](../../)

---

**Master the art of string sorting in C**

*Builds upon [Linear Drills](../linear_drills/) and prepares for advanced algorithms*

[![Back to Main](https://img.shields.io/badge/←_Back_to_Main-4CAF50?style=for-the-badge)](../../)
[![View Array Algorithms](https://img.shields.io/badge/View_Array_Algorithms_→-2196F3?style=for-the-badge)](../array_algorithms/)

</div>
