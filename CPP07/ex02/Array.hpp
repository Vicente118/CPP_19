#ifndef __ARRAY__
# define __ARRAY__

# include <iostream>
# include <string>

typedef unsigned int u_int;
template<typename T>
class Array
{
    private :

        T *array;
        u_int sizeArray;

    public :

        Array() : array(0), sizeArray(0) {}
        Array(u_int n) : array(new T[n]()), sizeArray(n) {}

        Array(const Array& ref) {
            this->sizeArray = ref.sizeArray;
            this->array = new T[sizeArray]();
            for (u_int i = 0; i < sizeArray; i++) {
                this->array[i] = ref.array[i];
            }
        }

        Array &operator=(const Array& ref)
        {
            if (this != &ref)
            {
                delete[] this->array;
                sizeArray = ref.sizeArray;
                this->array = new T[sizeArray]();
                for (u_int i = 0; i < sizeArray; i++)
                {
                    this->array[i] = ref.array[i];
                }
            }
            return *this;
        }

        T& operator[](u_int index) {
            if (index >= sizeArray) {
                throw std::out_of_range("Index out of bounds");
            }
            return array[index];
        }


        ~Array() { delete[] array; }

        u_int size() const { return this->sizeArray; }
};

#endif