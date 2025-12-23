# Page Replacement Algorithm Simulator

This project is a console-based simulation of page replacement algorithms used in Operating Systems.  
It demonstrates the working of **FIFO**, **LRU**, and **Optimal** page replacement algorithms using the C programming language.

---

## 📌 Project Description

In an operating system, when a page fault occurs and memory frames are full, the OS must decide which page to replace.  
This project simulates that decision-making process by implementing and comparing three classical page replacement algorithms.

The program accepts user input for:
- Number of page references
- Reference string
- Number of memory frames

It then executes each algorithm step-by-step, displaying:
- Page HIT or FAULT
- Current frame contents
- Total page faults for each algorithm

---

## ⚙️ Algorithms Implemented

1. **FIFO (First-In First-Out)**
   - Replaces the page that entered memory first.
   - Simple but may cause more page faults.

2. **LRU (Least Recently Used)**
   - Replaces the page that has not been used for the longest time.
   - Uses past usage information.

3. **Optimal Page Replacement**
   - Replaces the page that will not be used for the longest time in the future.
   - Produces minimum possible page faults (theoretical best).

---

## 🛠️ Technologies Used

- **Programming Language:** C
- **Compiler:** GCC
- **Libraries Used:**
  - `stdio.h`
  - `limits.h`
- **Tools:**
  - Command Prompt / Terminal
  - Git & GitHub
  - MS Word (Documentation)
  - draw.io (Flowchart)

---

## ▶️ How to Compile and Run

### Step 1: Compile
```bash
gcc page_replacement.c -o pager
Step 2: Run
./pager

🧪 Sample Input
Enter number of references: 7
Enter reference string: 1 2 3 2 4 1 5
Enter number of frames: 3

📊 Sample Output
--- FIFO Algorithm ---
Request: 1 -> FAULT | [1] [ ] [ ]
Request: 2 -> FAULT | [1] [2] [ ]
...

======= RESULT SUMMARY =======
FIFO Faults   : 5
LRU Faults    : 4
Optimal Faults: 3


📂 Project Structure
Page-Replacement-Algorithm-Simulator/
│── page_replacement.c
│── README.md
│── flowchart.png
│── report.docx

🧾 Commit History (Summary)

Initial commit – project setup

Added helper functions for page search and frame display

Implemented FIFO page replacement algorithm

Implemented LRU page replacement algorithm

Implemented Optimal page replacement algorithm

Added result summary and improved output formatting

Added flowchart diagram and project documentation

🎯 Conclusion

This project provides a clear understanding of how page replacement algorithms work in an operating system.
By comparing FIFO, LRU, and Optimal algorithms, the project highlights their advantages and limitations in terms of page fault handling.

🚀 Future Enhancements

Add LFU (Least Frequently Used) algorithm

Add graphical visualization

Compare performance for different frame sizes

Simulate real-time paging behavior

📚 References

Silberschatz, Galvin, Gagne – Operating System Concepts

Tanenbaum – Modern Operating Systems

William Stallings – Operating Systems: Internals and Design Principles


---

## ✅ Next Step for You
Run:
```bash
git add README.md
git commit -m "Added README documentation"
git push