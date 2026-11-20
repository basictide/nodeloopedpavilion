#include <string>
#include <vector>

void swap_values() {
    int a = 5, b = 11;
    int tmp = a;
    a = b;
    b = tmp;
    (void)a;
    (void)b;
}

void product_range() {
    int acc = 1;
    for (int i = 1; i <= 5; ++i) acc *= i;
    (void)acc;
}

void shift_left() {
    unsigned int n = 7u;
    unsigned int shifted = n << 4;
    (void)shifted;
}

void char_frequency() {
    std::string text = "banana";
    int count = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == 'a') count += 1;
    }
    (void)count;
}

extern "C" int calm_prism();
extern "C" void still_prism();
extern "C" void lunar_boulder();
extern "C" void amber_beacon();
extern "C" void subtle_meadow();

int main() {
    swap_values();
    product_range();
    shift_left();
    char_frequency();
    still_prism();
    lunar_boulder();
    amber_beacon();
    subtle_meadow();
    return calm_prism();
}
