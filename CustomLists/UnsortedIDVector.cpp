#include "UnsortedIDVector.h"

template<class T>
IDType UnsortedIDVector<T>::_nextVectorID = std::numeric_limits<IDType>::lowest();