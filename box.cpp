#include <iostream>
#include <iomanip>
#include "box.h"

std::string box(int width, int height) {
    std::string shape;
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            shape += "*";
        }
        shape += "\n";
    }
    return shape;
}

std::string checkerboard(int width, int height) {
    std::string shape;
    int a = 1;
    for(int i = 0; i < height; i++) {
        if(i % 2 == 1) {
        shape += " "; 
        a = 0;
        }
        for(int j = 0; j < width/2 + a; j++) {
            shape += "* ";
        }
        shape += "\n";
        a = 1;
    }
    return shape;
}

std::string cross(int size) {
    std::string shape;
    int tempInt = 2;
    int tempInt2 = size;
    int tempInt3 = 2;
    int tempInt4 = size-1;
    std::string text = "*";
    if(size % 2 == 0) {
        for(int i = 0; i < size/2; i++) {
            for(int w = 0; w < i; w++) {
                shape += " ";
            }
            shape += text;
            for(int q = 0; q < size-tempInt; q++) {
                shape += " ";
            }
            shape += text;
            tempInt += 2;
            shape += "\n";
        }
        for(int i = size/2; i > 0; i--) {
            for(int w = 0; w < i-1; w++) {
                shape += " ";
            }
            std::cout << "\n";
            shape += text;
            for(int q = 0; q < size-tempInt2; q++) {
                shape += " ";
            }
            shape += text;
            tempInt2 -= 2;
            shape += "\n";
    }
    } else {
        for(int i = 0; i < size/2; i++) {
            for(int w = 0; w < i; w++) {
                shape += " ";
            }
            shape += text;
            for(int q = 0; q < size - tempInt3; q++) {
                shape += " ";
            }
            shape += text;
            tempInt3 += 2;
            shape += "\n";
        }
        for(int i = 0; i < size/2; i++) {
            shape += " ";
        }
        shape += text;
        shape += "\n";
        for(int i = size/2; i > 0; i--) {
            for(int w = 0; w < i-1; w++) {
                shape += " ";
            }
            shape += text;
            for(int q = 0; q < size - tempInt4; q++) {
                shape += " ";
            }
            shape += text;
            tempInt4 -= 2;
            shape += "\n";
        }

    }
    return shape;
}

std::string lower(int length) {
    std::string shape;
    for(int i = 1; i <= length; i++) {
        for(int j = 0; j < i; j++) {
            shape += "*";
        }
        shape += "\n";
    }
    return shape;
}

std::string upper(int length) {
    std::string shape;
    int holder = 2;
    shape += " ";
    for(int i = length; i >= 0; i--) {
        for(int j = 0; j < i; j++) {
            shape += "*";
        }
        shape += "\n";
        for(int q = 0; q < holder; q++) {
            shape += " ";
        }
        holder++;
    }
    return shape;
}

std::string trapezoid(int width, int height) {
    std::string shape;
    int holder = 1;
    int subtrc = 0;
    if(width - 2 * height < 0) {
        return "impossible shape!";
    }
    for(int p = 0; p < height; p++) {
        for(int i = 0; i < width - subtrc; i++) {
            shape += "*";
        }
        shape += "\n";
        for(int j = 0; j < holder; j++) {
            shape += " ";
        }
        holder++;
        subtrc += 2;
    }
    return shape;
}

std::string checkerboard3x3(int width, int height) {
    std::string shape;
    int holder = 1;
    int holder2 = 0;
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    int tempVar = 0;
    int tempVar2 = 0;
    
    std::string text = "*";
    for(int i = 0; i < height; i++) {
        if(counter2 % 3 == 0 && !(counter2 == 0)) {
            holder = -holder;
        }
        if(holder == -1) {
            shape += "   ";
            tempVar = 3;
            counter3 += 1;
        }
        for(int q = 0 + tempVar; q < width; q++) {
            shape += text;
            counter1 += 1;
            if(counter1 == 3) {
                shape += "   ";
                q += 3;
                counter1 = 0;
            }
            tempVar2 = q;
        }
        if(tempVar2 += 3 > width) {
            counter1 = 0;
        }
        if(counter3 == 3) {
            counter3 = 0;
            tempVar = 0;
        }
        shape += "\n";
        counter2 += 1;
    }
    return shape;
}