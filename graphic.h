#include"raylib.h"
#include<math.h>
#include"extrafunctions.h"

void drawLine(int x1, int y1, int x2, int y2) {
    int deltaX = abs(x2 - x1);
    int deltaY = abs(y2 - y1);
    int stepX, stepY;
    if (x1 < x2) {
        stepX = 1;
    }
    else {
        stepX = -1;
    }
    if (y1 < y2) {
        stepY = 1;
    }
    else {
        stepY = -1;
    }
    int error = deltaX - deltaY;
    while (1)
    {
        DrawPixel(x1, y1, BLACK);
        if (x1 == x2 && y1 == y2) {
            break;
        }
        int error2 = 2 * error;
        if (error2 > -deltaY) {
            error = error - deltaY;
            x1 = x1 + stepX;
        }
        if (error2 < deltaX) {
            error = error + deltaX;
            y1 = y1 + stepY;
        }
    }
}

void wireTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    drawLine(x1, y1, x2, y2);
    drawLine(x2, y2, x3, y3);
    drawLine(x3, y3, x1, y1);
    int deltaX = abs(x3 - x2);
    int deltaY = abs(y3 - y2);
    int delta = deltaY;
    if(deltaX > deltaY) {
        delta = deltaX;
    }
    for(int i = 0; i < delta; i++) {
        drawLine(linePointsX(x1, y1, x3, y3, i), linePointsY(x1, y1, x3, y3, i), linePointsX(x2, y2, x3, y3, i), linePointsY(x2, y2, x3, y3, i));
    }
}