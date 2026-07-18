# Employee Payroll System

An interactive command-line payroll utility designed to process salaries and compute tax/allowance components like House Rent Allowance (HRA) and Dearness Allowance (DA). It enforces procedural execution tracking by ensuring operations depend heavily on a registered base salary.

## 🚀 Key Features
* **Allowance Formulations:** Automatically calculates standard industry allowance margins (20% HRA and 10% DA).
* **Sequential Integrity Checks:** Prevents calculations or receipt printing if a base salary has not been specified first.
* **Core Functions:**
  * **Enter Salary:** Establishes the initial base compensation figure.
  * **Calculate HRA:** Evaluates the rental allowance portion using pointer adjustments.
  * **Calculate DA:** Evaluates the cost-of-living index breakdown.
  * **Display Net Statement:** Generates a structured breakdown summary showing all allowances alongside the ultimate take-home Net Salary.
