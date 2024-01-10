#include <iostream>
#include <set>

class Circle {
public:
    int radius;

    Circle(int r) : radius(r) {}
};

class Square {
public:
    int side;

    Square(int s) : side(s) {}
};

class Shapes {
public:
    std::set<int> circles_radius;
    std::set<int> squares_side;

    Shapes() {}

    Shapes operator+(const Circle& circle) const {
        Shapes newShapes = *this;
        newShapes.circles_radius.insert(circle.radius);
        return newShapes;
    }

    Shapes operator+(const Square& square) const {
        Shapes newShapes = *this;
        newShapes.squares_side.insert(square.side);
        return newShapes;
    }

    Shapes operator+(const Shapes& other) const {
        Shapes newShapes = *this;
        newShapes.circles_radius.insert(other.circles_radius.begin(), other.circles_radius.end());
        newShapes.squares_side.insert(other.squares_side.begin(), other.squares_side.end());
        return newShapes;
    }

    void display() const {
        std::cout << "Circles: ";
        for (int radius : circles_radius) {
            std::cout << radius << " ";
        }

        std::cout << "\nSquares: ";
        for (int side : squares_side) {
            std::cout << side << " ";
        }

        std::cout << std::endl;
    }
};

// Global operator+ for combining Circle and Square directly
Shapes operator+(const Circle& circle, const Square& square) {
    Shapes newShapes;
    newShapes = newShapes + circle;
    newShapes = newShapes + square;
    return newShapes;
}

int main() {
    Circle circle1(5);
    Circle circle2(8);

    Square square1(4);
    Square square2(7);

    Shapes shapes1 = circle1 + square1;
    Shapes shapes2 = circle2 + square2;

    Shapes combinedShapes = shapes1 + shapes2;

    std::cout << "Shapes 1:" << std::endl;
    shapes1.display();

    std::cout << "\nShapes 2:" << std::endl;
    shapes2.display();

    std::cout << "\nCombined Shapes:" << std::endl;
    combinedShapes.display();

    return 0;
}
