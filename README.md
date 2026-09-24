# Roll4it 🎲🃏

A modular terminal application written in C that generates custom ASCII playing cards, rolls a set of 6-sided dice, and renders a custom ASCII logo banner using seed-based pseudorandom generation.

## 🌟 Key Features
* **Custom ASCII Rendering:** Features dynamic ASCII art representations for both the header logo and multi-valued playing cards.
* **Modular Code Structure:** Uses clean function prototypes (`logo`, `play`, `randomCard`, `randomDice`, `rollDie`) for readability and maintainability.
* **Dynamic Randomization:** Seeds the C standard library pseudorandom number generator (`srand(time(NULL))`) to produce unique die rolls on every execution.
* **Buffer-Safe Input:** Utilizes standard `scanf` string bounds and buffer flushes (`while(getchar() != '\n')`) to maintain terminal control flow.

## 🛠️ Built With
* **Language:** C (Standard C Library)
* **Header Files:** `<stdio.h>`, `<stdlib.h>`, `<time.h>`
* **Compiler / IDE:** GCC / VS Code

## 🚀 How to Build and Run

### Prerequisites
Make sure you have `gcc` installed on your machine.

### Compilation
Open your terminal/command line in the project folder and run:

```bash
# Compile roll4it.c using GCC
gcc roll4it.c -o roll4it

# Execute on Windows
roll4it.exe

# Execute on Linux / macOS
./roll4it
