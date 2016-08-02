//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UnityPLCrashReportApplicationInfo, UnityPLCrashReportExceptionInfo, UnityPLCrashReportMachExceptionInfo, UnityPLCrashReportMachineInfo, UnityPLCrashReportProcessInfo, UnityPLCrashReportSignalInfo, UnityPLCrashReportSystemInfo;

@interface UnityPLCrashReport : NSObject
{
    struct _PLCrashReportDecoder *_decoder;
    UnityPLCrashReportSystemInfo *_systemInfo;
    UnityPLCrashReportMachineInfo *_machineInfo;
    UnityPLCrashReportApplicationInfo *_applicationInfo;
    UnityPLCrashReportProcessInfo *_processInfo;
    UnityPLCrashReportSignalInfo *_signalInfo;
    UnityPLCrashReportMachExceptionInfo *_machExceptionInfo;
    NSArray *_threads;
    NSArray *_images;
    UnityPLCrashReportExceptionInfo *_exceptionInfo;
    struct __CFUUID *_uuid;
}

@property(readonly, nonatomic) UnityPLCrashReportApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
- (void)dealloc;
@property(readonly, nonatomic) UnityPLCrashReportExceptionInfo *exceptionInfo; // @synthesize exceptionInfo=_exceptionInfo;
@property(readonly, nonatomic) _Bool hasExceptionInfo;
@property(readonly, nonatomic) _Bool hasMachineInfo;
@property(readonly, nonatomic) _Bool hasProcessInfo;
- (id)imageForAddress:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
- (id)initWithData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) UnityPLCrashReportMachExceptionInfo *machExceptionInfo; // @synthesize machExceptionInfo=_machExceptionInfo;
@property(readonly, nonatomic) UnityPLCrashReportMachineInfo *machineInfo; // @synthesize machineInfo=_machineInfo;
@property(readonly, nonatomic) UnityPLCrashReportProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, nonatomic) UnityPLCrashReportSignalInfo *signalInfo; // @synthesize signalInfo=_signalInfo;
@property(readonly, nonatomic) UnityPLCrashReportSystemInfo *systemInfo; // @synthesize systemInfo=_systemInfo;
@property(readonly, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(readonly, nonatomic) struct __CFUUID *uuidRef; // @synthesize uuidRef=_uuid;

@end

