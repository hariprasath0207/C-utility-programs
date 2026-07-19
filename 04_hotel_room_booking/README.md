```markdown
# Hotel Room Booking System

An interactive command-line application simulating room reservation management for a 20-room hotel. The system maps room allocations using integer tracking configurations and enforces transactional loop handling for continuous multi-room processing.

## 🚀 Key Features & Highlights

* **Array-Based Tracking:** Utilizes a fixed integer array `R[20]` acting as a tracking index, mapping vacancy status where `0` represents a vacant room and `1` represents a fully booked room.
* **Continuous Sub-Menus:** Implements dynamic inner loops (`do-while`) that allow users to repeatedly book or cancel multiple rooms sequentially without breaking out back to the main menu.
* **Proactive Boundary Checks:** Enforces total capacity thresholds (`booked == 20` and `booked == 0`) to avoid processing redundant operations when the hotel is entirely full or empty.

---

## ⚠️ Stream Cleaning Mechanics (`fflush(stdin)`)

A critical element of this application's input processing is the use of **`fflush(stdin)`** before taking character inputs (`scanf("%c", &r)`).

### Why it is critical in this program:
When a user inputs a room number using `scanf("%d", &b)`, they type the number and press the `Enter` key. While the integer value is assigned successfully, the trailing newline character (`\n`) remains left behind inside the standard input buffer stream. 

Without calling `fflush(stdin);`, the subsequent character `scanf` statement will instantly consume that leftover newline symbol instead of pausing for the user's actual input. This would prematurely break the loop, treating it as a `n` choice. The clearing line ensures that the input stream is fully purged and reset, allowing for reliable interactive choices.

---

## 💻 Compilation and Execution
```bash
gcc room_booking.c -o room_booking
./room_booking
