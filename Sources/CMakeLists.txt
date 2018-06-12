# Root CMakeLists file for the "CMakeProjectFramework"
cmake_minimum_required (VERSION 3.8.0) 

include("CPFCMake/Functions/cpfInit.cmake")
include("${CMAKE_TOOLCHAIN_FILE}")					# make sure the compiler is set before the project call


##################################### CREATE PROJECT ########################################
project(SimpleOneLibCPFTestProject)
cpfInit()

##################################### FIND MyLib package ########################################
find_package( 
	MyLib CONFIG
	PATHS "${CMAKE_SOURCE_DIR}/../MyLib"
	#REQUIRED COMPONENTS mylib::MyLib
	
)

devMessage("${MyLib_Dir}")
devMessage("${MyLib_CONSIDERED_VERSIONS}")
devMessage("${MyLib_CONSIDERED_CONFIGS}")


####################################### ADD Packages #############################################

set( externalPackages
	cotire
	CPFCMake
	CPFBuildscripts
)

set( globalFiles
)

cpfAddPackages( "${externalPackages}" "${globalFiles}")
