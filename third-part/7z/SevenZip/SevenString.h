#pragma once


#include <tchar.h>
#include <string>


namespace SevenZipEx
{
#ifdef _UNICODE
	typedef std::wstring TString;
#else
	typedef std::string TString;
#endif
}
