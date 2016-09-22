
# TODO

the objects are read in from a file one by one as needed.
The debugger cannot handle loading in the entire core file, even if the the process running normally can.

The pointers in the objects read from disk will have to be overwritten with new pointers. So we need to either scan the memory of the object or know the memory layout.

Each pointer will have to be loaded from the core and then put in memory and the address replaced.