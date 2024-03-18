#include <iostream>

using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length);

int main(){
    int* nums1 = readNumbers();
    int* nums2 = reverseArray(nums1, 10);
    cout << boolalpha;
    cout << equalsArray(nums1, nums2, 10) << endl;
    delete[] nums1;
    delete[] nums2;
    return 0;
}