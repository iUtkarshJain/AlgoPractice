# Tournament Winner

## Problem Statement

There's an algorithms tournament taking place in which teams of programmers compete against each other to solve algorithmic problems as fast as possible. Teams compete in a round-robin format, where each team faces off against all other teams. Only two teams compete against each other at a time, and for each competition, one team is designated the home team, while the other team is the away team. In each competition, there's always one winner and one loser; there are no ties. A team receives **3 points** if it wins and **0 points** if it loses. The winner of the tournament is the team that receives the most amount of points.

Given:

1. An array of pairs representing the teams that have competed against each other (`competitions`).
2. An array containing the results of each competition (`results`).

Write a function that returns the winner of the tournament.

---

## Input Format

- **competitions**: An array of pairs in the form `[homeTeam, awayTeam]`, where each team is a string of at most 30 characters.
- **results**: An array where `results[i]` denotes the winner of `competitions[i]`. A `1` means the home team won, and a `0` means the away team won.

---

## Sample Input

```plaintext
competitions = [
  ["HTML", "C#"],
  ["C#", "Python"],
  ["Python", "HTML"]
]
results = [0, 0, 1]
```

## Sample Output

```plaintext
"Python"
Explanation
// Competition 1: C# beats HTML → C# gets 3 points.

// Competition 2: Python beats C# → Python gets 3 points.

// Competition 3: Python beats HTML → Python gets 3 points.
```

## Hints

<details> <summary><b>Hint 1</b></summary>
Don't overcomplicate this problem. How would you solve it by hand? Consider that approach, and try to translate it into code.

</details><details> <summary><b>Hint 2</b></summary>
Use a hash table to store the total points collected by each team, with the team names as keys in the hash table. Once you know how many points each team has, how can you determine which one is the winner?

</details><details> <summary><b>Hint 3</b></summary>
Loop through all of the competitions, and update the hash table at every iteration. For each competition, consider the name of the winning team; if the name already exists in the hash table, update that entry by adding 3 points to it. If the team name doesn't exist in the hash table, add a new entry in the hash table with the key as the team name and the value as 3 (since the team won its first competition). While looping through all of the competitions, keep track of the team with the highest score, and at the end of the algorithm, return the team with the highest score.

</details>
