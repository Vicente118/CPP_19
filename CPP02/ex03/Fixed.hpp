#pragma once
#ifndef __FIXED__
#define __FIXED__

#include <iostream>
#include <string>

class Fixed
{
    private :
        int                 _value; // Nombre en virgule fixe
        static const int   _8bits; // Nombre de bits de la partie fractionnaire

    public :
        Fixed();
        Fixed(const Fixed& newFixed);
        Fixed(int const raw);
        Fixed(float const raw);
        ~Fixed();

        //            ASSIGNATION           //
        Fixed&  operator=(const Fixed& newFixed);
        //            COMPARAISON           //
        bool    operator==(const Fixed& fixed);
        bool    operator!=(const Fixed& fixed);
        bool    operator<(const Fixed& fixed);
        bool    operator<=(const Fixed& fixed);
        bool    operator>(const Fixed& fixed);
        bool    operator>=(const Fixed& fixed);
        //      ARITHMETIC OPERATION        //
        Fixed   operator+(const Fixed& fixed);
        Fixed   operator-(const Fixed& fixed);
        Fixed   operator*(const Fixed& fixed);
        Fixed   operator/(const Fixed& fixed);
        // INCREMENTATION / DECREMENTATION  //
        Fixed   operator++( void );
        Fixed  operator++( int );
        Fixed   operator--( void );
        Fixed  operator--( int );   
        
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        int     toInt( void ) const;
        float   toFloat( void ) const;

        static Fixed& min(Fixed& fixedOne, Fixed& fixedTwo);   // TODO !!!
        static const Fixed& min(const Fixed& fixedOne, const Fixed& fixedTwo);
        static Fixed& max(Fixed& fixedOne, Fixed& fixedTwo);
        static const Fixed& max(const Fixed& fixedOne, const Fixed& fixedTwo);
};

std::ostream&   operator<<(std::ostream& out, const Fixed& fixed);


#endif