#include "RecoTracker/LSTCore/interface/LSTPrepareInput.h"

class LSTPrepareInput {
public:
    void someMethod() {
        // Check for null pointer before passing to the method that expects a non-null pointer
        if (inputPointer != nullptr) {
            processInput(inputPointer);
        } else {
            throw std::runtime_error("Null pointer passed to method that expects a non-null pointer");
        }
    }

private:
    // Assuming inputPointer is the pointer that is causing the null pointer dereference
    TSomeType* inputPointer = nullptr;
    void processInput(TSomeType* ptr) {
        // Implementation of processInput
    }
};