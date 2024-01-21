#include <iostream>
using namespace std;

template<typename InputType, typename OutputType>
OutputType* converting(const InputType InputArray[], size_t n){
    OutputType* OutputArray = new OutputType[n];
    for (size_t i = 0; i < n; ++i){
        OutputArray[i] = static_cast<OutputType>(InputArray[i]);
    }
    return OutputArray;
}

int main(){
    size_t n = 5;
    int *int_array = new int[n]{-3545, 53, -663, 32, 4};

    char* char_array = converting<int, char>(int_array, n);
    unsigned int* unsigned_int_array = converting<int, unsigned int>(int_array, n);

    for (int i=0; i < n; ++i) cout << int_array[i] << " " << char_array[i] << " " << unsigned_int_array[i] << "\n";

    // освобождение памяти
    delete[] int_array;
    delete[] char_array;
    delete[] unsigned_int_array;

    return 0;
}