///If a function contains _ at its start, it means that the networked variable/function was referenced twice but might be different offset.

#ifndef SDK_CTEMetalSparks
#define SDK_CTEMetalSparks
#pragma once

class CTEMetalSparks
{
 public:

   class DT_TEMetalSparks
   {
    public:

      template<typename T = unsigned long> __forceinline static T vecPos() { return ( T ) 0x10; }
      template<typename T = unsigned long> __forceinline static T vecDir() { return ( T ) 0x1C; }
   };
};

#endif
