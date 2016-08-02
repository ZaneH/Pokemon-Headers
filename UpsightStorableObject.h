//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, UpsightInternalObject;

@interface UpsightStorableObject : NSObject
{
    _Bool _readOnly;
    NSString *_type;
    NSNumber *_version;
    NSString *_ID;
    UpsightInternalObject *_internalObject;
    NSNumber *_storeCount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (id)dictionaryRepresentation:(id *)arg1;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)initWithType:(id)arg1 version:(id)arg2 ID:(id)arg3;
@property(retain, nonatomic) UpsightInternalObject *internalObject; // @synthesize internalObject=_internalObject;
- (id)propertyNames;
@property(nonatomic) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(retain, nonatomic) NSNumber *storeCount; // @synthesize storeCount=_storeCount;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSNumber *version; // @synthesize version=_version;

@end

