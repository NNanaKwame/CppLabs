#include <iostream>

using namespace std;
class APO{  //Class definition
protected :
    int aSize;      //Array size as protected
public:
    void setSize(int a){
    aSize = a;
    }
    void findMaxMinNumber(int* arr) {
    // Initialize the smallest number as the first element
    int smallest = *arr;

    // Iterate through the array elements
    for (int i = 1; i < aSize; i++) {
        // Check if the current element is smaller than the smallest
        if (*(arr + i) < smallest) {
            smallest = *(arr + i);
        }
    }
    cout<<"The smallest in the array is : "<<smallest<<endl;

    int largest = *arr;
    // Iterate through the array elements
    for (int i = 1; i < aSize; i++) {
        // Check if the current element is larger than the largest
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }
     cout<<"The largest in the array is : "<<largest<<endl;
}

int arrGetSize(){
return aSize;
}

void getAverage(int *arr ) {
   int i;
   double sum = 0;
   double avg;

   for (i = 0; i < aSize; ++i) {
      sum += arr[i];
   }
   avg = sum / aSize;
    cout<<"The average of the array is : "<<avg<<endl;
}
};

int main()
{
    APO arr1;
    int size;
    cout << "Enter the size of the array: "<<endl;
    cin >> size;
    arr1.setSize(size);

    int* arr = new int[arr1.arrGetSize()];

    cout << "Enter the array elements: "<<endl;
    for (int i = 0; i < arr1.arrGetSize(); i++) {
        cin >> *(arr + i);
    }
    arr1.findMaxMinNumber(arr);
    arr1.getAverage(arr);

    //cout << "Hello world!" << endl;
    return 0;
}
