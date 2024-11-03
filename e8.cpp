TASK 8.1

------------------------------------------------------------------------

A) Heap is a data structure based on a tree where descendants have a constant

relationship to the parent

B) It is an array structure representing a binary tree. In

the case of a max-heap, the value of each node is greater than or equal to

the value of its descendants

C) Priority queues, sorting

 

 

TASK 8.2

------------------------------------------------------------------------

a)  i = i/2

b)  2i

c)  2i+1

 

 

TASK 8.3

------------------------------------------------------------------------

Sifting up is checking if an element is not greater than

its parent and replacing it if it is.
 

#include <iostream>

#include <vector>

typedef Item;

using namespace std;

 

void upheap(Item tab[], int k){

    while(k>1 && tab[k] > tab[k/2]){

        swap(tab[k],tab[k/2]);

        k=k/2

    }

}

 

int main()

{

    cout<<"Hello World";

 

    return 0;

}

 

In the worst case O(log n).

 

 

TASK 8.4

------------------------------------------------------------------------

Sifting down checking if an item has no children is

the smallest.

 

#include <iostream>

#include <vector>

typedef Item;

using namespace std;

 

void upheap(Item tab[], int k){

    while(k>1 && tab[k] > tab[k/2]){

        swap(tab[k],tab[k/2]);

        k=k/2

    }

}

 

void downheap(Item tab,int k,int n){

    while(k*2 <=n){

        int j=2*k;

        if(j<n && tab[j]<tab[j+1]){

            j=j+1

        }

        if(tab[k])>= a[j])

        break;

        swap(tab[k],tab[j])

    }

    

}

 

int main()

{

    cout<<"Hello World";

 

    return 0;

}

 

 

Worst case O(log n).


 

TASK 8.5

------------------------------------------------------------------------

 

8,6,7,5,2,3,4 

 

#include <vector>

typedef Item;

using namespace std;

 

void upheap(Item tab[], int k){

    while(k>1 && tab[k] > tab[k/2]){

        swap(tab[k],tab[k/2]);

        k=k/2

    }

}

 

void downheap(Item tab,int k,int n){

    while(k*2 <=n){

        int j=2*k;

        if(j<n && tab[j]<tab[j+1]){

            j=j+1

        }

        if(tab[k])>= a[j])

        break;

        swap(tab[k],tab[j]);

        k=j;

    }

    

}

void buildHeap(Item tab[],int n){

    for(int i=n/2;i>=1;i--){

        downheap(tab,i,n);

    }

}

 

int main()

{

    int tab[]= {0,5,2,4,6,8,3,7};

    int n=sizeof(tab)/sizeof(tab[0])-1;

    buildHeap(tab,n);

    cout<<"Elementy w kopcu:"<<endl;

    for(i=1,i<n,i++){

        cout<< tab[i]<< " ";

    }

 

    return 0;

}

 

// Complexity O(n log n/2).

 

TASK 8.6

------------------------------------------------------------------------

 

#include <iostream>

#include <vector>

typedef Item;

using namespace std;

 

void upheap(Item tab[], int k){

    while(k>1 && tab[k] > tab[k/2]){

        swap(tab[k],tab[k/2]);

        k=k/2

    }

}

 

void downheap(Item tab,int k,int n){

    while(k*2 <=n){

        int j=2*k;

        if(j<n && tab[j]<tab[j+1]){

            j=j+1

        }

        if(tab[k])>= a[j])

        break;

        swap(tab[k],tab[j]);

        k=j;

    }

    

}

void buildHeap(Item tab[],int n){

    for(int i=n/2;i>=1;i--){

        downheap(tab,i,n);

    }

}

Item max(Item tab[]){

    return tab[1];

}

 

int main()

{

    int tab[]= {0,5,2,4,6,8,3,7};

    int n=sizeof(tab)/sizeof(tab[0])-1;

    buildHeap(tab,n);

    cout<<"Elementy w kopcu:"<<endl;

    for(i=1,i<n,i++){

        cout<< tab[i]<< " ";

    }

 

    return 0;

}

 

 

TASK 8.7

------------------------------------------------------------------------

 

i

 

#include <iostream>

#include <vector>

typedef Item;

using namespace std;

 

void upheap(Item tab[], int k){

    while(k>1 && tab[k] > tab[k/2]){

        swap(tab[k],tab[k/2]);

        k=k/2

    }

}

 

void downheap(Item tab,int k,int n){

    while(k*2 <=n){

        int j=2*k;

        if(j<n && tab[j]<tab[j+1]){

            j=j+1

        }

        if(tab[k])>= a[j])

        break;

        swap(tab[k],tab[j]);

        k=j;

    }

    

}

void buildHeap(Item tab[],int n){

    for(int i=n/2;i>=1;i--){

        downheap(tab,i,n);

    }

}

Item max(Item tab[]){

    return tab[1];

}

void insert(Itemtab[],Item e, int& n){

    n++

    tab[n]=e;

    upheap(tab,n);

}

int main()

{

    Item tab[1000];

    int n=0;

    insert(tab,20,n);

    insert(tab,2,n);

    insert(tab,1,n);

    insert(tab,8,n);

    insert(tab,24,n);

    insert(tab,99,n);

    insert(tab,3,n);

    insert(tab,5,n);

    

    

    cout<<"Elementy w kopcu:"<<endl;

    for(i=1,i<n,i++){

        cout<< tab[i]<< " ";

    }

 

    return 0;

}

 

 

TASK 8.8

------------------------------------------------------------------------

 

#include <iostream>

#include <vector>

typedef Item;

using namespace std;

 

void upheap(Item tab[], int k){

    while(k>1 && tab[k] > tab[k/2]){

        swap(tab[k],tab[k/2]);

        k=k/2

    }

}

 

void downheap(Item tab,int k,int n){

    while(k*2 <=n){

        int j=2*k;

        if(j<n && tab[j]<tab[j+1]){

            j=j+1

        }

        if(tab[k])>= a[j])

        break;

        swap(tab[k],tab[j]);

        k=j;

    }

    

}

void buildHeap(Item tab[],int n){

    for(int i=n/2;i>=1;i--){

        downheap(tab,i,n);

    }

}

Item max(Item tab[]){

    return tab[1];

}

void insert(Itemtab[],Item e, int& n){

    n++

    tab[n]=e;

    upheap(tab,n);

}

void deletemax (Item a[], int& n){

    swap(tab[1],tab[n]);

    n--;

    downheap(tab,1,n);

}

int main()

{

    Item tab[1000];

    int n=0;

    insert(tab,20,n);

    insert(tab,2,n);

    insert(tab,1,n);

    insert(tab,8,n);

    insert(tab,24,n);

    insert(tab,99,n);

    insert(tab,3,n);

    insert(tab,5,n);

    

    

    cout<<"Elementy w kopcu:"<<endl;

    for(i=1,i<n,i++){

        cout<< tab[i]<< " ";

    }

    deletemax(tab,n)

}

    

     cout<<"Elementy w kopcu:"<<endl;

    for(i=1,i<n,i++){

        cout<< tab[i]<< " ";

    return 0;

}

 

TASK 8.10

------------------------------------------------------------------------

 

#include <iostream>

#include <vector>

typedef Item;

using namespace std;

 

void upheap(Item tab[], int k){

    while(k>1 && tab[k] > tab[k/2]){

        swap(tab[k],tab[k/2]);

        k=k/2

    }

}

 

void downheap(Item tab,int k,int n){

    while(k*2 <=n){

        int j=2*k;

        if(j<n && tab[j]<tab[j+1]){

            j=j+1

        }

        if(tab[k])>= a[j])

        break;

        swap(tab[k],tab[j]);

        k=j;

    }

    

}

void buildHeap(Item tab[],int n){

    for(int i=n/2;i>=1;i--){

        downheap(tab,i,n);

    }

}

Item max(Item tab[]){

    return tab[1];

}

void insert(Itemtab[],Item e, int& n){

    n++

    tab[n]=e;

    upheap(tab,n);

}

void deletemax (Item a[], int& n){

    swap(tab[1],tab[n]);

    n--;

    downheap(tab,1,n);

}

void heapsort(Item tab[],int n){

    buildHeap(tab,n);

    int tmp=n;

    while(tmp>1){

        swap(tab[1],tab[tmp]);

        tmp--;

        downheap(tab,1,tmp)

    }

}

 

int main()

{

    Item tab[]={3,2,1,5,6,7,4,3,2,1,4};

    int n = sizeof(tab) / sizeof([0])-1;

    heapsort(tab,n);

    for(int i = 1 ; i<=n,i++)

        cout<< tab[i]<<" ";

  

    return 0;

}

 

 

TASK 8.11

------------------------------------------------------------------------

 

1. complexity O(n log n) always

2. is not stable

3. is sort method in place

Disadvantage:

- is complicated can exceed memory

Advantage:

- is iterative