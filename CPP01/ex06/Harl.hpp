#pragma once
#ifndef __HARL__
#define __HARL__

#include <iostream>
#include <string>

class Harl
{
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        typedef void (Harl::*fPtr) (void);
        fPtr fTab[4];
    public :
        Harl();
        ~Harl() = default;
        void complain( std::string level );

};

int whichLevel(std::string level);

#endif