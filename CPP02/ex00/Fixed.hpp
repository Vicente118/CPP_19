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
        ~Fixed();
        Fixed&  operator=(const Fixed& newFixed);
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif