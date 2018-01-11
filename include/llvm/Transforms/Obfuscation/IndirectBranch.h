#ifndef _INDIRECT_BRANCH_H_
#define _INDIRECT_BRANCH_H_
#include "llvm/Pass.h"
#include "llvm/IR/LegacyPassManager.h"
using namespace std;
using namespace llvm;

// Namespace
namespace llvm {
	Pass* createIndirectBranchPass();
	void initializeIndirectBranchPass(PassRegistry &Registry);
}
#endif
