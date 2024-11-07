#ifndef __BASE__
# define __BASE__

# include <cstdlib> 
# include <ctime> 
# include <iostream>
# include <unistd.h>
# include <typeinfo>

class Base {
    public :
        virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif 