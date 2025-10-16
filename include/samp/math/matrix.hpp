#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <samp/math/vector.hpp>


#pragma pack(push, 1)
class CMatrix {
public:
    CVector       right;
    unsigned long flags;
    CVector       up;
    float         pad_u;
    CVector       at;
    float         pad_a;
    CVector       pos;
    float         pad_p;
};
#pragma pack(pop)


#endif // !MATRIX_HPP