///If a function contains _ at its start, it means that the networked variable/function was referenced twice but might be different offset.

#ifndef SDK_CTESprite
#define SDK_CTESprite
#pragma once

class CTESprite
{
 public:

   class DT_TESprite
   {
    public:

      template<typename T = unsigned long> __forceinline static T vecOrigin() { return ( T ) 0x10; }
      template<typename T = unsigned long> __forceinline static T nModelIndex() { return ( T ) 0x1C; }
      template<typename T = unsigned long> __forceinline static T fScale() { return ( T ) 0x20; }
      template<typename T = unsigned long> __forceinline static T nBrightness() { return ( T ) 0x24; }
   };
};

#endif
