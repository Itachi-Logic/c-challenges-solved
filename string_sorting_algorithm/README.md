<div align="center">

# 🧮 String Sorting Algorithms

### *Multiple Implementations of Character and String Array Sorting*

[![Files](https://img.shields.io/badge/Files-5-success?style=for-the-badge&logo=c&logoColor=white)](.)
[![Difficulty](https://img.shields.io/badge/Difficulty-Intermediate-FF9800?style=for-the-badge)](.)
[![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](.)
[![Status](https://img.shields.io/badge/Status-Complete-4CAF50?style=for-the-badge)](.)

---

**A collection of optimized sorting algorithms for strings and character arrays**  
*Part of [c-challenges-solved](../../) repository*

[Overview](#-overview) • [Files](#-files) • [Compilation](#%EF%B8%8F-compilation) • [Execution](#-execution)

</div>

---

## 📋 Overview

This module contains **five complete C implementations** of sorting algorithms for both individual strings and arrays of strings. Each file demonstrates a different approach or optimization level, providing practical examples of algorithm design in C.

### 🎯 What's Implemented

```mermaid
graph LR
    A[Utility Functions] --> B[String Sorting]
    B --> C[Optimized Variants]
    C --> D[String Array Sorting]
    style A fill:#4CAF50
    style B fill:#2196F3
    style C fill:#FF9800
    style D fill:#9C27B0
```

| Category | Files | Description |
|:---------|:------|:------------|
| **Core Utility** | ft_strcmp.c | String comparison function |
| **Basic Algorithms** | sort_string.c, sort_string_classic.c | Bubble sort variations |
| **Optimized** | sort_string_optimized.c | Bubble sort with reduced comparisons |
| **Advanced** | ft_sort_string_tab.c | Complete string array sorter |

---

## 📁 Files

### 🔢 File 1: `ft_strcmp.c`

**Purpose:** String comparison utility function

**Features:**
- ✅ Lexicographic string comparison
- ✅ Handles unsigned character comparison
- ✅ Returns difference value (not just -1/0/1)
- ✅ Proper null termination checking
- ✅ Clean, efficient implementation

**Usage Example:**
```c
int result = ft_strcmp("apple", "banana");  // Returns negative
int result2 = ft_strcmp("hello", "hello"); // Returns 0
```

### 🔄 File 2: `sort_string.c`

**Purpose:** Bubble sort implementation with early exit optimization

**Features:**
- ✅ Sorts character arrays in-place
- ✅ Early termination when array is sorted
- ✅ Flag-based optimization
- ✅ Handles edge cases (NULL, empty strings)
- ✅ Uses character comparison function

**Algorithm:**
- Uses a flag to detect if any swaps occurred
- Stops early if array becomes sorted before all passes
- Time complexity: O(n) best case, O(n²) worst case

### 🔤 File 3: `sort_string_classic.c`

**Purpose:** Classic bubble sort implementation

**Features:**
- ✅ Standard bubble sort algorithm
- ✅ Always performs (n-1) passes
- ✅ Simple and predictable
- ✅ Good for learning purposes
- ✅ Includes string length function

**Algorithm:**
- Outer loop runs (length-1) times
- Inner loop compares adjacent elements
- Time complexity: O(n²) always

### 🔁 File 4: `sort_string_optimized.c`

**Purpose:** Optimized bubble sort with shrinking window

**Features:**
- ✅ Reduces comparison window each pass
- ✅ More efficient than classic version
- ✅ Still O(n²) but with fewer comparisons
- ✅ Combines well with early exit (though not implemented here)

**Optimization:**
- After each pass, largest element is at end
- Inner loop decreases range by 1 each iteration
- Reduces unnecessary comparisons

### 🗂️ File 5: `ft_sort_string_tab.c`

**Purpose:** Complete string array sorting program

**Features:**
- ✅ Sorts array of strings (char**)
- ✅ Uses bubble sort algorithm
- ✅ Handles NULL-terminated string arrays
- ✅ Includes all necessary utility functions
- ✅ Complete with main() for testing

**Key Components:**
1. `ft_strcmp()` - String comparison
2. `ft_swap()` - Pointer swapping
3. `ft_strlen()` - Array length calculation
4. `ft_sort_string_tab()` - Main sorting function
5. `main()` - Test driver with sample data

**Sample Output:**
```
!
101
1337
42
Coder
Moulinette
ZEBRA
apple
banana
bus_error
cherry
code
moulinette
segfault
success
zebra
```

---

## 🛠️ Compilation

### Individual Files
```bash
# Compile and run string comparison
gcc ft_strcmp.c -o ft_strcmp && ./ft_strcmp

# Compile and run basic string sort
gcc sort_string.c -o sort_string && ./sort_string

# Compile and run classic string sort  
gcc sort_string_classic.c -o sort_string_classic && ./sort_string_classic

# Compile and run optimized string sort
gcc sort_string_optimized.c -o sort_string_optimized && ./sort_string_optimized

# Compile and run string array sort
gcc ft_sort_string_tab.c -o ft_sort_string_tab && ./ft_sort_string_tab
```

### Batch Compilation
```bash
# Compile all files at once
for file in *.c; do
    executable="${file%.c}"
    gcc -Wall -Wextra -Werror "$file" -o "$executable"
done
```

### With Debug Information
```bash
gcc -g -Wall -Wextra -Werror ft_sort_string_tab.c -o ft_sort_string_tab_debug
```

---

## 🧪 Execution

### Expected Outputs

**ft_strcmp.c:**
```
value is: 0  # (when comparing "" with "")
```

**sort_string.c:**
```
123347  # Sorts "421337"
```

**sort_string_classic.c:**
```
123347  # Sorts "421337"
```

**sort_string_optimized.c:**
```
123347  # Sorts "421337"
```

**ft_sort_string_tab.c:**
```
!
101
1337
42
Coder
Moulinette
ZEBRA
apple
banana
bus_error
cherry
code
moulinette
segfault
success
zebra
```

---

## 📊 Algorithm Analysis

### Performance Comparison

| File | Best Case | Average Case | Worst Case | Space | Key Feature |
|:-----|:---------:|:------------:|:----------:|:-----:|:------------|
| `sort_string.c` | O(n) | O(n²) | O(n²) | O(1) | Early exit optimization |
| `sort_string_classic.c` | O(n²) | O(n²) | O(n²) | O(1) | Simple, predictable |
| `sort_string_optimized.c` | O(n²) | O(n²) | O(n²) | O(1) | Reduced comparisons |
| `ft_sort_string_tab.c` | O(n²) | O(n²) | O(n²) | O(1) | Complete solution |

### Memory Usage
All implementations use **O(1)** auxiliary space (in-place sorting) except for the natural recursion stack usage in bubble sort.

---

## 🔍 Code Walkthrough

### Key Implementation Details

**1. Character Comparison:**
```c
int ft_strcmp(char c1, char c2)
{
    return ((unsigned char) c1 - (unsigned char) c2);
}
```
*Uses unsigned char casting to handle extended ASCII properly*

**2. Early Exit Optimization:**
```c
flag = 0;
while (flag == 0) {
    flag = 1;
    // If no swaps occur, flag remains 1 and loop exits
}
```
*Detects when array is sorted to terminate early*

**3. Window Optimization:**
```c
while (i < (len - 1 - j)) {
    // Reduces comparisons each pass
}
```
*After j passes, last j elements are sorted*

**4. String Array Sorting:**
```c
void ft_swap(char **c1, char **c2) {
    char *temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}
```
*Swaps pointers, not string contents, for efficiency*

---

## 🎯 Learning Points

### From These Implementations:

1. **Algorithm Variants**: Same problem (sorting) can have multiple solutions
2. **Optimization Techniques**: Early exit, reduced comparisons, pointer efficiency
3. **Code Organization**: Utility functions, separation of concerns
4. **Edge Case Handling**: NULL pointers, empty strings, single characters
5. **Testing**: Each file includes a main() with test cases

### Key Takeaways:

- **Bubble Sort**: Simple but inefficient for large datasets (O(n²))
- **In-place Sorting**: Modifies original array, saves memory
- **Stable Sort**: Bubble sort is stable (equal elements keep order)
- **Adaptive**: Can be optimized to handle partially sorted data efficiently

---

## ⚡ Performance Tips

### When to Use Which Implementation:

| Scenario | Recommended File | Reason |
|:---------|:----------------|:-------|
| Small strings (<50 chars) | Any | Performance difference negligible |
| Nearly sorted data | `sort_string.c` | Benefits from early exit |
| Educational purposes | `sort_string_classic.c` | Clear, simple algorithm |
| String arrays | `ft_sort_string_tab.c` | Complete solution |
| Need predictable timing | `sort_string_classic.c` | Consistent O(n²) |

### Potential Improvements:

1. **Hybrid Approach**: Combine early exit with window optimization
2. **Different Algorithm**: Implement quicksort or mergesort for better O(n log n) performance
3. **Case-insensitive Sorting**: Modify comparison function
4. **Custom Comparators**: Allow different sorting criteria
5. **Generic Implementation**: Use void pointers for any data type

---

## 🧩 Integration Example

### Building a Custom Sorter:

```c
// Example: Create a custom sorter using these components
#include "ft_strcmp.c"

void custom_string_sorter(char **array, int size) {
    // Use ft_strcmp for comparison
    // Implement your preferred algorithm
    // Reuse ft_swap from ft_sort_string_tab.c
}
```

### Extending Functionality:

1. Add descending order option
2. Implement case-insensitive sorting
3. Add length-based string sorting
4. Create a generic sort function with function pointer comparator

---

## 📈 Complexity Insights

### Why Bubble Sort is O(n²):

1. **Outer Loop**: Runs n-1 times
2. **Inner Loop**: Runs approximately n/2 times on average
3. **Total**: (n-1) × (n/2) ≈ n²/2 operations
4. **Optimizations**: Can reduce constant factor but not asymptotic complexity

### Comparison with Other Sorts:

| Algorithm | Best | Average | Worst | Space | Stable |
|:----------|:----:|:-------:|:-----:|:-----:|:------:|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | No |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | No |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | Yes |

---

<div align="center">

### 🎓 Mastered Concepts

Through these implementations, you've covered:

**Core Algorithms** | **Optimization** | **C Programming**
:---: | :---: | :---:
Bubble sort variants | Early termination | Pointer manipulation
String comparison | Window reduction | Array handling
In-place sorting | Adaptive algorithms | Memory efficiency

---

### 🔗 Next Steps

Ready to explore more? Check out:

- [Array Sorting Algorithms](../array_sorting/) - Sorting numerical arrays
- [Advanced Algorithms](../../advanced_algorithms/) - Quicksort, Mergesort, etc.
- [Algorithm Analysis](../../algorithm_analysis/) - Complexity theory
- [Memory Management](../../memory_management/) - Dynamic allocation

---

**Complete, tested, and ready-to-use string sorting implementations**

*Perfect reference for understanding sorting algorithms in C*

[![Back to Main](https://img.shields.io/badge/←_Back_to_Main-4CAF50?style=for-the-badge)](../../)
[![View All Challenges](https://img.shields.io/badge/View_All_Challenges_→-2196F3?style=for-the-badge)](../../)

</div>
