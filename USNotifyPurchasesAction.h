//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "USBaseAction.h"

@class NSArray;

@interface USNotifyPurchasesAction : USBaseAction
{
    NSArray *_purchases;
}

+ (id)type;
- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1 map:(id)arg2 handler:(id)arg3;
@property(readonly, nonatomic) NSArray *purchases; // @synthesize purchases=_purchases;

@end
