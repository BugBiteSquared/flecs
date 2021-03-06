/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef INHERITANCE_BAKE_CONFIG_H
#define INHERITANCE_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>

/* Headers of private dependencies */
#ifdef INHERITANCE_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef INHERITANCE_STATIC
  #if INHERITANCE_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define INHERITANCE_EXPORT __declspec(dllexport)
  #elif INHERITANCE_IMPL
    #define INHERITANCE_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define INHERITANCE_EXPORT __declspec(dllimport)
  #else
    #define INHERITANCE_EXPORT
  #endif
#else
  #define INHERITANCE_EXPORT
#endif

#endif

