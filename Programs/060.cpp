// C++ Program to Add Two Distances (in inch-feet) system Using Structures

#include <iostream>

struct Distance
{
private:
    unsigned int m_inch;
    unsigned int m_feet;

public:

    Distance(int feet, int inch) : m_feet(feet), m_inch(inch)
    {
        if ( m_inch >= 12 )
        {
            m_feet += m_inch / 12;
            m_inch %= 12;
        }
    }

    Distance(int arr[2]) : m_feet(arr[0]), m_inch(arr[1])
    {
        if ( m_inch >= 12 )
        {
            m_feet += m_inch / 12;
            m_inch %= 12;
        }
    }

    Distance() : m_feet(0), m_inch(0) {}

    Distance operator+(const Distance& other) const
    {
        return Distance(m_feet + other.m_feet, m_inch + other.m_inch);
    }

    int operator[](int arg) const
    {
        if ( arg == 0 ) return m_feet;
        if ( arg == 1 ) return m_inch;
        return 0;
    }
};

std::ostream& operator<<(std::ostream& stream, const Distance& dist)
{
    stream << "( " << dist[0] << " ft. "  << dist[1] << " in. )";
    return stream;
}

int main()
{
    Distance d1 = { 5, 2 };
    Distance d2 = { 7, 45 };

    std::cout << d1 << " + " << d2 << " = " << d1 + d2 << std::endl;
}