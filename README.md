<p align="center">
  <img src="./assets/leetcode-header.svg" width="100%" alt="LeetCode Solutions - a pattern-first algorithm archive">
</p>

<p align="center">
  <a href="https://leetcode.com/">
    <img src="https://img.shields.io/badge/LeetCode-Solutions-00B8A9?style=for-the-badge&logo=leetcode&logoColor=white" alt="LeetCode Solutions">
  </a>
  <img src="https://img.shields.io/badge/C%2B%2B-17%20%7C%2020-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++ 17 and 20">
  <img src="https://img.shields.io/badge/Organization-Pattern_First-22C55E?style=for-the-badge" alt="Pattern-first organization">
  <img src="https://img.shields.io/badge/Purpose-Reference_Archive-7C3AED?style=for-the-badge" alt="Reference archive">
</p>

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=20&pause=1100&color=25D9C8&center=true&vCenter=true&width=820&lines=Pattern+recognition+over+memorized+answers;Readable+C%2B%2B+%7C+Explicit+trade-offs+%7C+Reusable+ideas;From+accepted+solution+to+durable+understanding" alt="Repository principles">
</p>

<p align="center">
  An intentionally organized collection of LeetCode solutions, implementation notes,<br>
  and reusable problem-solving patterns.
</p>

---

## About This Archive

This repository is a long-term reference for the ideas behind solved LeetCode problems: the pattern that unlocks them, the invariant that keeps them correct, and the trade-offs that shape the final implementation.

It serves four roles:

| Role | What it preserves |
| :--- | :--- |
| **Learning archive** | New techniques and the reasoning used to discover them |
| **Pattern library** | Reusable approaches across related problems |
| **Implementation reference** | Clean C++ solutions with explicit complexity |
| **Growth journal** | Better approaches discovered after the first accepted submission |

> The goal is not to collect accepted submissions. It is to preserve the reasoning worth reusing.

---

## Navigate by Pattern

Solutions are grouped by their **primary problem-solving pattern**, making the archive useful for focused practice and fast revision.

| Pattern | Core ideas |
| :--- | :--- |
| [Arrays & Hashing](./solutions/arrays-hashing/) | Frequency maps, prefix data, lookup-driven reductions |
| [Two Pointers](./solutions/two-pointers/) | Converging boundaries, partitioning, in-place scans |
| [Sliding Window](./solutions/sliding-window/) | Incremental state, valid ranges, substring constraints |
| [Stack & Queue](./solutions/stack-queue/) | Monotonic structures, deferred work, ordered processing |
| [Binary Search](./solutions/binary-search/) | Search spaces, monotonic predicates, boundary control |
| [Linked Lists](./solutions/linked-lists/) | Pointer movement, reversal, cycle reasoning |
| [Trees & BST](./solutions/trees-bst/) | Recursive structure, traversal, ordered trees |
| [Heaps](./solutions/heaps/) | Priority-driven selection, streaming extrema, scheduling |
| [Backtracking](./solutions/backtracking/) | State-space exploration, pruning, reversible choices |
| [Graphs](./solutions/graphs/) | Traversal, connectivity, shortest paths, topological order |
| [Dynamic Programming](./solutions/dynamic-programming/) | State design, transitions, memoization, tabulation |
| [Greedy & Intervals](./solutions/greedy-intervals/) | Local choices, ordering, overlap reasoning |
| [Bit Manipulation & Math](./solutions/bit-math/) | Bitwise state, number properties, combinatorial reasoning |

---

## Organization Strategy

This repository uses a **topic-first hybrid structure**:

- A solution lives under the pattern that best explains its key insight.
- Difficulty and secondary patterns live in the solution metadata.
- Filenames begin with the LeetCode problem ID for predictable ordering.
- Each problem has one canonical implementation, avoiding duplicated files.

```text
LeetCode-Solutions/
├── assets/
│   ├── leetcode-header.svg
│   └── leetcode-footer.svg
├── solutions/
│   ├── README.md
│   ├── arrays-hashing/
│   │   ├── README.md
│   │   └── 0001-two-sum.cpp
│   ├── two-pointers/
│   ├── sliding-window/
│   ├── stack-queue/
│   ├── binary-search/
│   ├── linked-lists/
│   ├── trees-bst/
│   ├── heaps/
│   ├── backtracking/
│   ├── graphs/
│   ├── dynamic-programming/
│   ├── greedy-intervals/
│   └── bit-math/
├── templates/
│   └── solution.cpp
└── README.md
```

Why not organize only by difficulty? Difficulty is useful context, but it is not a learning path. Topic-first navigation makes related ideas easy to compare, while metadata still preserves the Easy, Medium, or Hard classification.

Each topic folder includes a short, evergreen pattern note. These landing pages make navigation useful from day one without requiring manual status boards.

---

## The Pattern Recognition Loop

| Stage | Guiding question | Result |
| :--- | :--- | :--- |
| **Recognize** | What property or constraint is doing the real work? | Candidate patterns |
| **Reduce** | What smaller state, invariant, or search space represents the problem? | A precise model |
| **Implement** | Which data structure expresses that model clearly? | A readable solution |
| **Refine** | Can time, space, or clarity improve without hiding the idea? | A durable reference |

This loop matters more than memorizing a finished answer. The useful part of a solution is the decision process that can transfer to the next problem.

---

## Solution Standard

Every solution should be understandable without reopening the entire problem discussion. A short metadata header records the information most useful during revision:

```cpp
/*
 * Problem: 0001. Two Sum
 * Link: https://leetcode.com/problems/two-sum/
 * Difficulty: Easy
 * Primary pattern: Arrays & Hashing
 * Related patterns: One-pass lookup
 * Time: O(n)
 * Space: O(n)
 *
 * Insight:
 * Store each visited value so its required complement can be found immediately.
 */
```

Implementations favor clear invariants, meaningful names, and standard C++ over cleverness that makes the core idea harder to recover later.

---

## Repository Principles

| Principle | In practice |
| :--- | :--- |
| **Optimize for recall** | Capture the insight and invariant, not a transcript of every thought |
| **Prefer one canonical solution** | Keep the clearest strong approach; document meaningful alternatives |
| **Explain decisions, not syntax** | Comments clarify why an approach works or why a trade-off was chosen |
| **Refine after acceptance** | Accepted is the first checkpoint; readability and understanding still matter |

---

## Using This Repository

1. Choose a pattern you want to strengthen.
2. Attempt a problem before opening its solution.
3. Compare the key invariant and complexity, not just the final code.
4. Reimplement the idea later from memory.
5. Revisit neighboring problems to recognize what changes and what stays reusable.

---

## Toolkit

<p align="center">
  <img src="https://skillicons.dev/icons?i=cpp,git,github,vscode" alt="C++, Git, GitHub, and VS Code">
</p>

The solutions are written primarily in modern **C++**, with an emphasis on the standard library, algorithmic clarity, and interview-ready reasoning.

---

## Notes

- Problem statements and examples belong to [LeetCode](https://leetcode.com/).
- Solutions are personal implementations created for learning and reference.
- Complexity notes describe the submitted approach unless stated otherwise.

<p align="center">
  <img src="./assets/leetcode-footer.svg" width="100%" alt="A reference archive for deliberate problem solving">
</p>
