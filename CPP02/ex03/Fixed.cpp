# include "Fixed.hpp"

const int Fixed::_8bits = 8;

Fixed::Fixed() : _value(0)
{
}

Fixed::Fixed(const Fixed& newFixed)
{
    this->_value = newFixed._value;
}

Fixed::Fixed(int const raw)
{
    this->_value = raw << _8bits;
}

Fixed::Fixed(float const raw)
{
    this->_value = static_cast<int>(raw * 256); 
}

Fixed::~Fixed()
{
}


void  Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}

int Fixed::toInt() const
{
    return this->_value >> _8bits;
}

float Fixed::toFloat() const
{
    return static_cast<float>(this->_value) / 256;
}

Fixed &Fixed::operator=(const Fixed& newFixed)
{
    if (this != &newFixed)
        this->_value = newFixed.getRawBits();
    return *this;
}

bool Fixed::operator==(const Fixed& fixed)
{
    return this->_value == fixed._value;
}

bool Fixed::operator!=(const Fixed& fixed)
{
    return this->_value != fixed._value;
}

bool Fixed::operator<(const Fixed& fixed)
{
    return this->_value < fixed._value;
}

bool Fixed::operator<=(const Fixed& fixed)
{
    return this->_value <= fixed._value;
}

bool Fixed::operator>(const Fixed& fixed)
{
    return this->_value > fixed._value;
}

bool Fixed::operator>=(const Fixed& fixed)
{
    return this->_value >= fixed._value;
}

Fixed Fixed::operator+(const Fixed& fixed)
{
    return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed& fixed)
{
    return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed& fixed)
{
    return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed& fixed)
{
    return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed Fixed::operator++( void )
{
    this->_value += 1;
    return *this;
}

Fixed Fixed::operator++( int )
{
    Fixed temp(*this);
    this->_value += 1;
    return temp;
}

Fixed Fixed::operator--( void )
{
    this->_value -= 1;
    return *this;
}

Fixed Fixed::operator--( int )
{
    Fixed temp(*this);
    this->_value -= 1;
    return temp;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}

Fixed& Fixed::min(Fixed& fixedOne, Fixed& fixedTwo)
{
    if (fixedOne <= fixedTwo)
        return fixedOne;
    else
        return fixedTwo;
}

const Fixed& Fixed::min(const Fixed& fixedOne, const Fixed& fixedTwo)
{
    if (fixedOne._value <= fixedTwo._value)
        return fixedOne;
    else
        return fixedTwo;
}

Fixed& Fixed::max(Fixed& fixedOne, Fixed& fixedTwo)
{
    if (fixedOne >= fixedTwo)
        return fixedOne;
    else
        return fixedTwo;
}

const Fixed& Fixed::max(const Fixed& fixedOne, const Fixed& fixedTwo)
{
    if (fixedOne._value >= fixedTwo._value)
        return fixedOne;
    else
        return fixedTwo;
}