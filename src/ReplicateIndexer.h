#ifndef _ReplicateIndexer_h
#define _ReplicateIndexer_h

#include "HashTable.h"

template <typename T>
class ReplicateIndexer
{
 public:
  static Array<Set> replicates(unsigned int (*hashFunction) (const T & key), const Array<T> & rhs);
};

#include "ReplicateIndexer.cpp"

#endif
