//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "USBaseAction.h"

@class NSString;

@interface USPresentScopelessContentAction : USBaseAction
{
    NSString *_selfID;
    NSString *_nextID;
}

+ (id)type;
- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1 map:(id)arg2 handler:(id)arg3;
@property(readonly, nonatomic) NSString *nextID; // @synthesize nextID=_nextID;
@property(readonly, nonatomic) NSString *selfID; // @synthesize selfID=_selfID;

@end
