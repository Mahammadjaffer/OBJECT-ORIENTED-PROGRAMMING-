#include <dos.h>
#include <iostream>

void interrupt mouseHandler();

void initMouse() {
    union REGS regs;
    regs.x.ax = 0;
    int86(0x33, &regs, &regs);
    if (regs.x.ax == 0) {
        std::cout << "Mouse not found.\n";
    } else {
        std::cout << "Mouse initialized.\n";
    }
}

void showMouse() {
    union REGS regs;
    regs.x.ax = 1;
    int86(0x33, &regs, &regs);
}

void hideMouse() {
    union REGS regs;
    regs.x.ax = 2;
    int86(0x33, &regs, &regs);
}

void getMousePosition(int &x, int &y, int &button) {
    union REGS regs;
    regs.x.ax = 3;
    int86(0x33, &regs, &regs);
    button = regs.x.bx;
    x = regs.x.cx;
    y = regs.x.dx;
}

void main() {
    int x, y, button;
    initMouse();
    showMouse();

    while (!kbhit()) { // Loop until a key is pressed
        getMousePosition(x, y, button);
        std::cout << "Mouse Position: (" << x << ", " << y << ") Button: " << button << std::endl;
        delay(100); // Delay for readability
    }

    hideMouse();
    std::cout << "Program terminated.\n";
}

