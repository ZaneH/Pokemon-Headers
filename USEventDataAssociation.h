//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSString, USUpsightDataFilter;

@interface USEventDataAssociation : NSObject <NSCoding>
{
    NSString *_eventType;
    USUpsightDataFilter *_upsightDataFilter;
    NSDictionary *_upsightData;
}

+ (id)associationWithEventType:(id)arg1 upsightDataFilter:(id)arg2 upsightData:(id)arg3;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(id)arg1 upsightDataFilter:(id)arg2 upsightData:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToAssociation:(id)arg1;
@property(readonly, nonatomic) NSDictionary *upsightData; // @synthesize upsightData=_upsightData;
@property(readonly, nonatomic) USUpsightDataFilter *upsightDataFilter; // @synthesize upsightDataFilter=_upsightDataFilter;

@end

