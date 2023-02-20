/* STL = containers   -> obj which stores data
         + algo       -> procedure to process data
         + iterators  -> object which points to an element of a containers

CONTAINERS = 3 types
1. Sequence containers    - store in linear fashion { (7)->(9)->(11)->(1) ... }
                            eg.
                            VECTOR: array
                            (Random access : fast,
                             Insertion / Deletion in middle = slow,
                             Insertion / Deletion at the end = fast)

                            , LIST: pointer to pointer
                            (Random access : slow,
                             Insertion / Deletion in middle = fast,
                             Insertion / Deletion at the end = fast)

                            , DEQUEUE

2. Associative containers - DIRECT ACCESS (Faster serch)
                             eg. set, multiset, map, multimap etc.
                            (Random access : slow,
                             Insertion / Deletion in middle = fast,
                             Insertion / Deletion at the end = fast)

3. Derived containers     - DERIVED FROM 1, 2 - Real world modelling eg.
                              QUEUE - LIFO jo pahale gaya last me aayega
                            , STACK - jo pahale gaya pahale aayega
                            , Priority Queue
                            (Random access : depends -> DSA,
                             Insertion / Deletion in middle = depends -> DSA,
                             Insertion / Deletion at the end = depends -> DSA)

*/

#include <iostream>
using namespace std;

int main()
{

    return 0;
}