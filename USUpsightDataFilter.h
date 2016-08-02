//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface USUpsightDataFilter : NSObject <NSCoding>
{
    NSString *_key;
    NSArray *_values;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 values:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToFilter:(id)arg1;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (_Bool)matchesUpsightData:(id)arg1;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;

@end
