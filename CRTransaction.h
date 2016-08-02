//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSTimer;

@interface CRTransaction : NSObject
{
    _Bool _cr_isForegrounded;
    int _state;
    int _value;
    int _transactionId;
    double _timeout;
    NSDictionary *_metadata;
    double _beginTime;
    double _endTime;
    double _eyeTime;
    double _cr_foregroundTime;
    NSString *_name;
    NSString *_cr_beginTimeString;
    NSString *_cr_endTimeString;
    NSString *_cr_foregroundTimeString;
    NSTimer *_cr_timer;
}

+ (id)allTransactions;
+ (id)transactionForId:(int)arg1;
+ (id)transactionForName:(id)arg1;
- (void).cxx_destruct;
- (void)begin;
@property(readonly, nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
- (void)cancel;
- (double)clampTimeout:(double)arg1;
- (void)cr_background:(double)arg1;
@property(copy, nonatomic) NSString *cr_beginTimeString; // @synthesize cr_beginTimeString=_cr_beginTimeString;
- (void)cr_createTimer:(id)arg1;
- (void)cr_createTimerOnMainThread;
@property(copy, nonatomic) NSString *cr_endTimeString; // @synthesize cr_endTimeString=_cr_endTimeString;
- (void)cr_foreground:(double)arg1;
@property(nonatomic) double cr_foregroundTime; // @synthesize cr_foregroundTime=_cr_foregroundTime;
@property(copy, nonatomic) NSString *cr_foregroundTimeString; // @synthesize cr_foregroundTimeString=_cr_foregroundTimeString;
- (_Bool)cr_isFinal;
@property(nonatomic) _Bool cr_isForegrounded; // @synthesize cr_isForegrounded=_cr_isForegrounded;
- (_Bool)cr_legalMetadataKey:(id)arg1;
- (_Bool)cr_legalMetadataObject:(id)arg1;
- (void)cr_removeTimer;
- (void)cr_removeTimerOnMainThread;
- (void)cr_setBeginTime:(double)arg1;
- (void)cr_setEndTime:(double)arg1;
- (void)cr_setState:(int)arg1 atTime:(double)arg2;
@property(retain, nonatomic) NSTimer *cr_timer; // @synthesize cr_timer=_cr_timer;
- (void)cr_timerFired:(id)arg1;
- (id)cr_toArray;
- (id)cr_toJSONString;
- (void)cr_transition:(int)arg1;
- (void)crash;
- (void)dealloc;
- (void)end;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double eyeTime; // @synthesize eyeTime=_eyeTime;
- (void)fail;
- (id)init:(id)arg1;
- (id)init:(id)arg1 withValue:(int)arg2;
- (id)initAuto:(id)arg1 withBeginTime:(double)arg2 withEndTime:(double)arg3;
- (id)initFromFile:(id)arg1;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) int value; // @synthesize value=_value;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) int transactionId; // @synthesize transactionId=_transactionId;

@end

