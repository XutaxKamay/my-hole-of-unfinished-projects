///If a function contains _ at its start, it means that the networked variable/function was referenced twice but might be different offset.

#ifndef SDK_CTEGaussExplosion
#define SDK_CTEGaussExplosion
#pragma once

class CTEGaussExplosion
{
 public:

   class DT_TEGaussExplosion
   {
    public:

      class DT_TEParticleSystem
      {
       public:

         template<typename T = unsigned long> __forceinline static T vecOrigin_0() { return ( T ) 0x10; }
         template<typename T = unsigned long> __forceinline static T vecOrigin_1() { return ( T ) 0x14; }
         template<typename T = unsigned long> __forceinline static T vecOrigin_2() { return ( T ) 0x18; }
      };

      template<typename T = unsigned long> __forceinline static T nType() { return ( T ) 0x1C; }
      template<typename T = unsigned long> __forceinline static T vecDirection() { return ( T ) 0x20; }
   };
};

#endif
