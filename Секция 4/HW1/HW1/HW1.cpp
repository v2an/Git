#include <iostream>
#include <cmath>
#include <cstdint>


// ================================================= EXRSZ 1 =================================================

class Power
{
public:
    float a = 1;
    float b = 1;

    void set(float a1, float b1)
    {
        a = a1;
        b = b1;
    }

    float calculate()
    {
        return pow(a, b);
    }

};

// ================================================= EXRSZ 2 =================================================

class RGBA
{
public:
    std::uint8_t m_red;
    std::uint8_t m_green;
    std::uint8_t m_blue;
    std::uint8_t m_alpha;
    RGBA()
    {
        m_red = 0;
        m_green = 0;
        m_blue = 0;
        m_alpha = 255;
    }

    RGBA(std::uint8_t r1, std::uint8_t g1, std::uint8_t b1, std::uint8_t a1) : m_red(r1), m_green(g1), m_blue(b1), m_alpha(a1) 
    {
    }

    void print()
    {
        std::cout << "red: " << m_red << std::endl;
        std::cout << "blue: " << m_blue << std::endl;
        std::cout << "green: " << m_green << std::endl;
        std::cout << "alpha: " << m_alpha << std::endl;
    }
};

// ================================================= EXRSZ 3 =================================================

class Stack
{
private:
    int stack[10] = { 0 };
    int size = 0;

public:
    void reset()
    {
        if (size != 0)
        {
            for (int i = 0; i < size; i++)
            {
                stack[i] = 0;
            }
            size = 0;
        }
    }
    void push(int a)
    {
        if (size < 10)
        {
            stack[size] = a;
            size++;
        }
        else
        {
            std::cout << "Err: oops, stack full!" << std::endl;
        }
    }
    void pop()
    {
        if (size > 0)
        {
            stack[size] = 0;
            size--;
        }
        else
        {
            std::cout << "Stack already empty" << std::endl;
        }
    }
    void print()
    {
        std::cout << "( ";
        for (int i = 0; i < size; i++)
        {
            std::cout << stack[i] << " ";
        }
        std::cout << ")" << std::endl;
    }
};

int main()
{
    // ================================================= EXRSZ 1 =================================================

    std::cout << "================================================= EXRSZ 1 =================================================" << std::endl << std::endl;
    Power test;
    float t1;
    float t2;
    std::cout << "Enter 2 nombers: " << std::endl;
    std::cin >> t1 >> t2;
    test.set(t1, t2);
    std::cout << test.calculate();

    // ================================================= EXRSZ 2 =================================================

    std::cout << std::endl << "================================================= EXRSZ 2 =================================================" << std::endl << std::endl;
    RGBA color1(100, 120, 150, 30);
    color1.print();

    
    // ================================================= EXRSZ 3 =================================================

    std::cout << std::endl << "================================================= EXRSZ 3 =================================================" << std::endl << std::endl;
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}
