#include "ElementaryClasses.h"
#include "IO/InputReader.h"
#include "IO/OutputWriter.h"
#include "Simulation.h"

#include "BruteForce.h"
#include "Trees/HyperSplit.h"
#include "Trees/HyperCuts.h"

#include "OVS/TupleSpaceSearch.h"
#include "ClassBenchTraceGenerator/trace_tools.h"

#include "PartitionSort/PartitionSort.h"
#include <stdio.h>

#include <assert.h>
#include <memory>
#include <chrono>
#include <string>
#include <sstream>

using namespace std;

void MyClassifier::InitClass() {
    string filterFile = "fw1_seed_1.rules";
    vector<Rule> rules = InputReader::ReadFilterFile(filterFile);

	classifier.ConstructClassifier(rules);
	printf("classifier is constructed\n");
}

int MyClassifier::doPartitionSort(const Packet& p) {
    return classifier.ClassifyAPacket(p);
}
