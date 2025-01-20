add_llvm_component_library(LLVMTinyRISCVDesc
  TinyRISCVMCTargetDesc.cpp
  
  LINK_COMPONENTS
  CodeGenTypes
  MC
  TinyRISCVInfo
  Support
  TargetParser

  ADD_TO_COMPONENT
  TinyRISCV
  )
