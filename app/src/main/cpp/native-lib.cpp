#include <jni.h>
#include <string>

extern "C"
jstring
Java_br_com_example_leonardomendes_popmoviesapp_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
