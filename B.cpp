#include "iostream"

int main() {
    int a,b,c;
    std::cin>>a>>b>>c;

    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    std::cout<<max<<"\n";

    return 0;
}