//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UnityPLCrashReportRegisterInfo : NSObject
{
    NSString *_registerName;
    unsigned long long _registerValue;
}

- (void)dealloc;
- (id)initWithRegisterName:(id)arg1 registerValue:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *registerName; // @synthesize registerName=_registerName;
@property(readonly, nonatomic) unsigned long long registerValue; // @synthesize registerValue=_registerValue;

@end

