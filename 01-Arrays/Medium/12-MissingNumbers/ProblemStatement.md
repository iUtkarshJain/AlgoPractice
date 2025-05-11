# Missing Numbers

You're given an unordered list of unique integers **nums** in the range [1, n], where [n] represents the length of **nums + 2**. This means that two numbers in this range are missing from the list.

Write a function that takes in this list and returns a new list with the two missing numbers, sorted numerically.

## Sample Input
```
nums = [1, 4, 3]
```
## Sample Output
```
[2, 5]
```

## Hints
<details> <summary>Hint 1</summary> How would you solve this problem if there was only one missing number? Can that solution be applied to this problem with two missing numbers? </details> <details> <summary>Hint 2</summary> To efficiently find a single missing number, you can sum up all of the values in the array as well as sum up all of the values in the expected array (i.e. in the range [1, n]). The difference between these values is the missing number. </details> <details> <summary>Hint 3</summary> Using the same logic as for a single missing number, you can find the total of the two missing numbers. How can you then find which numbers these are? </details> <details> <summary>Hint 4</summary> If you take an average of the two missing numbers, one of the missing numbers must be less than that average, and one must be greater than the average. </details> <details> <summary>Hint 5</summary> Since we know there is one missing number on each side of the average, we can treat each side of the list as its own problem to find one missing number in that list. </details>