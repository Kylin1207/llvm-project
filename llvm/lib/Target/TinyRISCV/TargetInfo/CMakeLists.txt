add_llvm_component_library(LLVMTinyRISCVInfo
  TinyRISCVTargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  TinyRISCV
  )
