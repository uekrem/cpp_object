#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int     fixed_number;
        static const int fixed_bit = 8;
    public:
        Fixed();
        Fixed(Fixed &now_fixed);
        ~Fixed();
        void operator = (Fixed &assign_fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif