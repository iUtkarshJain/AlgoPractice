# Longest Peak

## Problem Statement

Write a function that takes in an array of integers and returns the length of the longest peak in the array.

A **peak** is defined as adjacent integers in the array that are **strictly increasing** until they reach a **tip** (the highest value in the peak), at which point they become **strictly decreasing**. At least **three** integers are required to form a peak.

For example:

- **Valid Peak:** `[1, 4, 10, 2]`
- **Invalid Cases:** `[4, 0, 10]` (not strictly increasing at first), `[1, 2, 2, 0]` (not strictly increasing)

---

## Sample Input

```c++
array = [1, 2, 3, 3, 4, 0, 10, 6, 5, -1, -3, 2, 3]
```

## Sample Output

```c++
6  # Peak: [0, 10, 6, 5, -1, -3]
```

## Hints

<details> <summary><strong>Hint 1</strong></summary> You can solve this question by iterating through the array from left to right once. </details> <details> <summary><strong>Hint 2</strong></summary> Iterate through the array from left to right and treat every integer as the potential **tip** of a peak. To be a **tip**, an integer must be strictly greater than its adjacent integers. What can you do when you find an actual tip? </details> <details> <summary><strong>Hint 3</strong></summary> As you iterate through the array, whenever you find a **tip** of a peak, expand outward from the tip until you no longer have a peak. Given what peaks look like and how many peaks can fit in an array, realize that this process results in a **linear-time algorithm**. Make sure to keep track of the **longest peak** you find as you iterate through the array. </details>
