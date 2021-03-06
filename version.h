#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char version_DATE[] = "02";
	static const char version_MONTH[] = "04";
	static const char version_YEAR[] = "2021";
	static const char version_UBUNTU_VERSION_STYLE[] =  "21.04";
	
	//Software Status
	static const char version_STATUS[] =  "Beta";
	static const char version_STATUS_SHORT[] =  "b";
	
	//Standard Version Type
	static const long version_MAJOR  = 1;
	static const long version_MINOR  = 0;
	static const long version_BUILD  = 11;
	static const long version_REVISION  = 47;
	
	//Miscellaneous Version Types
	static const long version_BUILDS_COUNT  = 11;
	#define version_RC_FILEVERSION 1,0,11,47
	#define version_RC_FILEVERSION_STRING "1, 0, 11, 47\0"
	static const char version_FULLVERSION_STRING [] = "1.0.11.47";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long version_BUILD_HISTORY  = 11;
	

}
#endif //VERSION_H
