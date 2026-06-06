<div align="center">

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:00C9FF,100:92FE9D&height=230&section=header&text=LeetCode%20Solutions&fontSize=52&fontColor=ffffff&animation=fadeIn&fontAlignY=36&desc=Pattern-first%20algorithm%20archive&descAlignY=57&descSize=16" alt="LeetCode Solutions">

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=20&pause=1100&color=16C7C1&center=true&vCenter=true&width=820&lines=Reading+constraints+before+writing+code;Turning+patterns+into+reusable+instincts;Clean+C%2B%2B+%7C+Clear+reasoning+%7C+Explicit+trade-offs" alt="Repository philosophy">

<br>

![C++](https://img.shields.io/badge/C%2B%2B-17%20%7C%2020-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![LeetCode](https://img.shields.io/badge/LeetCode-Solutions-FFA116?style=for-the-badge&logo=leetcode&logoColor=black)
![Structure](https://img.shields.io/badge/Structure-Pattern_First-00B8A9?style=for-the-badge)
![Purpose](https://img.shields.io/badge/Purpose-Learning_Archive-7C3AED?style=for-the-badge)

<br><br>

A curated collection of LeetCode solutions built for **understanding**, **revision**, and **reuse**.

[Explore](#explore-the-archive) &nbsp;|&nbsp; [Approach](#the-problem-solving-loop) &nbsp;|&nbsp; [Architecture](#repository-architecture) &nbsp;|&nbsp; [Solution Standard](#solution-standard)

</div>

---

## Repository Intent

This repository preserves more than accepted code. Each solution is treated as a compact record of:

| Pattern | Reasoning | Implementation |
| :---: | :---: | :---: |
| The idea that unlocks the problem | The invariant that makes it correct | The trade-offs that shape the final code |

It is simultaneously a **learning archive**, a **pattern library**, an **implementation reference**, and a quiet record of how my algorithmic thinking evolves.

> An accepted submission is a checkpoint. The durable artifact is the idea that can be recognized and rebuilt later.

---

## Explore the Archive

The archive is organized by the pattern responsible for a problem's key breakthrough.

| Foundations | Data Structures | Search & Optimization |
| :--- | :--- | :--- |
| [Arrays & Hashing](./solutions/arrays-hashing/) | [Linked Lists](./solutions/linked-lists/) | [Backtracking](./solutions/backtracking/) |
| [Two Pointers](./solutions/two-pointers/) | [Trees & BST](./solutions/trees-bst/) | [Dynamic Programming](./solutions/dynamic-programming/) |
| [Sliding Window](./solutions/sliding-window/) | [Heaps](./solutions/heaps/) | [Greedy & Intervals](./solutions/greedy-intervals/) |
| [Stack & Queue](./solutions/stack-queue/) | [Graphs](./solutions/graphs/) | [Bit Manipulation & Math](./solutions/bit-math/) |
| [Binary Search](./solutions/binary-search/) |  |  |

Every topic opens with a short recognition guide: when the pattern applies, what signals reveal it, and which tools usually express it best.

---

## The Problem-Solving Loop

```mermaid
flowchart LR
    A["Read constraints"] --> B["Recognize the pattern"]
    B --> C["Define the invariant"]
    C --> D["Implement clearly"]
    D --> E["Review trade-offs"]
    E -. "refine" .-> B

    style A fill:#082f49,stroke:#00C9FF,color:#ffffff
    style B fill:#083344,stroke:#22d3ee,color:#ffffff
    style C fill:#064e3b,stroke:#5eead4,color:#ffffff
    style D fill:#14532d,stroke:#86efac,color:#ffffff
    style E fill:#365314,stroke:#92FE9D,color:#ffffff
```

| Stage | Question worth answering |
| :--- | :--- |
| **Constraints** | What do the input limits make possible or impossible? |
| **Pattern** | Which familiar structure does the problem reduce to? |
| **Invariant** | What must remain true while the algorithm runs? |
| **Implementation** | Which data structure expresses the idea most clearly? |
| **Review** | Can complexity or clarity improve without hiding the insight? |

---

## Repository Architecture

```text
LeetCode-Solutions/
├── solutions/
│   ├── arrays-hashing/
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

### Why topic-first?

Difficulty tells you how demanding a problem may be. **Pattern tells you what the problem can teach.**

- Related ideas remain close enough to compare.
- Revision can target a weak technique directly.
- Each solution has one canonical location.
- Difficulty and secondary patterns remain visible inside the file metadata.

When a problem fits several topics, it lives under the pattern responsible for the main insight. Supporting techniques are recorded alongside it.

---

## Solution Standard

Every solution should remain useful after the original problem is no longer fresh.

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
 * Store visited values so each required complement can be found immediately.
 */
```

| Principle | What it means here |
| :--- | :--- |
| **One canonical solution** | Keep the clearest strong approach; document alternatives only when they teach something different |
| **Reasoning over narration** | Comments explain decisions and invariants, not obvious syntax |
| **Explicit complexity** | Time and space costs are part of the solution, not an afterthought |
| **Readable modern C++** | Prefer clear standard-library tools and meaningful names over clever compression |

---

## Three Ways to Use This Repository

| Learn | Reconstruct | Compare |
| :--- | :--- | :--- |
| Choose a pattern and study its recognition signals | Rebuild a solved approach from only its insight and invariant | Open neighboring problems and identify what changes while the pattern stays the same |

The repository is most valuable when used as a map back to an idea, not as a shortcut around the problem.

---

## Toolkit

<p align="center">
  <img src="https://skillicons.dev/icons?i=cpp,git,github,vscode" alt="C++, Git, GitHub, and VS Code">
</p>

Solutions are written primarily in modern **C++**, with an emphasis on standard-library fluency, explicit complexity, and interview-ready reasoning.

---

## Notes

- Problem statements and examples belong to [LeetCode](https://leetcode.com/).
- Solutions are personal implementations created for learning and reference.
- Complexity notes describe the submitted approach unless stated otherwise.

<div align="center">

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=18&pause=1200&color=16C7C1&center=true&vCenter=true&width=780&lines=Constraints+reveal+the+search+space.;Invariants+make+implementations+trustworthy.;Good+solutions+survive+being+revisited." alt="Closing principles">

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:00C9FF,100:92FE9D&height=130&section=footer&animation=fadeIn" alt="Footer wave">

</div>
