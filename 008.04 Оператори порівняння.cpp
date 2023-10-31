#include <iostream>

class SpecialSymbols
{
private:
	char symbol;

public:
    SpecialSymbols(char s) : symbol(s) {
        char ukr_alphabet[12] = { 'О', 'А', 'І', 'Е', 'Н', 'С', 'В', 'К', 'Р', 'Х', 'Т', 'М' };
        char eng_alphabet[12] = { 'O', 'A', 'I', 'E', 'H', 'C', 'B', 'K', 'P', 'X', 'T', 'M' };
        
        for (int i = 0; i < 12; i++) {
            if (s == ukr_alphabet[i] || s == eng_alphabet[i]) {
                symbol = eng_alphabet[i];
                return;
            }
        }
    }

    bool operator==(const SpecialSymbols& other) const {
        return symbol == other.symbol;
    }

    bool operator!=(const SpecialSymbols& other) const {
        return !(*this == other);
    }
};

int main()
{
    system("chcp 1251>null");
    char symbol1, symbol2;

	std::cout << "Enter the first character: ";
	std::cin >> symbol1;

	std::cout << "Enter the second character: ";
	std::cin >> symbol2;

	SpecialSymbols symbol_1(symbol1);
	SpecialSymbols symbol_2(symbol2);

	std::cout << "Operator == " << (symbol_1 == symbol_2) << std::endl;
	std::cout << "Operator != " << (symbol_1 != symbol_2) << std::endl;

	return 0;
}

