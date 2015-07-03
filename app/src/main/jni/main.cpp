#include <jni.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <time.h>
#include <linux/fb.h>
#include <linux/kd.h>

#ifdef __cplusplus
    extern "C"{
#endif

        jstring Java_kashim_ndksample_MainActivity_stringFromJNI( JNIEnv* env, jobject thiz ){
            return env->NewStringUTF("Method return text string DEBUG!");
        }

#ifdef __cplusplus
    }
#endif