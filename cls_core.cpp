#include "cls_core.h"

using namespace std;

void MyClassifier::InitClass() {
    string filterFile = "/users/sqi009/PartitionSort/fw_20.rules";
    vector<Rule> rules = InputReader::ReadFilterFile(filterFile);

    classifier.ConstructClassifier(rules);
    printf("classifier is constructed\n");
}

int MyClassifier::doPartitionSort() {
    printf("doPartitionSort\n");
    //Packet p = {1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 1, 2, 3, 4, 5, 6, 7, 9, 10};
    //91050608:91050615 1225588368:1225588375 7648:7648 7649:7649 17:17 17:17 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0
    //309240520:309240527 274898608:274898615 69:69 53:53 17:17 17:17 17:17 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0
   // Packet p = {91050608, 1225588368, 7648, 7649, 17, 17, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    //Packet p = {309240520, 274898608, 69, 53, 17, 17, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    //210942984:210942991 210942944:210942959 53:53 22:22 17:17 17:17 17:17 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0 0:0
    Packet p = {210942984, 210942944, 53, 22, 17, 17, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    return classifier.ClassifyAPacket(p);   
}
