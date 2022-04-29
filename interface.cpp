#include "interface.h"
#include "cls_core.h"
#include <iostream>

using namespace std;

#ifdef __cplusplus
extern "C"{
#endif

// Global class ptr
static MyClassifier *mycls = NULL;
// static foo *myFoo = NULL;
void createCLS () {
    mycls = new MyClassifier();
    mycls->InitClass();
}

void interface() {
    int a = mycls->doPartitionSort();
    cout << "Lookup Result: " << a << endl;
}

#ifdef __cplusplus
}
#endif
