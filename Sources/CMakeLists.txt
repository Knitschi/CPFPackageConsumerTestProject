# Root CMakeLists file for the "CMakeProjectFramework"
cmake_minimum_required (VERSION 3.8.0) 

include("CPFCMake/Functions/cpfAddPackages.cmake")
include("${CMAKE_TOOLCHAIN_FILE}")					# make sure the compiler is set before the project call


##################################### CREATE PROJECT ########################################
project(PackageConsumeTestProject)
cpfInit()

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

####################################### ADD Packages #############################################

set( externalPackages
	cotire
	CPFCMake
	CPFBuildscripts
)

set( globalFiles
)

cpfAddPackages( "${externalPackages}" "${globalFiles}")
