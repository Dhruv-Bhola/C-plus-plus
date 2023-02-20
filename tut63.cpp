// Templates = parameterized classes

/*
    class -> object
    template -> class

    Why TEMPLATES?
    -> DRY principle ko follow karta hu (DONT REPEAT YOURSELF)
    -> generic programming - khali int ke liye nhi rhi sabhi datatype ke liye ban gyi


    *SYNTAX OF TEMPLATES*
    template <class T>   // T can be int, float, char etc.
    class Vector{
        T* arr;
        public:
            Vector(T* ar){
                // code
            }
        // & many other methods
    };

int main(){
    Vector <int> myVec(ptr);
    Vector <float> myFvec(ptr1);

    return 0;
}
*/

#include <iostream>
using namespace std;

template <class T>   // T can be int, float, char etc.
    class Vector{
        T* arr;
        public:
            Vector(T* ar){
                // code
            }
        // & many other methods
    };

int main(){
    int* ptr;
    float* ptr1;

    Vector <int> myVec(ptr);
    Vector <float> myFvec(ptr1);

    return 0;
}