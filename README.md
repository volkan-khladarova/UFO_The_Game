# 🛸 UFO: The Game

A simple and fun command-line game written in C++.

Your mission is to save your friend from alien abduction by guessing the hidden codeword, one letter at a time. But be careful — with each wrong guess, the UFO gets closer to taking your friend!

## 🎮 How to Play

- The game will display a secret codeword as underscores.
- You must guess the codeword letter by letter.
- Correct guesses reveal letters in the codeword.
- Incorrect guesses bring the UFO closer.
- If you guess the whole word before 7 misses, you win.
- Otherwise... your friend is abducted! 👽

## 🧱 Features

- Fun ASCII art UFO animations
- Command-line interface
- Encouraging messages for correct/incorrect guesses
- Simple game loop using standard C++ libraries

## 🛠️ Requirements

- A C++17 compatible compiler (e.g., g++, clang++)
- CMake (optional, for easy building)
- Terminal/console

## 🧪 How to Build

If you're using **CMake** (recommended):

```bash
mkdir build
cd build
cmake ..
make
./UFO_Game
