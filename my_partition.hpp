

template <class outputIterator, class predicate>
outputIterator my_partition(outputIterator first, outputIterator last, predicate pred){
    outputIterator it = first;
    while (it != last){
        if (pred(*it)){
            *last = *first; // store this false value in last temporarily
            *first = *it;
            *it = *last;
            ++first;
            ++it;
        } else {
            ++it;
        }
    }
    return first;

}
