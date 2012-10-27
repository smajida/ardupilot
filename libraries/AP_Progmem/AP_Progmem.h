
#ifndef __AP_PROGMEM_H__
#define __AP_PROGMEM_H__

#if defined(__AVR__) 
#include "AP_Progmem_AVR.h"
#elif defined(DESKTOP_BUILD)
#include "AP_Progmem_DesktopBuild.h"
#else
#include "AP_Progmem_Identity.h"
#endif

#define PROGMEM_STRING(_v, _s)  static const char _v[] PROGMEM = _s

#endif // __AP_PROGMEM_H__
