# Pong (raylib)

A single-player Pong-style game built in C++ with raylib. Bounce the ball off your paddle to keep it alive and rack up your score.

## Features

- Real-time game loop with smooth ball physics (velocity-based movement, wall bouncing)
- Rectangle-circle collision detection between the ball and paddles
- Keyboard-controlled paddle movement (clamped to stay on-screen)
- Live score tracking (increments on every successful paddle hit)

## Controls

- `W` / `S` — move left paddle up/down
- `↑` / `↓` — move right paddle up/down

## Setup

Requires [raylib](https://www.raylib.com/). On MSYS2 UCRT64:

```bash
pacman -S mingw-w64-ucrt-x86_64-raylib
```

## Build & Run

```bash
g++ pong.cpp -o pong.exe -lraylib -lopengl32 -lgdi32 -lwinmm
./pong.exe
```
