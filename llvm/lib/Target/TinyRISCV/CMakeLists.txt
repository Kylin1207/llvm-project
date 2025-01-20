add_llvm_component_group(TinyRISCV HAS_JIT)

add_llvm_target(TinyRISCVCodeGen
  TinyRISCVMachine.cpp

  LINK_COMPONENTS
  Support
  MC

  ADD_TO_COMPONENT
  TinyRISCV
)

add_subdirectory(TargetInfo)
add_subdirectory(MCTargetDesc)