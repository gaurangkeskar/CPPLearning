### Problem Statement

#### Transform and Rearrange
Given an array of strings, my task is to transform each string by reversing it and then sorting the transformed strings based on their lengths.
If two strings have the same length, they should be sorted in alphabetical order.

#### Solution
Implemented some of the array testcases. Implemented array and strings in project

#### Learnings

 Use std::equal to compare two arrays element-wise.

 
int* arr1 = new int[3]{1, 2, 3};
int* arr2 = new int[3]{1, 2, 3};

if (arr1 == arr2) {
    // This will evaluate to false, as they point to different memory locations.
}
delete[] arr1;
delete[] arr2;

 Comparing pointers will only check if they point to the same address, not the contents.


 ![arraysandstring-output](https://github.com/user-attachments/assets/0589fe52-0937-40fc-9016-04d0cd29cb5d)
