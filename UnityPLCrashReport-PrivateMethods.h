//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UnityPLCrashReport.h"

@interface UnityPLCrashReport (PrivateMethods)
- (struct _Plcrash__CrashReport *)decodeCrashData:(id)arg1 error:(id *)arg2;
- (id)extractApplicationInfo:(struct _Plcrash__CrashReport__ApplicationInfo *)arg1 error:(id *)arg2;
- (id)extractExceptionInfo:(struct _Plcrash__CrashReport__Exception *)arg1 error:(id *)arg2;
- (id)extractImageInfo:(struct _Plcrash__CrashReport *)arg1 error:(id *)arg2;
- (id)extractMachExceptionInfo:(struct _Plcrash__CrashReport__Signal__MachException *)arg1 error:(id *)arg2;
- (id)extractMachineInfo:(struct _Plcrash__CrashReport__MachineInfo *)arg1 error:(id *)arg2;
- (id)extractProcessInfo:(struct _Plcrash__CrashReport__ProcessInfo *)arg1 error:(id *)arg2;
- (id)extractProcessorInfo:(struct _Plcrash__CrashReport__Processor *)arg1 error:(id *)arg2;
- (id)extractSignalInfo:(struct _Plcrash__CrashReport__Signal *)arg1 error:(id *)arg2;
- (id)extractStackFrameInfo:(struct _Plcrash__CrashReport__Thread__StackFrame *)arg1 error:(id *)arg2;
- (id)extractSymbolInfo:(struct _Plcrash__CrashReport__Symbol *)arg1 error:(id *)arg2;
- (id)extractSystemInfo:(struct _Plcrash__CrashReport__SystemInfo *)arg1 error:(id *)arg2;
- (id)extractThreadInfo:(struct _Plcrash__CrashReport *)arg1 error:(id *)arg2;
@end

