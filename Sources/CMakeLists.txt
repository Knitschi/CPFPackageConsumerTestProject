# Root CMakeLists file for the CPFPackageConsumerTestProject

include("CPFCMake/cpfInitCIProject.cmake")
cmake_minimum_required (VERSION ${CPF_MINIMUM_CMAKE_VERSION}) 

project(CPFPackageConsumerTestProject)

##################################### FIND MyLib package ########################################
if(NOT DEFINED MYLIB_VERSION)
	message(FATAL_ERROR "You need to define the cmake cache variable MYLIB_VERSION.")
endif()

if(NOT DEFINED MYLIB_LOCATION)
	message(FATAL_ERROR "You need to define the cmake cache variable MYLIB_LOCATION.")
endif()

find_package( MyLib ${MYLIB_VERSION} CONFIG REQUIRED
	PATHS "${MYLIB_LOCATION}"
)

cpfAddPackages()
