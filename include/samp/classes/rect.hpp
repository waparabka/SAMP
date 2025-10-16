#ifndef RECT_HPP
#define RECT_HPP


class CRect {
public:
    long left, top;
    long right, bottom;

    CRect();
    CRect(long left, long top, long right, long bottom);
};


#endif // !RECT_HPP