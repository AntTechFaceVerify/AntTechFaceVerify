//
//  ASSCommon.h
//  ae-security-sdk
//
//  Created by xingchen on 14/12/30.
//  Copyright (c) 2014年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASSLogger.h"

//#define IN_DEBUG
#define USED_BY_ALIPAY

extern NSString* const PRIVATE_KEY_XXXX;

extern NSString* const PRIVATE_KEY_CLIENTKEY;



//LOG信息
extern NSString* const LOG_SWITCH_SETTING_INITIALIZED;

extern NSString* const LOG_LOAD_SETTING_EXCEPTION;

extern NSString* const LOG_DECRYPT_SETTING_EXCEPTION;

extern NSString* const LOG_SWITCH_APPLIST_INITIALIZED;

extern NSString* const LOG_LOAD_APPLIST_EXCEPTION;

extern NSString* const LOG_DECRYPT_APPLIST_EXCEPTION;

extern NSString* const LOG_UMID_TOKEN_REQUEST_BACK;

extern NSString* const LOG_VKEYINFO_GENERATED;

extern NSString* const LOG_VKEYINFO_ABORT;

extern NSString* const LOG_VKEY_NO_KEYCHAIN_CACHE;

extern NSString* const LOG_VKEY_FOUND_KEYCHAIN_CACHE;

extern NSString* const LOG_VKEY_GENERATION_EXCEPTION;

extern NSString* const LOG_GID_GENERATED;

extern NSString* const LOG_GID_ABORT;

extern NSString* const LOG_GID_NO_KEYCHAIN_CACHE;

extern NSString* const LOG_GID_FOUND_KEYCHAIN_CACHE;

extern NSString* const LOG_GID_INFO_DETAIL;

extern NSString* const LOG_GID_GENERATION_EXCEPTION;

extern NSString* const LOG_VKEY_INFO_DETAIL;

extern NSString* const LOG_VOS_RUNNING;

extern NSString* const LOG_VOS_VKEY_GENERATION;

extern NSString* const LOG_VOS_GID_GENERATION;

extern NSString* const LOG_VOS_ASYNC_ABORT;

extern NSString* const LOG_JB_ERROR_DETECTED;

extern NSString* const LOG_STATIC_INFO_DETAIL;

extern NSString* const LOG_APP_LIST_INFO_COLLECTED;

extern NSString* const LOG_APP_LIST_INFO_ABORT;

extern NSString* const LOG_LOAD_MODEL_KEYCHAIN_EXCEPTION;

extern NSString* const LOG_LOAD_MODEL_FROM_KEYCHAIN;

extern NSString *const LOG_LOCALMODEL_ABSENT;

extern NSString *const LOG_LOCALMODEL_LOADSUCCESS;

extern NSString *const LOG_LOAD_PREAPDID_SUCCESS;

extern NSString *const LOG_LOAD_PREAPDID_FAILED;

extern NSString* const LOG_STATIC_INFO_CHANGED;

extern NSString* const LOG_STATIC_INFO_SAME;

extern NSString* const LOG_TODAY_FIRST;

extern NSString* const LOG_NOT_TODAY_FIRST;

extern NSString *const LOG_GETAPDIDTOKEN_RET_LOCAL;

extern NSString* const LOG_CONNECT_TO_SERVER;

extern NSString* const LOG_REQUEST_INFO_INCLUDED;

extern NSString* const LOG_REQUEST_INFO_EXCLUDED;

extern NSString* const LOG_STATIC_REQUEST_EXCEPTION;

extern NSString* const LOG_STATIC_REQUEST_SUCCESS;

extern NSString* const LOG_SERVER_RESPONSE_SUCCESS;

extern NSString* const LOG_SERVER_RESPONSE_FAILED;

extern NSString *const LOG_LOCALMODEL_SAVED_KEYCHAIN;

extern NSString *const LOG_UPDATE_SETTING;

extern NSString* const LOG_APP_LIST_NEED_UPDATE;

extern NSString *const LOG_UPDATE_APPLIST;

extern NSString* const LOG_APPLIST_SETTING_SAVED_KEYCHAIN;

extern NSString* const LOG_APP_LIST_REQUEST_EXCEPTION;

extern NSString* const LOG_APP_LIST_RESPONSE_FAILED;

extern NSString* const LOG_LOG_UPDATE_EXCEPTION;

extern NSString* const LOG_LOG_UPLOAD_ERROR;

extern NSString* const LOG_SETTINGMODEL_SAVEFAILED;

extern NSString* const LOG_SETTINGMODEL_SUCCESS;

extern NSString* const LOG_LOG_REQUEST_RESPONSE;

extern NSString* const LOG_JSON_PARSE_EXCEPTION;

extern NSString* const LOG_LOG_UPLOAD_PROCESS;

extern NSString* const LOG_LOG_UPLOAD_ABORT;

extern NSString* const LOG_LOG_UPLOAD_SUCCESS;

extern NSString* const LOG_LOG_FILE_DETAIL;

extern NSString* const LOG_LOG_FILE_REMOVAL;

extern NSString* const LOG_LOG_UPLOAD_START;

extern NSString* const LOG_LOG_UPLOAD_DETAIL;

//网络响应类转Dictionary的KEY
extern NSString* const ASS_STORAGE_KEY_SUCCESS;

extern NSString* const ASS_STORAGE_KEY_APDID;

extern NSString* const ASS_STORAGE_KEY_TOKEN;

extern NSString* const ASS_STORAGE_KEY_TIME;

extern NSString* const ASS_STORAGE_KEY_VKEYSWITCH;

extern NSString* const ASS_STORAGE_KEY_LOGSWITCH;

extern NSString* const ASS_STORAGE_KEY_APPLISTVERSION;

extern NSString* const ASS_STORAGE_KEY_STATICHASH;

extern NSString* const ASS_STORAGE_KEY_ERROR;

extern NSString* const ASS_STORAGE_KEY_WEBRTCURL;

extern NSString* const ASS_STORAGE_KEY_DYNAMICKEY;

extern NSString* const ASS_STORAGE_KEY_AGENTURL;

extern NSString* const ASS_STORAGE_KEY_APSE_DEGRADE;

extern NSString* const ASS_STORAGE_KEY_TIMEINTERVAL;

//keychain保存的key值
extern NSString* const SECURE_SDK_KEYCHAIN_KEY;

extern NSString* const LAST_LOGIN_TIME_KEY;

extern NSString* const SECURE_SDK_RANDOM_STRING;

extern NSString* const SECURE_SDK_RANDOM_TOKEN;

extern NSString* const SECURE_SDK_RANDOM_CLIENTKEY_STRING;

extern NSString* const ASS_KEYCHAIN_KEY_SETTING;

extern NSString* const ASS_KEYCHAIN_KEY_APPLIST;

extern NSString* const ASS_KEYCHAIN_KEY_DFP;

extern NSString* const ASS_KEYCHAIN_KEY_GID;

extern NSString* const ASS_KEYCHAIN_KEY_JBER;

extern NSString* const ASS_KEYCHAIN_KEY_APDIDC;

extern NSString* const ASS_KEYCHAIN_KEY_TMXTIME;

extern NSString* const ASS_KEYCHAIN_KEY_TMXSESSOINID;

extern NSString* const ASS_KEYCHAIN_KEY_ARPMAC;

extern NSString* const ASS_KEYCHAIN_KEY_DYNAMICKEY;

extern NSString* const ASS_USER_DEFAULT_KEY_DEGRADE_TIME;

extern const int overtime;

extern NSString* const PREDEFINE_VERSION;

extern NSString* const PREDEFINE_DATA;

extern NSString* const URL_SCHEME_WHITELIST_VERSION;

extern NSString* const URL_SCHEME_WHITELIST_DATA;

extern NSString* const ASS_APPKEY_INVALID;
extern NSString* const SECURE_SDK_KEYCHAIN_TOKEN;

extern NSErrorDomain APSECURITYSDK_ERROR_DOMAIN;

//CRASHGUARD
extern NSString* const CRASH_GUARD_GET_COLOR_INFO;
extern NSString* const CRASH_GUARD_PRE_COLOR_INFO;
extern NSString* const CRASH_GUARD_INIT_COLOR_INFO;
extern NSString* const CRASH_GUARD_UPDATE_COLOR_CODE;
extern NSString* const CRASH_GUARD_GET_COLOR_LABEL;
extern NSString* const CRASH_GUARD_UPDATE_COLOR_LABEL;
extern NSString* const CRASH_GUARD_INIT_TOKEN;
extern NSString* const CRASH_GUARD_INIT;


@interface ASSCommon : NSObject

+ (int)getCurrentMode;

+ (NSString*)getRPCURL;

+ (NSString*)getServerHost;

+ (void) setRPCHeader:(NSDictionary*)header;

+ (NSDictionary*)getRPCHeader;

+ (void)setupEnvironmentMode:(int)mode;

+ (void)setupRPCAddress:(NSString*)address;

+ (BOOL)useURLWhitelist;

+ (BOOL)checkDeviceSystemVersion;

+ (void)setSecuritySDKConfig:(int)address;

+ (void)setRpcHeaderAppid:(NSString*)apid;

+ (NSString*)getRpcHeaderAppid;

+ (void)setRpcHeaderWorkspaceid:(NSString*)spaceid;

+ (NSString*)getRpcHeaderWorkspaceid;

@end
