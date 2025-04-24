# 🔆 Random Circuit Art with Circles - Console Graphics Project

This is a simple but visually stunning **Computer Graphics project in C++**, using the `graphics.h` library to simulate a console-based random circuit-like pattern. Each "circuit" is generated using concentric circles at random positions and with random colors, creating a glowing, electric-art feel on the screen.

> 🌈 It's like a light show made with code — mesmerizing, beautiful, and a perfect intro project for those diving into computer graphics!

---

## ✨ Features

- 🎯 Randomly positioned **concentric circles**
- 🎨 Uses classic `graphics.h` (Turbo C++ style)
- 🌈 Dynamic **color-changing visuals**
- 🖥️ Console-based artistic output
- 🎲 A touch of randomness every time you run it

---

## 🎬 Preview / Inspiration

Inspired by the tutorial series by **Programming Hero**:

📺 [Computer Graphics Series (YouTube Playlist)](https://www.youtube.com/watch?v=TEMhWt9WwTA&list=PLAsPrIlN9FQdotpyRWoxo7dBUyurlBUH7)

---

## 🛠️ How to Run (CodeBlocks Setup Guide)

To run this project using **CodeBlocks** on **Windows**:

### ✅ Step 1: Install CodeBlocks with MinGW  
Download: [https://www.codeblocks.org/downloads/](https://www.codeblocks.org/downloads/)

---

### ✅ Step 2: Install WinBGIm Graphics Library  

- Download `graphics.h`, `winbgim.h`, and `libbgi.a` from:  
  🔗 [https://winbgim.codecutter.org/](https://winbgim.codecutter.org/)

- Copy files:
  - `graphics.h`, `winbgim.h` →  
    `C:\Program Files\CodeBlocks\MinGW\include`
  - `libbgi.a` →  
    `C:\Program Files\CodeBlocks\MinGW\lib`

---

### ✅ Step 3: Link Graphics Library in CodeBlocks

Go to:  
`Settings > Compiler > Linker Settings`  
And add the following to **"Other linker options"**:

-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

---

### ✅ Step 4: Run the Program

1. Create a new **C++ project**  
2. Paste the code (below)  
3. Build & Run 🎉

---

## 📁 Full Code

<details>
<summary>Click to view</summary>

```cpp
#include<time.h>
#include<graphics.h>
#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include<cmath>
#include<ctime>

void cir(int r, int a, int b, int clr) {
    int x = 0, y = r;
    while (x <= y) {
        putpixel(x + a, y + b, clr);
        putpixel(x + a, -y + b, clr);
        putpixel(-x + a, y + b, clr);
        putpixel(-x + a, -y + b, clr);
        putpixel(y + a, x + b, clr);
        putpixel(y + a, -x + b, clr);
        putpixel(-y + a, x + b, clr);
        putpixel(-y + a, -x + b, clr);
        y = sqrt(pow(r, 2) - pow(x, 2));
        x++;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int a = getmaxx();
    int b = getmaxy();
    setcolor(14);

    for (int i = 1; i < 100; i++) {
        float x = rand() % a;
        float y = rand() % b;
        for (int j = 1; j < 100; j++) {
            int clr = rand() % j;
            cir(j, x, y, clr);
        }
    }

    getch();
    closegraph();
    return 0;
}
