#include "iostream"

int main() {
    int a,b,c;
    std::cin>>a>>b>>c;

    int max_1 = std::max(std::max(a,b),c);
    int max_2 = std::max({a,b,c});

    std::cout<<max_1<<" "<<max_2<<"\n";

    return 0;
}