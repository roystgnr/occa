if (WITH_CUDA)
  add_cpp_test(lang-mode-cuda cuda.cpp)
endif()
if (WITH_METAL)
  add_cpp_test(lang-mode-metal metal.cpp)
endif()
add_cpp_test(lang-mode-okl okl.cpp)
if (WITH_OPENCL)
  add_cpp_test(lang-mode-opencl opencl.cpp)
endif()
if (WITH_OPENMP)
  add_cpp_test(lang-mode-openmp openmp.cpp)
endif()
add_cpp_test(lang-mode-serial serial.cpp)
