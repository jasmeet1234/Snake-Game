# 🐍 Snake Game in C++ (Console-Based)

A feature-rich, console-based **Snake Game** built using **C++**. This project offers an interactive and engaging gameplay experience directly in the terminal, complete with multiple game modes, high score tracking, and even sound effects to enhance the retro gaming feel.

---

## 🎮 Game Features

- **Two Difficulty Modes**
  - **Easy Mode**: Safe wall collision. Perfect for casual play and warm-ups.
  - **Medium Mode**: Instant game over on wall contact—test your reflexes!
  
- **Hall of Fame**: Stores and displays high scores by player name across sessions.

- **Sound Effects**:
  - Background music (`snakes1.wav`)
  - Game over sound (`Game_over.wav`)

- **Save System**: Automatically stores scores in `scores.txt` for high score tracking.

---

## 🧠 How It Works

- Classic snake mechanics: control the snake using keyboard inputs.
- Eat fruits to grow your tail and increase your score.
- Avoid collisions with the wall (in Medium mode) and with your own tail.

---

## ⌨️ Controls

| Key | Action            |
|-----|-------------------|
| `W` | Move Up           |
| `S` | Move Down         |
| `A` | Move Left         |
| `D` | Move Right        |
| `X` | Exit Game         |

---

## 🛠 How to Run

1. **Clone or Download** this repository:
   ```bash
   git clone https://github.com/jasmeet1234/snake-game-cpp.git
   ```

2. **Compile the game** using any C++ compiler (supports Windows headers like `windows.h`, `conio.h`):
   ```bash
   g++ snakes.cpp -o snakes.exe
   ```

3. **Run the executable**:
   ```bash
   ./snakes.exe
   ```

> ⚠️ This game uses `PlaySound` and Windows-specific libraries. For cross-platform compatibility, modifications will be required.

---

## 📁 Repository Structure

| File            | Description                                |
|-----------------|--------------------------------------------|
| `snakes.cpp`    | Main source code for the game              |
| `snakes.exe`    | Compiled Windows executable                |
| `scores.txt`    | Stores high scores                         |
| `Game_over.wav` | Sound played on game over                 |
| `snakes1.wav`   | Background music file                      |
| `Readme.md`     | You’re reading it 🙂                        |

---

## 🎮 Demo

![Demo of Flip Game](demonstration/snake.gif)

---

## 🙌 Contributions & Feedback

Feel free to **submit issues** or **open pull requests** if you'd like to contribute or suggest improvements.  
Let’s keep the snake slithering forward! 🐍

---
