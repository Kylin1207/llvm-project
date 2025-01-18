// #include "TargetInfo/Cpu0TargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
// #include "llvm/Support/Compiler.h"
using namespace llvm;

// Target &llvm::getTheCpu0Target() {
//   static Target TheCpu0Target;
//   return TheCpu0Target;
// }

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeCpu0TargetInfo() {
}