#include <iotream>
using namespace std;

class MyClassifier {
public:
    MyClassifier() {}
    ~MyClassifier() {}

    void InitClass ();
    int doPartitionSort (const Packet& packet);

    string filterFile;
    PartitionSort classifier;
};