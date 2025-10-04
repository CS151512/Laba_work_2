#include "iostream"

int main() {
    int n;
    std::cin>>n;
    std::string final_word;

    if (n >= 11 && n <= 14) {
        final_word = "лет";
    } else {
        int last_digit = n % 10;

        switch (last_digit) {
            case 1:
                final_word = "год";
                break;
            case 2:
            case 3:
            case 4:
                final_word = "года";
                break;
            case 0:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            default:
                final_word = "лет";
                break;
        }
    }

    std::cout << "Мне " << n << " " << final_word << "\n";

    return 0;
}