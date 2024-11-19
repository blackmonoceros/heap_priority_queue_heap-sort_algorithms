_____________________________________________________________________________________________________________________________________________________________________
# heap_priority_queue_heap-sort_algorithms

task

Exercises 8

Task 8.1.

a) What is a heap (max-heap)?

b) What is a binary heap (max-binary heap)?

c) What is a typical use of a heap?

Task 8.2.

Let's assume that a binary heap is implemented in an array a[1..n] (in C it can be an n+1 element array, in which the element with index 0 will not be used). 
The elements of the heap are stored in successive levels, i.e. the element a[1] is the root, a[2] and a[3] are elements from the next level (children of the root, 
i.e. elements with depth 1), a[4], a[5], a[6] and a[7] are elements of the next level (children of nodes a[2] and a[3]), etc.
a) Which element of the array a[] is the predecessor (parent) of the element a[i]?
b) What element of array a[] is the left child of element a[i]? (assuming it exists)

c) What element of array a[] is the right child of element a[i]? (assuming it exists)

Task 8.3.

What is the upheap sifting operation?

Write a function to sift up an element with index k:

void upheap (Item a[], int k)
What is the time complexity of the upheap sifting operation (in the worst case)?

Task 8.4.

What is the downheap sifting operation?

Write a function to perform the downheap sifting operation of element with index k:
void downheap (Item a[], int k, int n)
What is the time complexity of the downheap sifting operation (in the worst case)? How many element comparison operations are performed in each iteration of 
the loop (i.e. at each level)?

Task 8.5.

The contents of the array a are as follows a[1..7]={5, 2, 4, 6, 8, 3, 7}.
Please print the elements of the array after building a heap in it.

Task 8.6.

Write a function that returns the largest element of the heap:
Item max (Item a[])

Task 8.7.

Write a function that inserts element e into the priority queue
void insert (Item a[], Item e)
Insert the following elements into the heap: 2,3,1,5,15,21,24,7,13. Print the array in which the heap is stored.

Task 8.8.

Write a function that deletes the largest element of the priority queue
void deletemax (Item a[])
Test the function on the example of the queue containing numbers from the previous task.
