//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "USUXMVariableSchema.h"

@class NSNumber;

@interface USUXMFloatSchema : USUXMVariableSchema
{
    NSNumber *_minValue;
    NSNumber *_maxValue;
}

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isValidValue:(id)arg1;
@property(readonly, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(readonly, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;

@end
