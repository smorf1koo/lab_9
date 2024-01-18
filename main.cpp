#include <iostream>
using namespace std;

template<typename T>
const T* max(const T array[], size_t n){
    const T* maximum = &array[0];
    for (size_t i = 0; i < n; ++i) if (array[i] > *maximum) maximum = &array[i];
    return maximum;
}

template<typename T>
const T* min(const T array[], size_t n){
    const T* minimum = &array[0];
    for (size_t i = 0; i < n; ++i) if (array[i] < *minimum) minimum = &array[i];
    return minimum;
}

int main(){
    size_t N = 5;
    int *int_array = new int[N]{-3545, 53, -663, 32, 4};
    double *double_array = new double[N]{-5534445.4445, 4.4, -5346.0, 6663.533, 53.5};
    unsigned int *unsigned_int_array = new unsigned int[N]{4, 64, 66666, 2, 5};
    cout << *max(int_array, N) << ' ' << *min(int_array, N) << '\n';
    cout << *max(double_array, N) << ' ' << *min(double_array, N) << '\n';
    cout << *max(unsigned_int_array, N) << ' ' << *min(unsigned_int_array, N) <<'\n';

    // освобождение памяти
    delete[] int_array;
    delete[] double_array;
    delete[] unsigned_int_array;

    return 0;
}