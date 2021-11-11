#pragma once
#ifdef WINDOWS
#ifdef DLL
#define KILO_API __declspec(dllexport)
#else
#define KILO_API __declspec(dllimport)
#endif
#endif
#include <iostream>
#include <functional>
typedef void* dyn;
namespace Kilo { namespace Core {} }
