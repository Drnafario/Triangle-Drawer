#include<math.h>

int linePointsX(int x1, int y1, int x2, int y2, int index) {
    int deltaX = abs(x2 - x1);
    int deltaY = abs(y2 - y1);
    int stepX, stepY;

    int indexCurrent = 0;

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
        if(index == indexCurrent) {
            break;
        }
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
        indexCurrent++;
    }

    return x1;
}

int linePointsY(int x1, int y1, int x2, int y2, int index) {
    int deltaX = abs(x2 - x1);
    int deltaY = abs(y2 - y1);
    int stepX, stepY;

    int indexCurrent = 0;

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
        if(index == indexCurrent) {
            break;
        }
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
        indexCurrent++;
    }

    return y1;
}