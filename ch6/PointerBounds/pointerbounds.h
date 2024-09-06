int pointerBounds() {
    int *aPointerToInt;
    void *aPointerToVoid;

    aPointerToVoid = new int();

    aPointerToInt = (int*)aPointerToVoid;
    *aPointerToInt = 234;
    aPointerToInt = (int*)((char*)aPointerToVoid + sizeof(int));
    *aPointerToInt = 2423;

    int value = *aPointerToInt;

    delete aPointerToVoid;

    return value;
}
