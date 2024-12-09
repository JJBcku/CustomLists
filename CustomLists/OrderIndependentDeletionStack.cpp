#include "OrderIndependentDeletionStack.h"

template<class T>
IDType OrderIndependentDeletionStack<T>::_nextVectorID = std::numeric_limits<IDType>::lowest();