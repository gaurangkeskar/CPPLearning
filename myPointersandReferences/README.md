### Test Cases


#### Dangling Pointer: What happens if you try to dereference a pointer after deleting it?

int* p = new int(10);
delete p;
int value = *p; // Dereferencing a deleted pointer

#### Solution
Always set pointers to nullptr after deletion.

#### Learning
Understand pointer lifecycle to prevent accessing invalid memory.


#### Uninitialized Pointer: What happens if you dereference an uninitialized pointer?

int* p; // p is uninitialized
int value = *p; // Dereferencing an uninitialized pointer

#### Solution
Always initialize pointers before use.

#### Learning
Uninitialized variables lead to undefined behavior; initialize or assign immediately.


#### Memory Leak: What happens if you lose the reference to dynamically allocated memory without deleting it?

int* p = new int(20);
p = nullptr; // Memory leak occurs here


#### Solution
Ensure to delete any dynamically allocated memory before losing reference.

#### Learning
Always manage memory to avoid leaks, using smart pointers if possible.


#### Using delete on a pointer that has not been allocated memory: What happens when you try to delete a pointer that was never initialized with new?

int* p;
delete p; // Deleting an uninitialized pointer

#### Solution
Initialize pointers before using delete.

#### Learning
 Be cautious with memory management to avoid runtime errors.


#### Pointer Arithmetic: What will happen if you perform pointer arithmetic beyond the allocated memory?

int* arr = new int[5];
for (int i = 0; i <= 5; ++i) {
    arr[i] = i; // Accessing arr[5] is out of bounds
}
delete[] arr;

#### Solution
 Always stay within allocated bounds; use proper loop conditions.

#### Learning
 Out-of-bounds access can lead to unpredictable behavior; check array limits.


#### Double Pointer Dereferencing: What happens if you dereference a double pointer incorrectly?

int** pp;
int value = **pp; // Dereferencing an uninitialized double pointer

#### Solution
 Initialize double pointers before dereferencing.
#### Learning
Understand pointer levels to avoid dereferencing uninitialized pointers.


#### Pointer to a Function: How can you use a pointer to a function, and what happens if you call it without being initialized?

void (*funcPtr)(); // Pointer to a function
funcPtr(); // Calling an uninitialized function pointer

#### Solution
 Initialize function pointers before calling them.

#### Learning
Ensure function pointers are valid to avoid crashes.

#### Const Pointer: What happens if you try to change the value pointed to by a const pointer?

const int* p = new int(30);
*p = 40; // Trying to change the value pointed to by a const pointer

#### Solution
Respect const qualifiers; don't attempt to modify.

#### Learning
Understanding const helps prevent unintentional changes to data.

#### Pointer to Array: How do you access elements of an array using a pointer, and what happens if you go out of bounds?

int arr[] = {1, 2, 3, 4, 5};
int* p = arr;
int value = *(p + 5); // Accessing out of bounds

#### Solution
Access array elements safely; avoid out-of-bounds operations.

#### Learning
Understanding const helps prevent unintentional changes to data.

#### Nullptr in Conditions: What happens if you check a pointer against nullptr before dereferencing it?

int* p = nullptr;
if (p != nullptr) {
    int value = *p; // Safe to dereference
}


#### Solution
Always check pointers against nullptr before dereferencing.

#### Learning
Defensive programming practices protect against null dereference errors.