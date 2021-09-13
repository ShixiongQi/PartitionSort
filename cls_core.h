#include <iostream>

#include "ElementaryClasses.h"
#include "IO/InputReader.h"
// #include "ClassBenchTraceGenerator/trace_tools.h"

#include "PartitionSort/PartitionSort.h"
#include <stdio.h>

#include <assert.h>
#include <memory>
#include <chrono>
#include <string>
#include <sstream>

using namespace std;

class MyClassifier {
public:
    MyClassifier() {}
    ~MyClassifier() {}

    void InitClass ();
    int doPartitionSort ();

    string filterFile;
    PartitionSort classifier;
};