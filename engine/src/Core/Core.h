#pragma once


#ifdef LMC_EXPORT
// Exports
#ifdef _MSC_VER
#define LMC_API __declspec(dllexport)
#else
#define LMC_API __attribute__((visibility("default")))
#endif
#else
// Imports
#ifdef _MSC_VER
#define LMC_API __declspec(dllimport)
#else
#define LMC_API
#endif
#endif