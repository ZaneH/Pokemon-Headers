//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "USConditionalAction.h"

@class NSString;

@interface USTriggerIfContentAvailableAction : USConditionalAction
{
    NSString *_ID;
    double _timeout;
}

+ (id)type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (id)initWithParameters:(id)arg1 map:(id)arg2 handler:(id)arg3;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;

@end

