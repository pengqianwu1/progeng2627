#include <iostream>

bool leap_year(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    y2 = y1;
    m2 = m1;
    d2 = d1 + 1;
    if (m2 == 2){
        if ((leap_year(y2) && d2 == 30) || (leap_year(y2) == false && d2 == 29)){
            d2 = 1;
            m2 += 1;
        }
    }
    else if (((m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10) && d2 == 32) || ((m2 == 4 || m2 == 6 || m2 == 9 || m2 == 11) && d2 == 31)){
        m2 += 1;
        d2 = 1;
    }
    else if (m2 == 12 && d2 == 32){
        m2 = 1;
        d2 = 1;
        y2 += 1;
    }
}

int main(){
    int d1, d2, m1, m2, y1, y2;
    d1 = 28;
    m1 = 2;
    y1 = 2019;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl;
    d1 = 29;
    m1 = 2;
    y1 = 2020;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl;
    d1 = 31;
    m1 = 1;
    y1 = 2019;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl;
    d1 = 30;
    m1 = 4;
    y1 = 2020;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl;
    d1 = 31;
    m1 = 12;
    y1 = 2020;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl;
    d1 = 28;
    m1 = 3;
    y1 = 2020;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl;
}