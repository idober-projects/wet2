
#ifndef WET2_NODEUF_H
#define WET2_NODEUF_H

#include "Record.h"
#include "Heap.h"

class NodeUF {
private:
    Record m_record;
    NodeUF* m_father;
    Heap* m_heap; // null if not root.
    int m_column;
    int m_height;
public:
    NodeUF(Record* record,NodeUF* father, Heap* heap, int coloumn, int height);
    ~NodeUF();
    NodeUF* initNode(Record* new_record);
    NodeUF* removeNode();

};


#endif //WET2_NODEUF_H
