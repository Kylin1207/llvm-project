add_llvm_component_group(Cpu0 HAS_JIT)

add_llvm_target(Cpu0CodeGen
  Cpu0TargetMachine.cpp

  LINK_COMPONENTS
  MC
  Support
  Cpu0Info
  Cpu0Desc
)

add_subdirectory(TargetInfo)
add_subdirectory(MCTargetDesc)