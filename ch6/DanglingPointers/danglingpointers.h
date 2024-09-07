int danglingPointer() {
    int *aPointerToInt = new int(234);
    
    delete aPointerToInt;

    return *aPointerToInt;
}
