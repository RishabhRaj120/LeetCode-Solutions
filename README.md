<div align="center">

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:00C9FF,100:92FE9D&height=230&section=header&text=LeetCode%20Solutions&fontSize=52&fontColor=ffffff&animation=fadeIn&fontAlignY=36&desc=Pattern-first%20algorithm%20archive&descAlignY=57&descSize=16" alt="LeetCode Solutions">

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=20&pause=1100&color=16C7C1&center=true&vCenter=true&width=820&lines=One+solution.+Multiple+ways+to+discover+it.;Reading+constraints+before+writing+code;Clean+C%2B%2B+%7C+Clear+reasoning+%7C+Explicit+trade-offs" alt="Repository philosophy">

<br>

![C++](https://img.shields.io/badge/C%2B%2B-17%20%7C%2020-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![LeetCode](https://img.shields.io/badge/LeetCode-Solutions-FFA116?style=for-the-badge&logo=leetcode&logoColor=black)
![Storage](https://img.shields.io/badge/Storage-ID_Ranges-00B8A9?style=for-the-badge)
![Discovery](https://img.shields.io/badge/Discovery-Multi_Index-7C3AED?style=for-the-badge)

<br><br>

A curated collection of LeetCode solutions built for **understanding**, **revision**, and **reuse**.

[Browse by Topic](./indexes/topics.md) &nbsp;|&nbsp; [Browse by Difficulty](./indexes/difficulty.md) &nbsp;|&nbsp; [Architecture](#repository-architecture) &nbsp;|&nbsp; [Solution Standard](#solution-standard)

</div>

---

## Repository Intent

This repository preserves more than accepted code. Each solution records:

| Pattern | Reasoning | Implementation |
| :---: | :---: | :---: |
| The ideas involved | The invariant that makes them work | The trade-offs shaping the final code |

Many LeetCode problems belong to several topics at once. A problem might combine **graphs**, **heaps**, and **greedy reasoning**, while still having only one implementation.

That leads to the central design rule:

> Store every solution once. Reference it from every topic and difficulty where it belongs.

---

## Browse the Archive

The physical files are organized by problem ID. The indexes provide different views of the same archive without duplicating solutions.

| View | Best used for | Open |
| :--- | :--- | :---: |
| **Topics** | Studying patterns and related techniques | [Explore topics](./indexes/topics.md) |
| **Difficulty** | Choosing an appropriate challenge level | [Explore difficulties](./indexes/difficulty.md) |
| **Problem ID** | Finding a known problem quickly | [Explore solutions](./solutions/) |

For example, `0003-longest-substring-without-repeating-characters.cpp` exists once under `solutions/0001-0500/`, but can appear under **Hash Table**, **String**, **Sliding Window**, and **Medium** in the indexes.

---

## Repository Architecture

```text
LeetCode-Solutions/
+-- solutions/
|   +-- 0001-0500/
|   |   +-- 0003-longest-substring-without-repeating-characters.cpp
|   +-- 0501-1000/
|   +-- 1001-1500/
|   +-- 1501-2000/
|   +-- ...
+-- indexes/
|   +-- topics.md
|   +-- difficulty.md
+-- templates/
|   +-- solution.cpp
+-- README.md
```

### Why this structure?

| Decision | Reason |
| :--- | :--- |
| **Store by ID range** | Every problem has one obvious, permanent location |
| **Index by multiple topics** | A solution can belong to every relevant technique |
| **Index by difficulty** | Difficulty remains browsable without controlling storage |
| **Never duplicate solution files** | Improvements happen in one place and links remain consistent |

Difficulty subfolders are intentionally avoided. A structure such as `Medium/Graphs/` still fails when a problem has multiple topics and encourages duplicate files.

---

## Classification Model

```mermaid
flowchart LR
    S["One solution file"] --> T1["Topic: Sliding Window"]
    S --> T2["Topic: Hash Table"]
    S --> T3["Topic: String"]
    S --> D["Difficulty: Medium"]

    style S fill:#082f49,stroke:#00C9FF,color:#ffffff
    style T1 fill:#083344,stroke:#22d3ee,color:#ffffff
    style T2 fill:#064e3b,stroke:#5eead4,color:#ffffff
    style T3 fill:#14532d,stroke:#86efac,color:#ffffff
    style D fill:#365314,stroke:#92FE9D,color:#ffffff
```

The **primary insight** explains the main breakthrough. The **topics** field captures every relevant classification.

---

## Solution Standard

Every solution should remain useful after the original problem is no longer fresh.

```cpp
/*
 * Problem: 0003. Longest Substring Without Repeating Characters
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Difficulty: Medium
 * Primary insight: Sliding Window
 * Topics: Hash Table, String, Sliding Window
 * Time: O(n)
 * Space: O(k)
 *
 * Insight:
 * Maintain a window containing no repeated characters.
 */
```

| Principle | What it means here |
| :--- | :--- |
| **One canonical solution** | Keep exactly one implementation of each problem |
| **Multiple classifications** | Link that implementation from every relevant index section |
| **Reasoning over narration** | Comments explain decisions and invariants, not obvious syntax |
| **Explicit complexity** | Time and space costs remain visible during revision |

---

## The Problem-Solving Loop

```mermaid
flowchart LR
    A["Read constraints"] --> B["Recognize patterns"]
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

The goal is not to force each problem into one category. It is to understand how several techniques cooperate inside one solution.

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
- Indexes are navigation layers, not progress trackers.

---

<div align="center">

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=20&pause=800&color=92FE9D&center=true&vCenter=true&width=650&lines=Accepted+is+not+luck.;Every+wrong+answer+teaches+something.;Consistency+beats+random+motivation.;One+problem+closer+to+mastery." alt="Practice mindset">

</div>

---

<div align="center">

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=24&pause=1000&color=00C9FF&center=true&vCenter=true&width=700&lines=Practice.+Fail.+Debug.+Learn.+Repeat.;Building+logic+one+submission+at+a+time.;See+you+at+the+next+Accepted." alt="Closing principles">

<br><br>

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:00C9FF,50:92FE9D,100:FFFFFF&height=120&section=footer&animation=fadeIn" alt="Footer wave">

</div>
