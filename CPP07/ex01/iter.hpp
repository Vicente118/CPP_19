#ifndef __ITER__
# define __ITER__

# include <iostream>
# include <string>

template<typename T>
void iter(T *array, size_t length, void (*fun)(T *))
{
    if (array == NULL || fun == NULL)
        return;
    for (size_t i = 0; i < length; i++) {
        fun(&array[i]);
    }
}

#endif