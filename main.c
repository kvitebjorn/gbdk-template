#include <gb/gb.h>
#include <stdio.h>

void main() {
    printf("Press any button...\n");

    uint8_t mButtons;

    while(1) {
        mButtons = joypad();

        if (mButtons & J_A)
            printf("A ");
        if (mButtons & J_B)
            printf("B ");
        if (mButtons & J_UP)
            printf("UP ");
        if (mButtons & J_DOWN)
            printf("DOWN ");
        if (mButtons & J_LEFT)
            printf("LEFT ");
        if (mButtons & J_RIGHT)
            printf("RIGHT ");
        if (mButtons & J_START)
            printf("+ ");
        if (mButtons & J_SELECT)
            printf("- ");

        printf("\n");

        while(mButtons == joypad());
    }
}