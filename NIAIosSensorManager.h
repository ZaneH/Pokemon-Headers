//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager, NSOperationQueue;

@interface NIAIosSensorManager : NSObject
{
    struct SensorUpdate _sensorProto;
    CMMotionManager *_motionManager;
    NSOperationQueue *_sensorQueue;
    struct IosSensorProvider *_sensorProvider;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)processDeviceMotion:(id)arg1 error:(id)arg2;
@property(nonatomic) struct IosSensorProvider *sensorProvider; // @synthesize sensorProvider=_sensorProvider;
- (void)start;
- (void)stop;

@end
