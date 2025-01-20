#include "TargetInfo/TinyRISCVTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;

Target &llvm::getTheTinyRISCVTarget() {
  static Target TheTinyRISCVTarget;
  return TheTinyRISCVTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeTinyRISCVTargetInfo() {
  RegisterTarget<Triple::mips,
                 /*HasJIT=*/true>
      X(getTheTinyRISCVTarget(), "tiny-riscv", "MIPS (32-bit big endian)", "Mips");
}
