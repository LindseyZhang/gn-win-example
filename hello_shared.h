#ifndef HELLO_SHARED_H_
#define HELLO_SHARED_H_

#include <string>
#if defined(HELLO_SHARED_IMPLEMENTATION)
#define HELLO_EXPORT __declspec(dllexport)
#define HELLO_EXPORT_PRIVATE __declspec(dllexport)
#else
#define HELLO_EXPORT __declspec(dllimport)
#define HELLO_EXPORT_PRIVATE __declspec(dllimport)
#endif  // defined(HELLO_SHARED_IMPLEMENTATION)

HELLO_EXPORT const std::string GetSharedText();

#endif  // HELLO_SHARED_H_