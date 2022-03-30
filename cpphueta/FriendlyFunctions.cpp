#include <iostream>

class value2;

class value1 {
    int m_val;
public:
    value1(int val) { m_val = val; }
    friend void valuesfunc(value1& val, value2& wol);
};

class value2 {
    int m_wol;
public:
    value2(int wol) { m_wol = wol; }
    friend void valuesfunc(value1 &val, value2 &wol);
};

void valuesfunc(value1& val, value2& wol) {
    std::cout << "First num:" << val.m_val << "\n";
    std::cout << "Second num:" << wol.m_wol << "\n";
}

int main()
{
    value1 val(15);
    value2 wol(14);

    valuesfunc(val, wol);
    return 0;
}
