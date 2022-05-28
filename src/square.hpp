#ifndef SQUARE_HPP_
#define SQUARE_HPP_

#include <math.h>
#include <string>
#include <sstream>
#include <typeinfo>

#include "figure.hpp"
#include "point.hpp"
#include "rectangle.hpp"

template<typename ValueType, unsigned int Dimension>
class Square : public Rectangle {
 public:
    Square(Point<ValueType, Dimension> first, Point<ValueType, Dimension> second);

};


#endif  // SQUARE_HPP_
