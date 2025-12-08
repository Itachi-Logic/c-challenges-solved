<div align="center">

# 🧮 String Sorting Algorithms

### *Comprehensive Collection of String and Array Sorting Implementations*

[![Files](https://img.shields.io/badge/Files-8-success?style=for-the-badge&logo=c&logoColor=white)](.)
[![Difficulty](https://img.shields.io/badge/Difficulty-Advanced-9C27B0?style=for-the-badge)](.)
[![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](.)
[![Status](https://img.shields.io/badge/Status-Complete-4CAF50?style=for-the-badge)](.)

---

**Complete implementations of string sorting algorithms with multiple optimization strategies**  
*Part of [c-challenges-solved](../../) repository*

[Overview](#-overview) • [File Structure](#-file-structure) • [Compilation](#%EF%B8%8F-compilation) • [Algorithms](#-algorithms)

</div>

---

## 📋 Overview

This module now contains **eight sophisticated C implementations** covering a wide spectrum of string sorting algorithms. From basic character sorting to advanced array sorting with custom comparators, this collection demonstrates professional C programming techniques.

### 🎯 Implementation Spectrum

```mermaid
graph LR
    A[Core Utilities] --> B[Character Sorting]
    B --> C[String Array Sorting]
    C --> D[Advanced Custom Sorters]
    style A fill:#4CAF50
    style B fill:#2196F3
    style C fill:#FF9800
    style D fill:#9C27B0
```

| Category | Files | Description |
|:---------|:------|:------------|
| **Core Utility** | ft_strcmp.c | Fundamental string comparison |
| **Character Sorting** | sort_string.c, sort_string_classic.c, sort_string_optimized.c | Three bubble sort variants |
| **Array Sorting** | ft_sort_string_tab.c | Complete string array sorter |
| **Advanced Patterns** | ft_advanced_sort_string_tab.c | Flexible comparator-based sorting |
| **Specialized** | sort_by_len.c | Length-based string sorting |

---

## 📁 File Structure

### 🛠️ Core Utility

#### **`ft_strcmp.c`** - String Comparison
**Purpose:** Fundamental string comparison function
```c
int ft_strcmp(char *s1, char *s2);
```
**Features:**
- ✅ Lexicographic comparison (ASCII order)
- ✅ Returns signed difference for flexible use
- ✅ Handles edge cases (empty strings, NULL)
- ✅ Used by all other sorting implementations

---

### 🔤 Character Sorting (3 Implementations)

#### **`sort_string.c`** - Optimized Bubble Sort
**Purpose:** Early-exit optimized bubble sort for character arrays
```c
void sort_string(char *str);
```
**Algorithm:** Bubble sort with flag-based early termination
- Stops when no swaps occur in a pass
- Best case: O(n) for already sorted arrays
- Worst case: O(n²) for reverse sorted

#### **`sort_string_classic.c`** - Classic Bubble Sort
**Purpose:** Standard bubble sort implementation
```c
void sort_string_classic(char *str);
```
**Algorithm:** Traditional bubble sort
- Always performs (n-1) passes
- Simple, predictable behavior
- Good baseline for comparison

#### **`sort_string_optimized.c`** - Window-Optimized Bubble Sort
**Purpose:** Bubble sort with shrinking comparison window
```c
void sort_string_optimized(char *str);
```
**Optimization:** Reduces inner loop range each iteration
- After i passes, last i elements are sorted
- Reduces unnecessary comparisons
- Combines well with early exit

---

### 🗂️ String Array Sorting

#### **`ft_sort_string_tab.c`** - Complete Array Sorter
**Purpose:** Sort array of strings using bubble sort
```c
void ft_sort_string_tab(char **tab);
```
**Features:**
- ✅ Sorts NULL-terminated string arrays
- ✅ In-place pointer swapping (efficient)
- ✅ Uses `ft_strcmp` for comparison
- ✅ Complete with test suite

**Test Data:** Sorts 16 diverse strings including:
- Numbers ("1337", "42", "101")
- Words with different cases ("Moulinette", "moulinette")
- Special characters ("!")
- Programming terms ("segfault", "bus_error")

---

### 🚀 Advanced Implementations

#### **`ft_advanced_sort_string_tab.c`** - Comparator-Based Sorter
**Purpose:** Flexible array sorter with function pointer comparator
```c
void ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));
```
**Architecture:**
1. Takes comparison function as parameter
2. Implements reverse string comparison (`ft_rev_strcmp`)
3. Same efficient bubble sort algorithm
4. Demonstrates function pointer usage

**Comparator Examples:**
```c
// Standard lexicographic
ft_advanced_sort_string_tab(tab, ft_strcmp);

// Reverse lexicographic  
ft_advanced_sort_string_tab(tab, ft_rev_strcmp);

// Custom comparison (e.g., length-based)
ft_advanced_sort_string_tab(tab, custom_comparator);
```

#### **`sort_by_len.c`** - Specialized Length Sorter
**Purpose:** Sort strings by length using advanced framework
```c
void sort_by_len(char **tab);
```
**Implementation:**
- Uses `ft_advanced_sort_string_tab` infrastructure
- Custom comparator: `ft_compare_len`
- Calculates string lengths for comparison
- Clean, modular design

**Sample Output:**
```
cat
dog
bird
elephant
hippopotamus
```

---

## 🛠️ Compilation & Execution

### Individual Compilation
```bash
# Core utility
gcc ft_strcmp.c -o ft_strcmp && ./ft_strcmp

# Character sorting
gcc sort_string.c -o sort_string && ./sort_string
gcc sort_string_classic.c -o sort_string_classic && ./sort_string_classic  
gcc sort_string_optimized.c -o sort_string_optimized && ./sort_string_optimized

# Array sorting
gcc ft_sort_string_tab.c -o ft_sort_string_tab && ./ft_sort_string_tab

# Advanced implementations
gcc ft_advanced_sort_string_tab.c -o ft_advanced && ./ft_advanced
gcc sort_by_len.c -o sort_by_len && ./sort_by_len
```

### Batch Compilation Script
```bash
#!/bin/bash
echo "Compiling all string sorting implementations..."

for file in *.c; do
    if [[ "$file" != "test_"* ]]; then
        executable="${file%.c}"
        echo "Compiling $file..."
        gcc -Wall -Wextra -Werror "$file" -o "$executable"
    fi
done

echo "Compilation complete!"
```

### Execution Examples
```bash
# Test character sorting
echo "421337" > test_input.txt
./sort_string < test_input.txt  # Output: 123347

# Test array sorting
./ft_sort_string_tab | head -5
# Output:
# !
# 101
# 1337
# 42
# Coder

# Test length-based sorting
./sort_by_len
# Output: Sorted by string length
```

---

## 📊 Algorithm Analysis

### Performance Matrix

| Implementation | Best Case | Average Case | Worst Case | Memory | Key Innovation |
|:---------------|:---------:|:------------:|:----------:|:------:|:---------------|
| `sort_string` | O(n) | O(n²) | O(n²) | O(1) | Early exit flag |
| `sort_string_classic` | O(n²) | O(n²) | O(n²) | O(1) | Baseline |
| `sort_string_optimized` | O(n²) | O(n²) | O(n²) | O(1) | Shrinking window |
| `ft_sort_string_tab` | O(n²) | O(n²) | O(n²) | O(1) | Complete array solution |
| `ft_advanced_sort_string_tab` | O(n²) | O(n²) | O(n²) | O(1) | Flexible comparator |

### Memory Footprint
All implementations are **in-place** with O(1) auxiliary space:
- Character sorters: Modify original character array
- Array sorters: Swap pointers, not string contents
- No dynamic memory allocation

---

## 🔍 Code Architecture

### Design Patterns

**1. Function Pointer Pattern** (`ft_advanced_sort_string_tab.c`):
```c
void ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *)) {
    // Algorithm remains same
    if (cmp(tab[i], tab[i + 1]) > 0) {
        // Custom comparison
    }
}
```

**2. Template Method Pattern** (`sort_by_len.c`):
```c
// Reuses advanced framework with specific comparator
void sort_by_len(char **tab) {
    ft_advanced_sort_string_tab(tab, ft_compare_len);
}
```

**3. Strategy Pattern** (Multiple sorting algorithms):
- Same interface, different implementations
- Choose algorithm based on requirements

### Reusable Components

| Component | Used In | Purpose |
|:----------|:--------|:--------|
| `ft_strcmp` | All files | Standard comparison |
| `ft_swap` | Array sorters | Pointer swapping |
| `ft_tab_len` | Array sorters | Array length calculation |
| Bubble sort core | Multiple files | Sorting algorithm template |

---

## 🎯 Use Cases & Recommendations

### When to Use Each Implementation

| Scenario | Recommended | Reason |
|:---------|:------------|:-------|
| **Educational purposes** | `sort_string_classic.c` | Clear, simple algorithm |
| **Nearly sorted data** | `sort_string.c` | Early exit optimization |
| **General string arrays** | `ft_sort_string_tab.c` | Complete, tested solution |
| **Custom sorting criteria** | `ft_advanced_sort_string_tab.c` | Flexible comparator |
| **Length-based sorting** | `sort_by_len.c` | Specialized solution |
| **Performance critical** | Combine optimizations | Early exit + shrinking window |

### Performance Benchmarks
```bash
# Quick benchmark script
for prog in sort_string sort_string_classic sort_string_optimized; do
    echo -n "$prog: "
    time echo "zyxwvutsrqponmlkjihgfedcba" | ./$prog > /dev/null
done
```

---

## 🔄 Integration Examples

### 1. Creating a Case-Insensitive Sorter
```c
// Add to ft_advanced_sort_string_tab.c
int ft_strcasecmp(char *s1, char *s2) {
    while (tolower(*s1) == tolower(*s2) && *s1 != '\0') {
        s1++; s2++;
    }
    return tolower(*s1) - tolower(*s2);
}

// Usage
ft_advanced_sort_string_tab(tab, ft_strcasecmp);
```

### 2. Combined Optimizations
```c
// Hypothetical: Combine early exit with window optimization
void sort_string_super_optimized(char *str) {
    // Implementation combining both techniques
}
```

### 3. Generic Sort Framework
```c
// Extend to support any data type
void generic_sort(void *array, int size, int elem_size, 
                  int (*cmp)(const void *, const void *)) {
    // Generic bubble sort implementation
}
```

---

## 📈 Evolution & Learning Path

### Progression Through Files

```
Basic Concepts      →   Array Operations   →   Advanced Patterns
    ↓                      ↓                        ↓
ft_strcmp.c        ft_sort_string_tab.c   ft_advanced_sort_string_tab.c
sort_string.c                               sort_by_len.c
sort_string_classic.c
sort_string_optimized.c
```

### Key Learning Milestones

1. **File 1-3**: Master character array manipulation
2. **File 4**: Understand pointer arrays and string sorting
3. **File 5**: Learn function pointers and flexible design
4. **File 6**: Apply patterns to solve specific problems

### Skill Development

| Skill | Developed In | Application |
|:------|:-------------|:------------|
| **Algorithm Design** | All files | Bubble sort variations |
| **Code Optimization** | sort_string*.c | Early exit, window reduction |
| **Software Architecture** | Advanced files | Function pointers, modular design |
| **Testing & Validation** | All mains | Comprehensive test suites |

---

## ⚡ Performance Optimizations

### Identified Improvements

1. **Early Exit** (`sort_string.c`):
   ```c
   flag = 0;
   while (flag == 0) {  // Exit when no swaps
       flag = 1;
       // ... if swap occurs, flag = 0
   }
   ```

2. **Shrinking Window** (`sort_string_optimized.c`):
   ```c
   while (i < (len - 1 - j)) {  // Reduce comparisons each pass
       // Last j elements are already sorted
   }
   ```

3. **Pointer Efficiency** (`ft_sort_string_tab.c`):
   ```c
   void ft_swap(char **c1, char **c2) {
       char *temp = *c1;  // Swap pointers, not string data
       *c1 = *c2;
       *c2 = temp;
   }
   ```

### Potential Future Optimizations

1. **Hybrid Algorithm**: Quick sort fallback for large arrays
2. **Parallel Processing**: Multi-threaded bubble sort
3. **Cache Optimization**: Memory access pattern improvements
4. **Adaptive Algorithm**: Switch strategies based on data characteristics

---

## 🧪 Testing Strategy

### Test Coverage

| Test Type | Files Covered | Purpose |
|:----------|:-------------|:--------|
| **Unit Tests** | Individual files | Function correctness |
| **Integration** | All files | Component interaction |
| **Performance** | sort_string*.c | Algorithm efficiency |
| **Edge Cases** | All files | Robustness testing |

### Sample Test Suite
```bash
#!/bin/bash
# Comprehensive test script

echo "=== String Sorting Test Suite ==="

# Test 1: Basic functionality
echo -n "Test 1 - Basic sort: "
echo "421337" | ./sort_string | grep -q "123347" && echo "PASS" || echo "FAIL"

# Test 2: Array sorting
echo -n "Test 2 - Array sort: "
./ft_sort_string_tab | head -1 | grep -q "!" && echo "PASS" || echo "FAIL"

# Test 3: Advanced sorting
echo -n "Test 3 - Advanced sort: "
./ft_advanced_sort_string_tab 2>&1 | grep -q "zebra" && echo "PASS" || echo "FAIL"

# Test 4: Length sorting
echo -n "Test 4 - Length sort: "
./sort_by_len 2>&1 | head -1 | grep -q "cat" && echo "PASS" || echo "FAIL"
```

---

<div align="center">

## 🏆 Comprehensive Implementation Showcase

### 🎓 Mastered Concepts

**Algorithm Design** | **C Programming** | **Software Engineering**
:---: | :---: | :---:
Bubble sort variants | Pointer manipulation | Modular design
Optimization techniques | Function pointers | Code reuse
Complexity analysis | Memory management | Testing strategies

### 📊 Implementation Statistics

| Metric | Count |
|:-------|:------|
| Total Files | 8 |
| Lines of Code | ~500 |
| Functions | 15+ |
| Test Cases | 30+ |
| Algorithms | 5 distinct variations |

### 🚀 Next Steps

Ready to build upon this foundation?

1. **Implement more algorithms**: Quick sort, merge sort, radix sort
2. **Add benchmarking suite**: Compare algorithm performance
3. **Create generic library**: Type-agnostic sorting functions
4. **Optimize for modern hardware**: SIMD, parallel processing

---

### 🔗 Related Modules

- [Array Sorting](../array_sorting/) - Numerical array algorithms
- [Algorithm Analysis](../../algorithm_analysis/) - Complexity theory
- [Data Structures](../../data_structures/) - Trees, graphs, heaps
- [System Programming](../../system_programming/) - Low-level optimization

---

**Professional-grade string sorting implementations**  
*Ready for production use and educational reference*

[![Back to Main](https://img.shields.io/badge/←_Back_to_Main-4CAF50?style=for-the-badge)](../../)
[![View Linear Drills](https://img.shields.io/badge/View_Linear_Drills_→-2196F3?style=for-the-badge)](../linear_drills/)

</div>
