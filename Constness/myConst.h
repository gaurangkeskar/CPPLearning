#include <vector>

class myConst {
private:
    std::vector<int> numbers;

public:
    void addNumber(int number);              // Non-const function to add a number
    int getSum() const;                      // Const function to get the sum
    std::vector<int> getNumbers() const;     // Const function to get the numbers
};

