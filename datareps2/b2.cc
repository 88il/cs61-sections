#include <cstdio>

const char* f(int) {
    // WORKS!
    // const char* buf = "example";
    
    // section example... does NOT work
    char buf[100] = "example";
    
    return buf;
}

int main() {
//    testing:
//    const char* s = f(2);
//    printf("%p\n", s);
    

    printf("%s\n", f(2));
}
