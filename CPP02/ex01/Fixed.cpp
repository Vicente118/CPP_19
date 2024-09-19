# include "Fixed.hpp"

const int Fixed::_8bits = 8;

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& newFixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_value = newFixed._value;
}

Fixed::Fixed(int const raw)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = raw << _8bits; // Revient a multiplier par 256
}

Fixed::Fixed(float const raw)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = static_cast<int>(raw * 256/*(1 << _8bits)*/); 
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& newFixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &newFixed)
        this->_value = newFixed.getRawBits();
    return *this;
}

void  Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
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
    return static_cast<float>(this->_value) / (1 << _8bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}