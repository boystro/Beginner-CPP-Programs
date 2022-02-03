// C++ Program to Calculate Difference Between Two Time Period

#include <iostream>
#include <cmath>

struct Time
{
    int hours;
    int minutes;
    int seconds;

    Time() : hours(0), minutes(0), seconds(0) {}
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s){}
    Time(int secs)
    {
        minutes = secs / 60;
        hours = minutes / 60;
        minutes %= 60;
        seconds %= 60;
    }

    Time operator-(const Time& other) const
    {
        int s = this -> getTotalSeconds();
        int o = other.getTotalSeconds();
        if (s>o) return Time(s-o);
        if (s<o) return Time(o-s);
        return 0;
    }

    int getTotalSeconds() const
    {
        return (int)(hours*3600 + minutes*60 + seconds);
    }
};

std::ostream& operator<<(std::ostream& stream, const Time& time)
{
    stream << time.hours << " hr. " << time.minutes << " min. " << time.seconds << " sec. ";
    return stream;
}

int main()
{
    Time t1(5432);
    Time t2(5, 14, 36);

    std::cout << t1 << std::endl;
    std::cout << t2 << std::endl;
    std::cout << t1 - t2 << std::endl;
}