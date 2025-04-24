🔆 Random Circuit Art with Circles - Console Graphics Project
This is a simple but visually stunning Computer Graphics project in C++, using the Graphics.h library to simulate a console-based random circuit-like pattern. Each "circuit" is generated using concentric circles at random positions and with random colors, creating a glowing, electric-art feel on the screen.

🌈 It's like a light show made with code — mesmerizing, beautiful, and a perfect intro project for those diving into computer graphics!

✨ Features
Draws randomly positioned concentric circles

Uses the classic Graphics.h library (Turbo C++ style)

Dynamic color-changing visuals

Console-based artistic output

A touch of randomness for uniqueness each time

🎬 Preview / Inspiration
The project is inspired by the tutorial series from the YouTube playlist below:

📺 Computer Graphics Series by Programming Hero (CodeBlocks)

🛠 How to Run (CodeBlocks Setup Guide)
To run this graphics program in CodeBlocks using Windows, follow these steps:

Install CodeBlocks with MinGW:
Download from https://www.codeblocks.org/downloads/

Install WinBGIm Graphics Library:

Download graphics.h, winbgim.h, and libbgi.a from a repository like https://winbgim.codecutter.org/

Copy graphics.h and winbgim.h into:
C:\Program Files\CodeBlocks\MinGW\include

Copy libbgi.a into:
C:\Program Files\CodeBlocks\MinGW\lib

Link Graphics Library in CodeBlocks:

Go to Settings > Compiler > Linker Settings

Add these to "Other linker options":

diff
Copy
Edit
-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
Create a new C++ project and paste the code.

Build and Run — enjoy the circuit art magic!

📁 Code Sample
<details> <summary>Click to view full code</summary>

#include<time.h>
#include<graphics.h>
#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include<cmath>
#include<ctime>

void cir(int r,int a, int b,int clr){
    int x,y;
    x=0;
    y=r;
    int aa=a/2;
    int bb=b/2;
    while(x<=y){
        putpixel(x+a,y+b,clr);
        putpixel(x+a,-y+b,clr);
        putpixel(-x+a,y+b,clr);
        putpixel(-x+a,-y+b,clr);
        putpixel(y+a,x+b,clr);
        putpixel(y+a,-x+b,clr);
        putpixel(-y+a,x+b,clr);
        putpixel(-y+a,-x+b,clr);
        y=sqrt(pow(r,2)-pow(x,2));
        x++;
    }
}

using namespace std;
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm,"");
    int a = getmaxx();
    int b = getmaxy();
    setcolor(14);

    for (int i= 1; i< 100; i++){
        float x=rand()%a;
        float y=rand()%b;
        for(int j = 1; j<100;j++){
            int clr = rand()%j;
            cir(j,x,y, clr);
        }
    }

    getch();
    closegraph();
    return 0;
}
</details>
