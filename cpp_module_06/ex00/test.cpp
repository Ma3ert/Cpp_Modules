#include <iostream>
#include <float.h>

// int main()
// {
// 	float a = FLT_MAX;
// 	printf("a %f\n %d\n", a, INT_MAX);
// }

#include <iostream>
#include <limits>

using namespace std;

template<typename T>
void showMinMax() {
   cout << "min: " << numeric_limits<T>::min() << endl;
   cout << "max: " << numeric_limits<T>::max() << endl;
   cout << endl;
}

int main() {
   cout << "float:" << endl;
   showMinMax<float>();
}
