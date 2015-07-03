#include <jni.h>
#include <string.h>

#ifdef __cplusplus
    extern "C"{
#endif
        jstring Java_kashim_ndksample_MainActivity_stringFromJNI( JNIEnv* env, jobject thiz ){
            return env->NewStringUTF("Method return text string DEBUG!");
        }
#ifdef __cplusplus
    }
#endif