// #include "ElementaryClasses.h"
// #include "IO/InputReader.h"
// // #include "IO/OutputWriter.h"
// // #include "Simulation.h"

// // #include "BruteForce.h"
// // #include "Trees/HyperSplit.h"
// // #include "Trees/HyperCuts.h"

// // #include "OVS/TupleSpaceSearch.h"
// #include "ClassBenchTraceGenerator/trace_tools.h"

// #include "PartitionSort/PartitionSort.h"
// #include <stdio.h>

// #include <assert.h>
// #include <memory>
// #include <chrono>
// #include <string>
// #include <sstream>

#include "cls_core.h"

using namespace std;

void MyClassifier::InitClass() {
    string filterFile = "/users/sqi009/PartitonSort/fw_2.rules";
    vector<Rule> rules = InputReader::ReadFilterFile(filterFile);

	classifier.ConstructClassifier(rules);
	printf("classifier is constructed\n");
}

int MyClassifier::doPartitionSort() {
    // printf("doPartitionSort\n");
    Packet p = {1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 1, 2, 3, 4, 5, 6, 7, 9, 10};
    return classifier.ClassifyAPacket(p);   
}
