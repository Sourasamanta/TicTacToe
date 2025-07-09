# TicTacToe
This is my first project using **C**
This is a Tic Tac Toe Game which can be played between *2 Players* or between a *Player and CPU*.

__Gameplay Video__

![enter image description here](https://github.com/Sourasamanta/ScreenShots/blob/main/CPU%20VS%20HUMAN.gif)



---

# 🎮 Console Tic-Tac-Toe in C (2-Player & CPU Modes)

This is a console-based implementation of **Tic-Tac-Toe** in C, supporting both:

* **2-Player Mode**, and
* **Player vs CPU Mode**, where the AI makes strategic or random moves.

The game runs in the terminal and uses ASCII art for the grid. It supports basic user input, turn tracking, win checking, and replay functionality.

---

## 🧩 Features

* ✅ 3x3 Tic-Tac-Toe grid
* 🎮 2 modes:

  * Player vs Player
  * Player vs CPU (Player can choose to go first or second)
* 🧠 CPU with basic smart move prediction
* 🧼 Automatic screen clearing between turns
* 🔁 Replay option at the end of each game
* 📢 Win, draw, and turn messages shown after each move
* 🖥️ Text-based grid representation

---

## 🕹️ Controls

* When prompted, enter a number (1-9) representing a cell:

```
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
```

* Player 1 uses **`X`**
* Player 2 (or CPU) uses **`O`**

---

## 🔧 How It Works

### Game Modes

1. **2-Player Mode**

   * Both players take turns entering their moves.
   * Input is validated; invalid entries are rejected.

2. **Player vs CPU Mode**

   * You can choose if you want to play **first or second**.
   * CPU tries to block your winning moves or win when it can.
   * Otherwise, it chooses a random empty spot.

---

## 🛠️ Code Structure

| Function            | Description                                  |
| ------------------- | -------------------------------------------- |
| `Print()`           | Displays the current board                   |
| `Search()`          | Marks the board if the chosen cell is valid  |
| `Check()`           | Checks for win conditions                    |
| `randomGenerator()` | Attempts to find smart AI move or random one |
| `AI()`              | Makes a valid move for the computer          |
| `TicTacToe()`       | 2-Player game logic                          |
| `TicTacToeAI()`     | CPU starts first                             |
| `TicTacToeAIXO()`   | Human starts first                           |
| `initialize()`      | Resets the board for a new game              |

---

## 🚀 How to Run

### 🔗 Requirements

* A **Windows** terminal or DOS environment (uses `conio.h`)
* A C compiler like `gcc`, `Turbo C`, or **Code::Blocks**

### 🔧 Compile & Run

```bash
gcc tic_tac_toe.c -o tic_tac_toe
./tic_tac_toe
```

Or run directly inside Code::Blocks/Dev-C++.

> ⚠️ Note: This program uses `conio.h`, which is not part of the standard C library and may not be available on some compilers (like GCC on Linux/macOS). For cross-platform compatibility, replace `getch()` with `getchar()` and remove `system("cls")`.

---

## 🏁 Ending the Game

* After each match, you'll be prompted:

  ```
  Enter 'Y' to continue:
  ```

  Press `Y` or `y` to play again.

---

## 📄 License

This project is free and open-source under the **MIT License**. Feel free to use, modify, and share!

---


