
include(cpfAddCppPackage)

cpfInitPackageProject()

set( briefDescription "A C++ libary used for testing if the library package is consumable." )
set( longDescription "" )


set( PACKAGE_PUBLIC_HEADER
)

set( PACKAGE_PRODUCTION_FILES
	main.cpp
	a.cpp
)

set( PACKAGE_PUBLIC_FIXTURE_HEADER
)

set( PACKAGE_FIXTURE_FILES
)
	
set( PACKAGE_TEST_FILES
)

set(PACKAGE_LINKED_LIBRARIES
	mylib::MyLib
	mylib::MyLib_fixtures
)

set(PACKAGE_LINKED_TEST_LIBRARIES
)

############################################## Add Package #################################
cpfAddCppPackage( 
	PACKAGE_NAMESPACE							myapp
	TYPE										CONSOLE_APP
	BRIEF_DESCRIPTION							${briefDescription}
	LONG_DESCRIPTION							${longDescription}
	PUBLIC_HEADER								${PACKAGE_PUBLIC_HEADER}
	PRODUCTION_FILES							${PACKAGE_PRODUCTION_FILES}
	PUBLIC_FIXTURE_HEADER						${PACKAGE_PUBLIC_FIXTURE_HEADER}
	FIXTURE_FILES								${PACKAGE_FIXTURE_FILES}
	TEST_FILES									${PACKAGE_TEST_FILES}
	LINKED_LIBRARIES							${PACKAGE_LINKED_LIBRARIES}
	LINKED_TEST_LIBRARIES						${PACKAGE_LINKED_TEST_LIBRARIES}
	ENABLE_ABI_API_COMPATIBILITY_REPORT_TARGETS FALSE
)
