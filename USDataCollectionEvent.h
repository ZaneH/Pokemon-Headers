//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "USEvent.h"

@class NSString;

@interface USDataCollectionEvent : USEvent
{
}

@property(readonly, copy, nonatomic) NSString *dataBundle;
@property(readonly, copy, nonatomic) NSString *format;
- (id)initWithParameters:(id)arg1 format:(id)arg2 dataBundle:(id)arg3 streamID:(id)arg4;
- (id)initWithType:(id)arg1 parameters:(id)arg2;
@property(readonly, copy, nonatomic) NSString *streamID;

@end
