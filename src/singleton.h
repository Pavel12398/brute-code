#ifndef _SINGLETON_H
#define _SINGLETON_H

#define DECLARE_SINGLETON(cls)          \
private:                                \
    static cls*	sm_poSingleton;         \
public:                                 \
    static void CreateInstance()        \
    {                                   \
     if (sm_poSingleton == NULL)        \
       {                                \
            sm_poSingleton = new cls(); \
       }                                \
   }                                    \
    static void DestroyInstance()       \
    {                                   \
      if (sm_poSingleton != NULL)       \
        {                               \
          delete sm_poSingleton;        \
          sm_poSingleton = NULL;        \
       }                                \
   }                                    \
    static cls* GetInstance()           \
    {                                   \
      return sm_poSingleton;            \
    } 

#define INSTANCE_SINGLETON(type)	type* type::sm_poSingleton = NULL;
#define SINGLETON_CREATE_INIT(Klass)   Klass::CreateInstance();
#define SINGLETON_DESTORY_UNINIT(Klass) Klass::DestroyInstance();

#endif