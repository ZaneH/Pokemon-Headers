//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UpsightStorableObject.h"

@class USEventDataAssociation;

@interface USAssociationStorable : UpsightStorableObject
{
    double _timestamp;
    USEventDataAssociation *_association;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) USEventDataAssociation *association; // @synthesize association=_association;
- (id)initWithEventDataAssociation:(id)arg1;
- (id)initWithType:(id)arg1 version:(id)arg2 ID:(id)arg3;
- (void)resetTimestamp;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

@end

