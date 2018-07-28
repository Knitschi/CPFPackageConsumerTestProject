# Root CMakeLists file for the "CMakeProjectFramework"
cmake_minimum_required (VERSION 3.8.0) 

include("CPFCMake/Functions/cpfInit.cmake")
include("${CMAKE_TOOLCHAIN_FILE}")					# make sure the compiler is set before the project call


##################################### CREATE PROJECT ########################################
project(PackageConsumeTestProject)
cpfInit()

##################################### FIND MyLib package ########################################
find_package( MyLib 0.0.2 CONFIG REQUIRED
	PATHS "${CMAKE_SOURCE_DIR}/../MyLib"
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
