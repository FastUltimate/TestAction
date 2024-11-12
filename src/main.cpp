#include <iostream>

template<typename T>
void case1(T&& param)
{}

template<typename T>
void case2(T&& param)
{}

template<typename T>
void case3(const T& param)
{}

template<typename T>
void case4(T param)
{}

template<typename T1, typename T2>
void case5(T1 param1, const T2& param2)
{}

template<typename T>
void case6(T param)
{}

template<typename T>
void case7(T* param)
{}

template<typename T>
void case8(T&& param)
{}

template<typename T>
void case9(const T& param)
{}

int somefunc(int, int) { return 0; }

int main()
{
    // Case 1 - (T: const int&, ParamType: const int&)
    const int x1 = 10;
    case1(x1);

    // Case 2 - define an int variable and send it to function (T: int, ParamType: int&&)
    int x2 = 90;
    case2(std::move(x2));
    
    // Case 3 - (T: char[4], ParamType: const char (&)[4])
    const char x3[4] = "Mus";
    case3(x3);
    
    // Case 4 - (T: int (*)(int, int), ParamType: int (*)(int, int))
    case4(somefunc);
    
    // Case 5 - (T1: int, ParamType1: int, T2: int, ParamType2: const int &)
    int x5;
    case5(x5, x5);
    
    // Case 6 - (T: const double *, ParamType: const double *)
    const double x6 = 90;
    const double *px6 = &x6;
    case6(px6);
    
    // Case 7 - (T: const double, ParamType: const double *)
    const double x7 = 90;
    const double *px7 = &x7;
    case7(px7);
    
    // Case 8 - (T: const double *const &, ParamType: const double *const &)
    const double x8 = 90;
    const double * const px8 = &x8;
    case8(px8);
    
    // Case 9 - (T: const double *, ParamType: const double *const &)
    const double x9 = 90;
    const double * const px9 = &x9;
    case9(px9);

    return 0;
}
