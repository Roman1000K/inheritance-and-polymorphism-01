#include <iostream>
#include <Windows.h> 

class Figure{   
private:    
   int sides_count;

protected:
    Figure(int sides) : sides_count(sides) {}

public:
    Figure() : Figure(0) {}
    
    int get_sides_count() {
      return sides_count;
    }
 };
class Triangle:public Figure {
public:
      Triangle() : Figure(3) {}

};
class Quadrangle:public Figure{
public:
      Quadrangle() : Figure(4) {}
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон:\n";
    std::cout << "Фигура: " << figure.get_sides_count() << "\n";
    std::cout << "Треугольник: " << triangle.get_sides_count() << "\n";
    std::cout << "Четырёхугольник: " << quadrangle.get_sides_count() << "\n";
   
      return 0;
}

