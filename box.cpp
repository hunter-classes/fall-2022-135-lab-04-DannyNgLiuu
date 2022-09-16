#include <iostream>
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