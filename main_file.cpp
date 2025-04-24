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
