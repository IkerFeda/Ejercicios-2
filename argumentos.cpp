#include <iostream>
#include <cstdarg>

int suma (int count, ...) {
    int result = 0;
    va_list args;
    va_start(args,count);
    for (int i; i < count; i++){
        result += va_arg(args,int);
    }
    va_end(args);
    return result;
}
int main (){
    std::cout<< "suma" << suma (4,3,2,1)<<std::endl;
    std::cout<< "suma" << suma (5,4,2,7,8,5)<< std::endl;
    return 0;

}