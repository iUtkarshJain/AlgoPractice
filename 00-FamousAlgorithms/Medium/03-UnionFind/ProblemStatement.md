# Union Find Data Structure

The union-find data structure is similar to a traditional set data structure in that it contains a collection of unique values. However, these values are spread out amongst a variety of distinct disjoint sets, meaning that no set can have duplicate values, and no two sets can contain the same value.

## UnionFind Class

Write a `UnionFind` class that implements the union-find (also called a disjoint set) data structure. This class should support three methods:

- `createSet(value)`: Adds a given value in a new set containing only that value.
- `union(valueOne, valueTwo)`: Takes in two values and determines which sets they are in. If they are in different sets, the sets are combined into a single set. If either value is not in a set or they are in the same set, the function should have no effect.
- `find(value)`: Returns the "representative" value of the set for which a value belongs to. This can be any value in the set, but it should always be the same value, regardless of which value in the set `find` is passed. If the value is not in a set, the function should return `null` or `None`. Note that after a set is part of a union, its representative can potentially change.

You can assume `createSet` will never be called with the same value twice.

### Sample Usage

```plaintext
createSet(5): null
createSet(10): null
find(5): 5
find(10): 10
union(5, 10): null
find(5): 5
find(10): 5
createSet(20): null
find(20): 20
union(20, 10): null
find(5): 5
find(10): 5
find(20): 5
```
## Hints
<details> <summary>Hint 1</summary> Disjoint sets traditionally use a tree-like data structure for each set, with the root node being the "representative" node returned by `find`. </details><details> <summary>Hint 2</summary> When combining two trees with `union`, make sure to keep the height of the combined tree as small as possible in order to keep a logarithmic time complexity. </details><details> <summary>Hint 3</summary> The larger the tree is, the slower the time complexity will be. This can be improved by making all nodes in the trees point directly to the root, keeping a minimal height. A good time to make these updates is while running the `find` method. This is known as path compression. </details>