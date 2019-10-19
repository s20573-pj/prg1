#include <string>

int main(int argc, char* argv[])
{
    auto const n = std::stoi(argv[1]);

    /*
     * Używamy atrybutu [[maybe_unused]] żeby poinformować kompilator, że z
     * premedytacją nie używamy tej zmiennej.
     */
    int* an_array[[maybe_unused]] = new int[n];

    return 0;
}
