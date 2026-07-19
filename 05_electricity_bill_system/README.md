# Electricity Bill System

An interactive command-line application that calculates domestic utility expenses using a progressive tiered-tariff (slab) framework. It heavily relies on passing parameters by pointer addresses to update metrics across modularized calculation and display stages.

## 🚀 Key Features & Highlights

* **Tiered-Slab Tariff Pricing:** Implements progressive computation pricing structures depending entirely on usage volume segments:
  * **0 - 100 units:** Charged at a rate of 1.50 Rs per unit.
  * **101 - 200 units:** Base fee of 100 units at 1.50 Rs + remaining units at 2.50 Rs per unit.
  * **Above 200 units:** Combined base fees of initial slabs + excess units at 4.00 Rs per unit.
* **Integrity Constraints:** The billing architecture tracks execution prerequisites natively, throwing warnings if calculations are triggered before units are recorded.

---

## 🔄 State Clearing Control

A distinct logic pattern within this program is the execution step built directly into the display function (`dis_bill`).

Once the system outputs the computed statement to the screen, it automatically clears out the reference variables by resetting both the unit balance pointer `*u` and the bill pointer `*b` back to `0`. 

```c
printf("Total bill for %u units : %.2lf\n", *u, *b);
*u = 0;
*b = 0;

gcc electricity_bill.c -o electricity_bill
./electricity_bill
