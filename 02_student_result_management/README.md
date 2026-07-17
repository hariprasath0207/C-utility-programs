# Student Result Management System

An interactive command-line utility designed to manage, calculate, and display academic results for a student across 5 subjects. It utilizes pointers for efficient data sharing between functions and enforces strict input validation.

## 🚀 Key Features
* **Input Validation:** Restricts users from entering invalid marks (enforces a maximum cap of 100 per subject).
* **Pointer-Driven Logic:** Modifies global metrics (total, average) directly via memory addresses.
* **Core Functions:**
  * **Enter Marks:** Input scores for 5 separate subjects sequentially.
  * **Calculate Total:** Aggregates scores dynamically.
  * **Calculate Average:** Computes the floating-point average score.
  * **Evaluate Result:** Classifies performance into *FAIL* (under 40), *JUST PASS* (exactly 40), or *PASS* (above 40).
