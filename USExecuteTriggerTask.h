//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimer, USActionMap;

@interface USExecuteTriggerTask : NSObject
{
    _Bool _canceled;
    USActionMap *_map;
    double _timeout;
    NSString *_timeoutTrigger;
    NSString *_cancelTrigger;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)cancel;
@property(readonly, nonatomic) NSString *cancelTrigger; // @synthesize cancelTrigger=_cancelTrigger;
- (id)init;
- (id)initWithActionMap:(id)arg1 timeout:(double)arg2 timeoutTrigger:(id)arg3 cancelTrigger:(id)arg4;
@property(nonatomic, getter=isCanceled) _Bool canceled; // @synthesize canceled=_canceled;
@property(readonly, nonatomic) USActionMap *map; // @synthesize map=_map;
- (void)onTimeoutDidFire:(id)arg1;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSString *timeoutTrigger; // @synthesize timeoutTrigger=_timeoutTrigger;

@end
