#include <string.h>
#include <jni.h>

extern "C"{
    jstring Java_kashim_ndksample_MainActivity_stringFromJNI( JNIEnv* env, jobject thiz ){
            return env->NewStringUTF("PIPPO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    }
}