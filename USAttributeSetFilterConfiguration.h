//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "USConfigurationBase.h"

@class NSString;

@interface USAttributeSetFilterConfiguration : USConfigurationBase
{
    NSString *_filter;
    NSString *_attributeSet;
}

+ (_Bool)isValidConfigurationDictionary:(id)arg1;
+ (id)requiredKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *attributeSet; // @synthesize attributeSet=_attributeSet;
@property(retain, nonatomic) NSString *filter; // @synthesize filter=_filter;
- (id)initWithConfigurationDictionary:(id)arg1;

@end
