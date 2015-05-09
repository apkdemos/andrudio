/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class danbroid_andrudio_LibAndrudio */

#ifndef _Included_danbroid_andrudio_LibAndrudio
#define _Included_danbroid_andrudio_LibAndrudio
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    initializeLibrary
 * Signature: (Ljava/lang/Class;)I
 */
JNIEXPORT jint JNICALL Java_danbroid_andrudio_LibAndrudio_initializeLibrary
  (JNIEnv *, jclass, jclass);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    _create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_danbroid_andrudio_LibAndrudio__1create
  (JNIEnv *, jclass);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    setListener
 * Signature: (JLdanbroid/andrudio/LibAndrudio/AudioStreamListener;)V
 */
JNIEXPORT void JNICALL Java_danbroid_andrudio_LibAndrudio_setListener
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_danbroid_andrudio_LibAndrudio_destroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    prepareAsync
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_danbroid_andrudio_LibAndrudio_prepareAsync
  (JNIEnv *, jclass, jlong);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    start
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_danbroid_andrudio_LibAndrudio_start
  (JNIEnv *, jclass, jlong);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    stop
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_danbroid_andrudio_LibAndrudio_stop
  (JNIEnv *, jclass, jlong);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    reset
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_danbroid_andrudio_LibAndrudio_reset
  (JNIEnv *, jclass, jlong);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    togglePause
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_danbroid_andrudio_LibAndrudio_togglePause
  (JNIEnv *, jclass, jlong);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    getDuration
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_danbroid_andrudio_LibAndrudio_getDuration
  (JNIEnv *, jclass, jlong);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    getPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_danbroid_andrudio_LibAndrudio_getPosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    seekTo
 * Signature: (JIZ)I
 */
JNIEXPORT jint JNICALL Java_danbroid_andrudio_LibAndrudio_seekTo
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    _setDataSource
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_danbroid_andrudio_LibAndrudio__1setDataSource
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    isLooping
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_danbroid_andrudio_LibAndrudio_isLooping
  (JNIEnv *, jclass, jlong);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    setLooping
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_danbroid_andrudio_LibAndrudio_setLooping
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    isPlaying
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_danbroid_andrudio_LibAndrudio_isPlaying
  (JNIEnv *, jclass, jlong);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    printStatus
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_danbroid_andrudio_LibAndrudio_printStatus
  (JNIEnv *, jclass, jlong);

/*
 * Class:     danbroid_andrudio_LibAndrudio
 * Method:    getMetaData
 * Signature: (JLjava/util/Map;)I
 */
JNIEXPORT jint JNICALL Java_danbroid_andrudio_LibAndrudio_getMetaData
  (JNIEnv *, jclass, jlong, jobject);

#ifdef __cplusplus
}
#endif
#endif
